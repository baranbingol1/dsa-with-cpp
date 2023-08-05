#include <iostream>

using namespace std;

struct Rectangle{
  int height;
  int width;
};

int main(){
  
  int a = 10;
  int *p;
  p = &a;

  cout << a << endl;
  cout << "using pointer: " << *p << endl;
  cout << "address of a: " << &a << endl;

  int A[5] = {2,4,6,8,10};
  p=&A[0]; // p=A is equilavent
  cout << "printing array" << endl;
  for(int i = 0 ; i < 5 ; i++){
    cout << *(p+i) << endl;
  }

  // C language method -> p=(int *)malloc(5*sizeof(int))
  p = new int[5];
  p[0]=1; p[1]=2; p[2]=3; p[3]=4; p[4]=5;
  cout << "printing array" << endl;
  for(int i = 0 ; i < 5 ; i++){
    cout << *(p+i) << endl;
  }

  // C language method -> free(p)
  delete [ ] p;

  int *p_i;
  char *p_c;
  float *p_f;
  double *p_d;
  struct Rectangle *p_rectangle;

  cout << "printing sizes of pointers " << endl;
  cout << "size of int pointer " << sizeof(p_i) << endl;
  cout << "size of char pointer " <<  sizeof(p_c) << endl;
  cout << "size of float pointer " <<  sizeof(p_f) << endl;
  cout << "size of double pointer " <<  sizeof(p_d) << endl;
  cout << "size of struct rectangle pointer " <<  sizeof(p_rectangle) << endl;

  // note: size of pointer is independent of the data type of the pointer

  return 0;
}