#include <iostream>

using namespace std;

void swap_by_value(int a, int b){
  int tmp;
  tmp=a;
  a=b;
  b=tmp;
}

void swap_by_address(int *a, int *b){
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

// calling by reference doesn't create another local variable in function scope, it is referencing to the variables that is passed as parameter
void swap_by_reference(int &a, int &b){
  int tmp; 
  tmp=a; 
  a=b; 
  b=tmp;
}

// you can't copy the whole array to the function scope it will be computationally expensive so you use pointers!
void print_array(int *A, int size){
  // for-each loop won't work here it only works with arrays that are in the scope
  for(int i = 0 ; i < size ; i++) cout << A[i] << endl;
  // you can change elements of array in function because it is represented as pointer
  cout << "Printing array after changing first element to 0" << endl;
  *(A) = 0;
  for(int i = 0 ; i < size ; i++) cout << A[i] << endl;
}

int * create_array(int size){
  int *p;
  p = new int[size];
  for(int i = 0 ; i < size ; i++) p[i] = i+1;

  return p;
}

struct Rectangle{
  int height;
  int width;
};

void print_attrs(struct Rectangle r){
    cout << "Height of rectangle: " << r.height << endl << "Width of rectangle: " << r.width << endl;
}

// you can also use pointer to the struct Rectangle
void change_attrs(struct Rectangle &r, int new_height, int new_width){
  r.height = new_height;
  r.width = new_width;
}

struct Rectangle *create_rectangle(){
  struct Rectangle *p;
  p = new Rectangle;
  
  p->height=3;
  p->width=4;

  return p;
}

int main(){

  int a = 3, b = 4;

  swap_by_value(a, b);
  cout << "Values of a and b after using pass by value method" << " a: " << a << " b: " << b << endl;

  swap_by_address(&a, &b);
  cout << "Values of a and b after using call by address method" << " a: " << a << " b: " << b << endl;
  // reset back because of swapping
  a=3; b=4;
  swap_by_reference(a, b);
  cout << "Values of a and b after using call by reference method" << " a: " << a << " b: " << b << endl;

  int A[] = {1,2,3,4,5};
  int n = 5;
  
  cout << "Printing array" << endl;
  for(int x: A) cout << x << endl;

  cout << "Printing array via func" << endl;
  print_array(A, n);

  cout << "Creating array and printing" << endl;
  int size = 5;
  int *ptr = create_array(size);
  for(int i = 0 ; i < size ; i++) cout << ptr[i] << endl;

  struct Rectangle r={5, 10};

  cout << "Height of rectangle: " << r.height << endl << "Width of rectangle: " << r.width << endl;

  cout << "Using function to print attributes: " << endl;
  print_attrs(r);

  cout << "Changing atributes of rectangle via function and printing" << endl;
  change_attrs(r, 20, 30);
  print_attrs(r);

  cout << "Creating rectangle via function..." << endl;
  struct Rectangle *rptr=create_rectangle();
  cout << "Printing created rectangle" << endl;
  print_attrs(*(rptr));

  return 0;
}