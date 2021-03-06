const countConstruct = (target, wordBank) => {

  let n = target.length;
  const table = Array(n + 1).fill(0);
  table[0] = 1;

  for(let i=0; i<=n; i++) {
    if(table[i] > 0) {
      for(let word of wordBank) {
        if(target.slice(i, i+word.length) === word) {
          table[i+word.length] += table[i];
        }
      }
    }
  }
  return table[n];
}

console.log(countConstruct("purple", ["purp", "p", "ur", "le", "purpl"])); // 2
console.log(countConstruct("abcdef", ["ab", "abc", "cd", "def", "abcd"])); // 1
console.log(countConstruct("skateboard", ["bo", "rd", "ate", "t", "ska", "sk", "boar"])); // 0
console.log(countConstruct("enterapotentpot", ["a", "p", "ent", "enter", "ot", "o", "t"])); // 4
console.log(countConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef", ["e", "ee", "eeee", "eeee", "eeeee", "eeeeee"])); // 0
console.log(countConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef", ["e", "ee", "eeee", "eeee", "eeeee", "eeeeee", "f"])); // 103736714069
