
const howSum = (targetSum, numbers) => {

  const table = Array(targetSum+1).fill(null);
  table[0] = [];

  for(let i=0; i<=targetSum; i++) {
    if(table[i] !== null) {
      if(table[targetSum] !== null) {
        return table[targetSum];
      }
      for(let num of numbers) {
        if(i+num <= targetSum) {
          table[i+num] = [...table[i], num];
        }
      }
    }
  }

  return table[targetSum];
}

console.log(howSum(7, [2, 3])); // [2, 2, 3], [3, 2, 2], [2, 3, 2]
console.log(howSum(7, [5, 3, 4, 7])); // [3, 4], [4, 3], [7]
console.log(howSum(7, [2, 4])); // null
console.log(howSum(8, [2, 3, 5])); // [2, 2, 2, 2], [3, 5], [2, 3, 3]
console.log(howSum(300, [7, 14])); // null
console.log(howSum(8, [1, 4, 5])); // [4, 4], [1, 1, 1, 5]
