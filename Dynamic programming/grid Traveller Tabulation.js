
const gridTraveler = (m, n) => {
  if(m === 0 || n === 0) return 0;
  const table = Array(m+1).fill().map(() => Array(n+1).fill(0)); // setting up m*n matrix and filling all the values with 0
  table[1][1] = 1;

  for(let i=0; i<=m; i++){
    for(let j=0; j<=n; j++) {
      if(j+1 <= n){
        table[i][j+1] += table[i][j];
      }
      if(i+1 <= m){
        table[i+1][j] += table[i][j];
      }
    }
  }
  return table[m][n];
}

console.log(gridTraveler(3, 2)); // 3
console.log(gridTraveler(2, 3)); // 3
console.log(gridTraveler(1, 1)); // 1
console.log(gridTraveler(3, 3)); // 6
console.log(gridTraveler(18, 18)); // 2333606220
console.log(gridTraveler(0, 0)); // 0
