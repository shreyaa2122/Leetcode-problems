function createCounter(start){
    let count = start;
    return function (){
        return count ++;
    }
}
const counter = createCounter(10);
console.log(counter());//10
console.log(counter());//11
console.log(counter());//12
// the counter function is an example of high order function which is a function that takes one or more function as arguements or returns a function as its result.in this case ,the createcounter function takes an intial count as a parameter and returns an inner function that increments and returns the count on each call .
