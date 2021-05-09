
const bestSum = (targetSum, numbers) => {

    if(targetSum === 0) return [];
    if(targetSum < 0) return null;

    let shortestCombination = null;

    for(let num in numbers) {
        const remainder = targetSum - num;
        const remainderCombination = bestSum(targetSum, numbers);

        if(remainderCombination != null) {
            const combination = [... remainderCombination, num];
            if(shortestCombination === null || combination.length < shortestCombination.length) {
                shortestCombination = combination;
            }
        }
    }
    return shortestCombination;
}

console.log(bestSum(7, [5, 3, 4, 7]));