/*
//Asynchronous Function in Java Script
console.log("Hello");
// The setTimeout() method executes a block of code after the specified time.
// The method executes the code only once.
setTimeout(greet,3000); // x millisecond= x*1000 seconds
console.log("Hello2");
console.log("Hello3");
function greet(){
    console.log("Welcome,This is Asynchronous Function setTimeout()");
    console.log();
}
*/
// CallBack Hell in Java Script
// Suppose we have to make Pizza
// To get pizza first we create Cheese then Use of Cheese we create Dough & by using dough we create pizza
// Cheese -> Dough -> Pizza

// getCheese Function need some time(2s) to create Cheese

// GetCheese Function Creates Cheese
function getCheese(CallBack){
    setTimeout(
        () => {
            const Cheese="🧀";
            console.log("Cheese is getting Ready please wait 2 second");
            CallBack(Cheese);
        }
    ,2000);
}
// getDough Function Creates Dough From Cheese
function getDough(Cheese,CallBack){
    setTimeout(
        () => {
            const Dough=Cheese + " -> 🫓";
            console.log("Dough is getting Ready please wait 2 second");
            CallBack(Dough);
        }
    ,2000);
}
// getPizza Function Creates Pizza From Dough
function getPizza(Dough,CallBack){
    setTimeout(
        () => {
            const Pizza=Dough + " -> 🍕";
            console.log("Pizzais getting Ready please wait 2 second");
            CallBack(Pizza);
        }
    ,2000);
}

// Lets Call GetCheese Function to Freate Cheese First
getCheese(
    (Cheese)=>
    {
        getDough(
            Cheese,
                (Dough)=>
                {
                  getPizza(
                    Dough,
                        (Pizza) => 
                        {
                            console.log("Pizza is Ready",Pizza);
                        }
                        )  
                }
            )
    }
);
