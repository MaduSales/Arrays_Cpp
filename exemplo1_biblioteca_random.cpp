#include <iostream>
#include <random>

using namespace std;

int gen()
{
    random_device rd;
    mt19937 gen_numb(rd());
    uniform_int_distribution<> dis(1,100);
    
    return dis(gen_numb);
}

int main()
{
    int x = gen();
    cout << x;

    return 0;
}
