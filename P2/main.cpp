#include <iostream>

using namespace std;

int v[10];
int n;

void readVec()
{
    cout<< "Nr. de elemente... ";cin>>n;

    for(int i = 0; i < n; i++)
    {
        cout<<"v["<<i<<"] = ";cin>>v[i];
    }
}

//cautarea si afisarea minimului si de cate ori apare
void fMin()
{
    int mini = v[0];
    int counter = 1;
    for(int i = 1; i < n; i++){

        if(v[i] == mini)
            counter++;

        if(v[i] < mini){
            mini = v[i];
            counter = 1;
        }
    }

    cout<< "Valoarea minima este: " << mini << endl;
    cout<< "Si apare de: " << counter << " ori\n";

}

//perechi de elemente cu aceasi paritate
void sameParityItemsAre()
{
    cout<< "Perechile cu aceasi paritate\n";
    for(int i = 0; i < n - 1; i++){

        if(v[i] % 2 == 0 && v[i+1] % 2 == 0)
            cout<<v[i] << ' ' << v[i+1] << endl;

        if(v[i] % 2 != 0 && v[i+1] % 2 != 0)
            cout<<v[i] << ' ' << v[i+1] << endl;
    }
}

bool isPrime(int x)
{
    if(x < 2)
        return false;
    if(x > 2 && x % 2 == 0)
        return true;
    for(int d = 3; d <= x/d; d += 2)
        if(x % d == 0)
        return false;

    return true;
}

void primeValues()
{
    cout<< "Valorile prime sunt:\n";
    for(int i = 0; i < n; i++)
        if(isPrime(v[i]))
        cout<< v[i] << endl;
}

int main()
{
    readVec();
    fMin();
    sameParityItemsAre();
    primeValues();

    return 0;
}
