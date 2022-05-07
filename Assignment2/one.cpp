#include <iostream>
using namespace std;



int maxint(int *arr, int length){
    int max = arr[0], index = 0;
    for(int i =0; i<length; i++){
        if(max < arr[i]){
            max = arr[i];
            index = i;
        }
       
    }
     return index;
}

int main()
{
    int n; 
    cout << "Enter the number of elements of an array : ";
    cin >> n;
    
    int arr1[n];
    cout << "Enter the elements of an array: ";
    for(int i =0; i<=5; i++){
        cin >> arr1[i];
    }
    
    
    int ans = maxint(arr1, n);
    cout << "The maximum element of array: " << arr1[ans] << '\n';
    cout << "The index of the maximum element: " << ans << '\n';
    

    return 0;
}
