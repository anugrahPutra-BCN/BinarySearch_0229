#include <iostream>
using namespace std;

int arr[20]; // Array tp be searched
int n; // Number of elements in the array 
int i; // Index of array aelements

void input()
{
    while(true)
    {
        cout << "Enter the number of elements in the array: ";
        cin >> n;
        if ((n > 0) && (n <= 20))
             break;
        else 
            cout << "\nArray should have minimum 1 and maximal 20 elements.\n\n";     
    }

    // Accept array elements
    cout << "\n---------------------\n";
    cout << " Enter array elements \n";
    cout << "----------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i +1) << "< ";
        cin >> arr [i];
    }

}
void BinarySearch()
{
    char ch;
    do
    {
        // Accept the number to searched
        cout << "\nEnter element want you to search: ";
        int item ;
        cin >> item;

        //Apply binary search
        int lowerbound = 0;
        int upperbound = n - 1;
        int mid = (lowerbound + upperbound) / 2; //Index of middle element
        int ctr = 1; // Number of comparisons

        while ((item != arr [mid]) && (lowerbound <= upperbound))
        {
            if (item > arr[mid])
                lowerbound = mid + 1;
            else 
                upperbound = mid -1;
            mid = (lowerbound + upperbound) / 2;
            ctr++; 
        }

        if (item == arr[mid])
            cout << "\n" << item << " found at position " << (mid + 1);
        else 
            cout << "\n" << item << " not found in the array\n";
            cout << "\nNumber of comparisons: " << ctr << endl;
            
            cout << "\nContinue search (y/n): ";
            cin >> ch;
    } while  ((ch == 'y') || (ch == 'y'));
     
}
void bubbleSort(){
    int pass = 1;
    do
    {
        for (int j = 0; j <= n-1-pass; j++)
        {
            if (arr[j] > arr[j+1]);
            {
                // swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        pass++;      
    } while (pass <= n-1);
    
   
}

int main() {

    input();
    bubbleSort();
    BinarySearch();
    }
    