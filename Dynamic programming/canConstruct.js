
const canConstruct = (target, wordBank, memo = {}) => {
  if(target in memo) return memo[target];
  if (target === "") return true;

  for(let word of wordBank) {
    // make sure to use the prefix
    if (target.indexOf(word) === 0) {
      const suffix = target.slice(word.length); // this will contribute in time complexity and space complexity
      if(canConstruct(suffix, wordBank, memo)){
        memo[target] = true;
        return true;
      }
    }
  }
  memo[target] = false;
  return false;
}

console.log(canConstruct("abcdef", ['ab', 'abc', 'cd', 'def', 'abcd'])); // true
console.log(canConstruct("skateboard", ['bo', 'rd', 'ate', 't', 'ska', 'sk', 'boar'])); // false
console.log(canConstruct("enterapotentpot", ["a", "p", "ent", "enter", "ot", "o", "t"])); // true
console.log(canConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef", ["e", "ee", "eeee", "eeee", "eeeee", "eeeeee"])); // false
console.log(canConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef", ["e", "ee", "eeee", "eeee", "eeeee", "eeeeee", "f"])); // true
