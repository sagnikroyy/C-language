/*Given an array arr consisting of only 0's and 1's in random order. Modify the array in-place 
to segregate 0s onto the left side and 1s onto the right side of the array.*/

// #include <iostream>
// using namespace std;
// int main() {
//     // string arr;
//     //  cout << "Enter the array elements (without space): ";
//     // cin >> arr;
//     // int size = arr.size();
//     int size;
//     cout << "Enter the size of array: ";
//     cin >> size;
//     int arr[size];    
//     cout <<"Enter "<<size<<" elements separated by spaces:"<< endl;
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[j]<arr[i]){
//                 int c=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=c;
//             }
//         }
//     }
//     cout << "segregate array is: "<<endl;
//     for (int i = 0; i<size; i++) {
//         cout<<arr[i]<<" ";
//     }    
// }

#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" elements with space:"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int left = 0;
    int right = size - 1;

    while(left<right){
        while(arr[left] == 0 && left<right){
            left++;
        }
        while(arr[right] == 1 && left<right){
            right--;
        }
        if( arr[left] == 1 && arr[right] == 0 && left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    cout<<"segregate array is: "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
