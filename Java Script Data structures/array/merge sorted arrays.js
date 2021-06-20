let a = [1, 2, 3, 5];
let b = [0, 3, 4, 10];

//naive ||  not clean function to merge two sorted arrays
function naiveMergeSorted(array1, array2) {
  let sorted = [];
  if (array1.length == 0 || array2.length == 0) {
    sorted = array1.length === 0 ? array2 : array1;
    console.log(sorted);
    return;
  }
  let k = 0;
  let i = 0;
  let j = 0;
  while (i < array1.length && j < array2.length) {
    if (array1[i] < array2[j]) {
      sorted[k++] = array1[i++];
    } else {
      sorted[k++] = array2[j++];
    }
  }
  while (i < array1.length) {
    sorted[k++] = array1[i++];
  }
  while (j < array2.length) {
    sorted[k++] = array2[j++];
  }
  console.log(sorted);
}

naiveMergeSorted(a, b);
