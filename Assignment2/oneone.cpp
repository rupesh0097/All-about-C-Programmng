#include <iostream>

using namespace std;

int maxint(int* arr, int length) {
    int mx = arr[0], ind = 0;
    for (int i = 0; i < length; i++) {
        if (mx<arr[i]) {
            ind = i;
            mx = arr[i];
        }
    }
    return ind;
}


int main()
{
    int n;
    cout << "Number of elements in array: ";
    cin >> n;
    int foo[n];
    cout << "Input the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> foo[i];
    }
    int ans = maxint(foo, n);
    cout << "The maximum element of array: " << foo[ans] << '\n';
    cout << "The index of the maximum element: " << ans << '\n';


    return 0;
}