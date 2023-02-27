function merge(left, right) {
	let arr = []
	while (left.length && right.length) {
		if (left[0] < right[0]) {
			arr.push(left.shift())
		} else {
			arr.push(right.shift())
		}
	}

	return [...arr, ...left, ...right]
}
function mergeSort(arr) {
	const half = Math.floor(arr.length / 2)
	if (arr.length < 2) {
		return arr
	}

	const left = [...arr].splice(0, half)
	const right = [...arr].splice(half)
	return merge(mergeSort(left), mergeSort(right))
}

// log(n) * n time
function findTwoSum(arr, sum) {
	let sorted = mergeSort(arr);
	for (let i = 0; i < sorted.length; i++) {
		let toFind = sum - sorted[i];
		let idx = binarySearch(sorted, 0, sorted.length - 1, sum - sorted[i]);
		if (idx != -1) {
			return true;
		}
	}
	return false;
}

// Returns index of search value. returns -1 if no result has been found.
function binarySearch(arr, p, r, x) {
	let mid = Math.floor((p + r) / 2);
	if (p > r) {
		return -1;
	}
	if (x < arr[mid]) {
		return binarySearch(arr, p, mid - 1, x);
	}
	if (x > arr[mid]) {
		return binarySearch(arr, mid + 1, r, x);
	}
	return mid;

}

let arr = [3, 1, 79, 80, 100];

console.log({ arr });
console.log("sorted: ", mergeSort(arr));

let f = 102;
let result = findTwoSum(arr, f);
console.log({ sorted: mergeSort(arr), f, result });