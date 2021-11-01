#include <iostream>
using namespace std;
#include <time.h>

const int ARRAY_SIZE = 5000;

void arrayStatic();
void arrayStackDyanmic();
void arrayHeapDyanmic();

int main() {
 arrayStatic();
 arrayStackDyanmic();
 arrayHeapDyanmic();
}

void arrayStatic(){
  clock_t start = clock();
  static int arr[ARRAY_SIZE]; //automatically intialized to zero
  cout << fixed <<  float(clock() - start)/CLOCKS_PER_SEC  << endl;
}
void arrayStackDyanmic(){
  clock_t start = clock();
  int arr[ARRAY_SIZE];
  for(int i =0; i <ARRAY_SIZE; i++)
  {
    arr[i] = 0;
  }
  cout << fixed <<  float(clock() - start)/CLOCKS_PER_SEC  << endl;
}

void arrayHeapDyanmic(){
  clock_t start = clock();
  int* arr = new int[ARRAY_SIZE];
  for(int i =0; i <ARRAY_SIZE; i++)
  {
    arr[i] = 0;
  }
  cout << fixed <<  float(clock() - start)/CLOCKS_PER_SEC  << endl;
  delete [] arr;
}