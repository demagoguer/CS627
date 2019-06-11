#include <iostream>
using namespace std;

// Here is a global declaration of the array input. This was changed to test the nature of the program.
int arya [] = {16, 2, 77, 40, 12071, 79, 1, 4, 66, 4};

// This is a function loop to make sure I can cycle an entire array and output, ending on the last index of the array.

void arrayloop (int arr[], int n){
// This void function takes in an input array, and the length of the array (the count function happens in the main loop to get the length)

// First, initialize an empty array with the same length as the calculated input.
int arr2[n];

// This was a test to make sure all the elements were in the right index position.
// It is now commented out because it isn't necessary.

/*for (int i = 0; i < n; i++){
    cout<< "arr i = "<<arr[i]<<"\n";
    }
*/

// Initialize a counter outside the for loop.
int k = 0;

// Assign the FIRST index value of the temporary array with the LAST index value if the input array.
// Once the j loop reaches the length of the input array, then it stops.
for (int j = n; j > 0; j--){

    arr2[k]=arr[j-1];
    k = k + 1;
    cout<<arr2[k-1]<<"\n";
}
}

int main(){

// This function calculates the length of the array.
int sizeofarray = sizeof(arya)/sizeof(arya[0]);
// "sizeof" actually counts the byte size, so we have to average it with the length of the first index.
// This works because it's an array of integers, and all the integers have the same length assigned.
// Test to see the output, make sure it's a size
// cout<<sizeofarray;

// Function call will pass in the global array, and loop through each index position backwards, and output the temp.
arrayloop(arya, sizeofarray);

return 0;

}
