
const allConstruct = (target, wordBank) => {

  const table = Array(target.length+1).fill().map(() => []);
  table[0]= [[]];

  for(let i=0; i<=target.length; i++) {
    for(let word of wordBank) {
      if(target.slice(i, i+word.length) === word) {
        const newCombinations = table[i].map(way => [word, ...way]);
        table[i + word.length].push(...newCombinations);
      }
    }
  }
  return table[target.length];
}

console.log(allConstruct("abcdef", ['ab', 'abc', 'cd', 'def', 'abcd', 'ef', 'c'])); //[[ab, cd, ed], [ab, c, def], [abc, def], [abcd, ef]]
console.log(allConstruct("purple", ['purp', 'p', 'ur', 'le', 'purpl'])); // [[purp, le], [p, ur, p, le]]
console.log(allConstruct("skateboard", ['bo', 'rd', 'ate', 'ska', 'sk', 'boar'])); // []
console.log(allConstruct("aaaaaaaaaaaaz", ['a', 'aa', 'aaa', 'aaaa', 'aaaaa'])); // []
