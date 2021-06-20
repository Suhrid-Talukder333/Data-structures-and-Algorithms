let a = "string";

//naive || not clean function to reverse a string
function naiveReverse(string) {
  if (!string || string.length < 2 || typeof string != "string") {
    return;
  }
  let backwards = [];
  for (let i = string.length - 1; i >= 0; i--) {
    backwards.push(string[i]);
  }
  return backwards.join("");
}

//clean code function to reverse a string
function cleanReverse(string) {
  if (!string || string.length < 2 || typeof string != "string") {
    return;
  }
  return string.split("").reverse().join("");
}

//main
console.log(naiveReverse(a));
console.log(cleanReverse(a));
