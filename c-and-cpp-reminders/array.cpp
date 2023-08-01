#include <iostream>

using namespace std;

int main(){
  int n;
  cout << "Enter size";
  cin >> n;
  int A[n];
  cout << "Enter values";
  for(int i=0; i < n; i++){
    int j;
    cin >> j;
    A[i] = j; 
  }
  cout << "Given array is" << endl;
  for(int x: A) printf("%d\n", x);
  return 0;
}