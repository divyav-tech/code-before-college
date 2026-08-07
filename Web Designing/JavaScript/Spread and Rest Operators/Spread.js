const arr = [1,2,3];

console.log(...arr);

const a = [1,2];
const b = [3,4];

const c = [...a, ...b];

console.log(c);

const obj = {
    name: "Divya"
};

const copy = {
    ...obj,
    age: 18
};

console.log(copy);

const user = {
    city: "Delhi"
};

const updated = {
    city: "Hapur",
    ...user
};

console.log(updated.city);

const romance = ["Queen of Tears", "My Sweet Mobster"];
const comedy = ["Twinkling Watermelon", "Business Proposal"];

const favourites = [...romance, ...comedy];
console.log(`My favourite Kdramas are:
     ${favourites.join(",")}`);

const name = "Divya";

console.log(...name);