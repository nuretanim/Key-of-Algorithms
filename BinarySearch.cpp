/**
 *        Author: NUR E MUDDASSIR TANIM, American International University-Bangladesh
**/

#include <bits/stdc++.h>

using namespace std;

bool binarySearch(int arr[], int l, int r, int key)
{
    while (l <= r)
    {
        int mid;
        mid = (l + r) / 2;
        if (arr[mid] == key)
        {
            return 1;
        }
        else if (arr[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return false;
}

int main()
{
    int arr[5] = {10, 26, 28, 77, 80};
    int key = 77;
    
    if (binarySearch(arr, 0, 4, key))
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}



/****** 
 		Time Complexity: 

 				Best Case: O(1)
 				Worst Case: O(logn)
 				Average Case: O(logn)

/******
