
const fib = (n) => {
  const table = Array(n + 1).fill(0);
  table[1] = 1;
  // console.log(table);
  for (var i = 0; i < n+1; i++) {
    table[i+1] += table[i];
    table[i+2] += table[i];
  }
  return table[n];
}
console.log(fib(6)); // 8
console.log(fib(7)); // 13
console.log(fib(8)); // 21
console.log(fib(50)); // 12586269025
