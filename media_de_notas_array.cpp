#include <iostream>

using namespace std;

int main()
{
    float notas[5], media = 0;
    int cont;
    
    cout << "Insira as notas para saber a média: \n";
    for(cont = 0; cont < 5; cont++){
        cout << "Digite a nota " << cont + 1 << endl;
        cin >> notas[cont];
        cout << endl;
    }
    
    cout << "Suas notas: \n";
    for (cont = 0; cont < 5; cont++){
        cout << "Nota " << cont + 1 << ": " << notas[cont] << endl;
        media = notas[cont] + media;
    }
    
    media = media / 5;
    
    cout << "\nSua média é: " << media;
    
    
    return 0;
}
