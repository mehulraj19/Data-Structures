
const allConstruct = (target, wordBank, memo={}) => {

  if(target in memo) return memo[target];
  if(target === '') return [[]];

  const result = [];

  for(let word of wordBank) {
    if (target.indexOf(word) === 0) {
      const suffix = target.slice(word.length);
      const suffixWays = allConstruct(suffix, wordBank, memo);
      const targetWays = suffixWays.map(way => [word, ...way]); // this is to add the "word" in all the suffixWays's nested values.
      result.push(...targetWays); // this is done to avoid nesting of targetWays in result.
    }
  }
  memo[target] = result;
  return result;
}

console.log(allConstruct("abcdef", ['ab', 'abc', 'cd', 'def', 'abcd', 'ef', 'c'])); //[[ab, cd, ed], [ab, c, def], [abc, def], [abcd, ef]]
console.log(allConstruct("purple", ['purp', 'p', 'ur', 'le', 'purpl'])); // [[purp, le], [p, ur, p, le]]
console.log(allConstruct("skateboard", ['bo', 'rd', 'ate', 'ska', 'sk', 'boar'])); // []
console.log(allConstruct("aaaaaaaaaaaaaaaaaaaaaaaaaaaz", ['a', 'aa', 'aaa', 'aaaa', 'aaaaa'])); // []
