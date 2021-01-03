
#include <iostream>
#include <math.h>


void printarr(int arr[], int s) {
	for (int x = 0; x < s; x++) {
		std::cout <<"arr:"<< x << " val:" << arr[x] << std::endl;
	}
}




int BinarySearch(int arr[], int left, int right, int x)
{
	while (right>=left) {  //initially I had while right is greater than or equal to 1 which would cause it to run infitely 
		int middle = (left + right) / 2;
		 if (arr[middle]==x) {
			return middle;
		}

		 if (arr[middle] < x) {

			left = middle + 1;
		 }
		 else  {           // (arr[middle]>x)
			right = middle-1;
		}
		 //debug with this  std::cout << left << "" << middle << "" << right;
	}

	return -1;
}




//ERROR

int main()
{
	int x;
	std::cout << "enter the number you would like to find: " << std::endl;
	std::cin >> x;
	int arr[]{ 2, 4, 6, 8, 10, 12};
	int s = sizeof(arr) / sizeof(arr[0]);
	int ans = BinarySearch( arr, 0,  s-1, x);
	if (ans == -1) {
		std::cout << "number could not be found";
		std::cout << ans;
	}
	else {
		std::cout << "Number was found in the: " << ans << " Position in the array" << std::endl;
	}
	std::cout << std::endl;
	printarr(arr, s);
}





