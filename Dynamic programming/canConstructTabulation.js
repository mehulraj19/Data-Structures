const canConstruct = (target, wordBank) => {

  let n = target.length;
  const table = Array(n + 1).fill(false);
  table[0] = true;

  for(let i=0; i<=n; i++) {
    if(table[i] === true) {
      for(let word of wordBank) {
        if(target.slice(i, i+word.length) === word) {
          table[i+word.length] = true;
        }
      }
    }
  }
  return table[n];
}

console.log(canConstruct("abcdef", ['ab', 'abc', 'cd', 'def', 'abcd'])); // true
console.log(canConstruct("skateboard", ['bo', 'rd', 'ate', 't', 'ska', 'sk', 'boar'])); // false
console.log(canConstruct("enterapotentpot", ["a", "p", "ent", "enter", "ot", "o", "t"])); // true
console.log(canConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef", ["e", "ee", "eeee", "eeee", "eeeee", "eeeeee"])); // false
console.log(canConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef", ["e", "ee", "eeee", "eeee", "eeeee", "eeeeee", "f"])); // true
