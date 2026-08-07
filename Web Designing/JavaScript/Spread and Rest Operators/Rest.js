function num(...items){
    console.log(items);
}

num(1,2,3);

const numbers = [10,20,30];

const [first,...other] = numbers;

console.log(other);

const student = {
    name:"Divya",
    age:18,
    city:"Hapur"
};

const {name,...details} = student;

console.log(details);

function addToCart(...products){
    console.log(`You added ${products.length} products.`);
    console.log(products);
}

addToCart("Laptop", "Mouse", "Keyboard");