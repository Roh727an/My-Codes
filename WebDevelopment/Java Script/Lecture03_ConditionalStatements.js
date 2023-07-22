console.log('Conditional Statements => if-Else Statement');
// Largest Amgong Three Numbers Using If-else Ladder
let a=1;
let b=2;
let c=3;
console.log('among ',a,b,c);
if(a>b && a>c)
console.log('Gratest is',a);
else if(b>a && b>c)
console.log('Gratest is',b);
else
console.log('Gratest is',c);

// Largest Among 2 using Ternary Operator
console.log('among ',a,b,'Gratest is');
a>b ? console.log(a) : console.log(b);