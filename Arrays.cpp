#include <iostream>
#include <climits> // INT_MIN ke liye
using namespace std;

// int main() {
//     cout << "hello world" << endl;

//     int arr[10];
//     int largestNo = INT_MIN; // Sabse choti value se initialize karte hain

//     cout << "Enter 10 numbers:" << endl;
//     for(int i = 0; i < 10; i++) {
//         cin >> arr[i];
//     }

//     // Array mein se largest number find karne ka logic
//     for(int i = 0; i < 10; i++) {
//         if(arr[i] > largestNo) {
//             largestNo = arr[i];
//         }
//     }

//     cout << "The largest number is: " << largestNo << endl;

//     return 0;
// }

int main() {
    int arr[6] = {1,2,3,4,5,6};
    int start = 0, end = 5;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i = 0; i<6; i++)
    cout<<arr[i]<<" ";
}