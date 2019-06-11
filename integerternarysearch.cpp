#include <iostream>
using namespace std; 


// This is a function that takes in a left and right bound of an array, a desired search key, and the array itself
// and recursively breaks the array into thirds to quicken the search function to find if the desired key is in the
// input array. If so, the function returns the index position where the key is at; otherwise, it returns -1. 
int triplesearchfunction(int l, int r, int x, int abba[]) 
{ 
        if (r >= l) 
        { 


                // Determine the bounds for the first and second third.  
                int firstthird = l + (r - l) / 3; 
                int secondthird = r - (r - l) / 3; 


                // Check if the value we are looking for is at either of these bounds. 
                if (abba[firstthird] == x) 
                { 
                        return firstthird; 
                } 
                if (abba[secondthird] == x) 
                { 
                        return secondthird; 
                } 


                // If we do not find the value we are looking for, look in the first third, the last third, and then in between. 
                // When the right range is found, use it as the bounds for a recursive call to break it into thirds again.  
                if (x < abba[firstthird]) 
                {
                        return triplesearchfunction(l, firstthird - 1, x, abba); 
                } 
                else if (x > abba[secondthird]) 
                {
                 
                        return triplesearchfunction(secondthird + 1, r, x, abba); 
                } 
                else
                { 
                        return triplesearchfunction(firstthird + 1, secondthird - 1, x, abba); 
                } 
        } 


        // Once we get a range that cannot divide into three pieces, we know it's not in the array. Return -1'
        return -1; 
} 






int main() 
{ 
        int testarray[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 


        // Begin at 0
        int ll = 0; 


        // Calculate the size of the array for the end
        int rr = sizeof(testarray)/sizeof(testarray[0]);




        // Key that we want to find in the array. 
        int xx = 12;


        // Call the search function starting at 0, going to the calculated length, to find x in the test array. 
        int fiver = triplesearchfunction(ll, rr, xx, testarray); 


        // Print 
        cout << "Index of " << xx 
                << " is " << fiver << endl; 
}