// Iterative C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;

/* This function will take in the array and perform the swaps for every element in the array*/
/* Note that the length of the array is a required input parameter */
void reverseArray(int arr[], int start, int end)
{
	while (start < end)
	{
	    /* This is the swapping mechanism here */
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
		/* It is in-place because only one static variable at a time is stored during the swap */
	}
}
/* This function will just use the cout iostream library to output the array to the screen. */
void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
}

/* Driver function that uses the print and reverse functions above */
int main()
{
    int arr[10000];


	/* This is a standard counting function  n that takes the entire BYTE size of the array and
	averages it by dividing by one index so we get the size, in numbers, of the array. Since
	all of the variables are integers (in an integer array) each element as the same size. */

	int n = sizeof(arr) / sizeof(arr[0]);
	/* Remember that n is needed as a parameter to be passed in for the swap/reverse function. */

	/* Print the input for verification purposes */
    printArray(arr, n);

	/* Reverse the input array */
	reverseArray(arr, 0, n-1);

	/* now arr is the reversed array, so print it so see it side by side */
	printArray(arr, n);

	return 0;
}
