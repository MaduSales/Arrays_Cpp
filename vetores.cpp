#include <iostream>

using namespace std;

int main()
{
    int num[10], cont;
    
    for(cont = 0; cont < 10; cont++){
        num[cont] = cont;
        cout << "Elemento " << cont + 1 << ": " << num[cont] << endl;
    }
    
    
    return 0;
}
