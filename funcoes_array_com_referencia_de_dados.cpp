#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void copyArray(int [], int [], int);
void triple(int [], int);

int main()
{
   int num[] = {10, 20, 30, 40, 50}, num_copy[5];
   int size = 5;
   
   
   copyArray(num, num_copy, size);
   triple(num_copy, size);
   
   cout << "Array original: \n";
   for(int count = 0; count < size; count++){
        cout << num[count] << "  ";
    }
    
    cout << "\n\nArray triplicado:\n";
   for(int count = 0; count < size; count++){
        cout << num_copy[count] << "  ";
    }
    
    return 0;
}

void copyArray(int num[], int num_copy[], int size){
    for(int count = 0; count < size; count++){
        num_copy[count] = num[count];
    }
}

void triple(int num_copy[], int size){
    for(int count = 0; count < size; count++){
        num_copy[count] *= 3;
    }
}
