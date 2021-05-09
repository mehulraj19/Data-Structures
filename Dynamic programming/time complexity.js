function foo(n) {
    if(n<=1) 
        return;
    foo(n-1);
}

console.log(foo(3));