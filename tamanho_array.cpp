#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    /*Descobrindo o tamanho de um array*/
    int num[5] = {10, 20, 30, 40, 50};
    
    
    int tamanho = sizeof(num)/sizeof(num[0]);
    cout << "O tamanho do array é " << tamanho;
    return 0;
}
