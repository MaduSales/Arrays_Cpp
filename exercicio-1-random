#include <iostream>
#include <random>

using namespace std;

int gen();
void arrayAleatorio(int[], int);
void ordenacaoDecrescente(int[], int);
void arrayOrdenado(int[], int);

int main()
{
    int size = 10;
    int num[size];
    
    
    cout << "Array original: \n";
    arrayAleatorio(num, size);
    arrayOrdenado(num, size);
    
    
    cout << "\n\nArray ordenado: \n";
    ordenacaoDecrescente(num, size);
    arrayOrdenado(num, size);

    return 0;
}


int gen()
{
    random_device rd;
    mt19937 gen_numb(rd());
    uniform_int_distribution<> dis(1,100);
    
    return dis(gen_numb);
}


void arrayAleatorio(int num[], int size){
    for(int aux = 0; aux < size; aux++){
        num[aux] = gen();
    }
}


void ordenacaoDecrescente(int num[], int size){
    int aux;
     for(int prev = 0; prev <= size-2; prev++){
        for(int next = prev+1; next <= size-1; next++){
            aux = num[prev];
            
            if(num[prev] > num[next]){
                num[prev] = num[next];
                num[next] = aux;
            }
        }
    }
}


void arrayOrdenado(int num[], int size){
    for(int aux = 0; aux < size; aux++){
        cout << num[aux] << " ";
    }
}
