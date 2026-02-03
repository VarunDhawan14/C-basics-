#include <iostream>
using namespace std;

int main (){
  int arr[] = { 5,9,25,34,56,78,90,7};
  int n = sizeof(arr)/sizeof(arr[0]);
  for ( int i = 0 ; i < n ; i ++ ) {
    cout << arr[i]<< " ";
  }
}
