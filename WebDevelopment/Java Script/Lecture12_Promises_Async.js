// Suppose we have to make Pizza
// To get pizza first we create Cheese then Use of Cheese we create Dough & by using dough we create pizza
// Cheese -> Dough -> Pizza

// getCheese Function need some time(2s) to create Cheese
function getCheese()
{
    return new Promise
    (
    (resolve,reject)=>
    {
        setTimeout
        (
            ()=>
            {
                const Cheese="🧀";
                resolve(Cheese);
            }
        ,2000
        );
    }
    );
}
function getDough(Cheese)
{
    return new Promise
    (
    (resolve,reject)=>
    {
        setTimeout
        (
            ()=>
            {
                const Dough=Cheese+" -> 🫓";
                resolve(Dough);
            }
        ,2000
        );
    }
    );
}
function getPizza(Dough)
{
    return new Promise
    (
    (resolve,reject)=>
    {
        setTimeout
        (
            ()=>
            {
                const Pizza=Dough+" -> 🍕";
                resolve(Pizza);
                // reject("Bad Dough");
            }
        ,2000
        );
    }
    );
}
/*
// All the Above functions return a Promise value which we can get using TouchEvent,catch & finally methods
getCheese().then
    (
    (Cheese) => {
        console.log("Got The Cheese ",Cheese);
        // We Call getdough Function with Cheese that we got
        return getDough(Cheese);
        
    })  .then
        (
            // Hence the .then() method is Giving us another Promise Value by getDough(Cheese)
            (Dough)=>{
                console.log("Got The Dough ",Dough);
                // We Call getPizza Function with Dough that we got
                return getPizza(Dough);
        })  .then
            (
                // Hence the .then() method is Giving us another Promise Value by getPizza(Dough)
                (Pizza) => {
                    console.log("Got The Pizza ",Pizza);
                }
            ) .catch
                    (
                        // If any of the function gets reject then catch will be called
                        (data)=>{
                        console.log("Sorry Your Pizza cannot be made as",data);
                        }
                        
                    )
*/
// Async-Await
async function Order(){
    const Cheese=await getCheese();
    console.log("We Got The Cheese",Cheese);
    const Dough=await getDough(Cheese);
    console.log("We Got The Dough",Dough);
    const Pizza=await getPizza(Dough);
    console.log("We Got The Pizza",Pizza);
}
Order();