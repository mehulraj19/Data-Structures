
const countConstruct = (target, wordBank, memo={}) => {

  if(target in memo) return memo[target];
  if(target === "") return 1;

  let totalLength = 0;

  for(let word of wordBank) {
    if (target.indexOf(word) === 0) {
      const suffix = target.slice(word.length);
      const numWays = countConstruct(suffix, wordBank, memo);
      totalLength += numWays;
    }
  }
  memo[target] = totalLength;
  return totalLength;
}

console.log(countConstruct("purple", ["purp", "p", "ur", "le", "purpl"])); // 2
console.log(countConstruct("abcdef", ["ab", "abc", "cd", "def", "abcd"])); // 1
console.log(countConstruct("skateboard", ["bo", "rd", "ate", "t", "ska", "sk", "boar"])); // 0
console.log(countConstruct("enterapotentpot", ["a", "p", "ent", "enter", "ot", "o", "t"])); // 4
console.log(countConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef", ["e", "ee", "eeee", "eeee", "eeeee", "eeeeee"])); // 0
console.log(countConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef", ["e", "ee", "eeee", "eeee", "eeeee", "eeeeee", "f"])); // 103736714069
