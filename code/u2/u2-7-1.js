// n^2
function findTwoSum(arr, sum) {
	for (let i = 0; i < arr.length; i++) {
		for (let j = i + 1; j < arr.length; j++) {
			if (arr[i] + arr[j] === sum) {
				return true;
			}
		}
	}
	return false;
}

var arr = [3, 79, 100, 67];
var result = findTwoSum(arr, 167);
console.log(arr, result);
