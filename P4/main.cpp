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

void writeVec()
{
    for(int i = 0; i < n; i++)
        cout<<"v[" <<i<< "] = " <<v[i] << ' ';
}

void deleteElementOn()
{
    int p;
    cout<< "Pozitia dorita...";cin>>p;

    for(int i = p; i < n - 1; i++)
        v[i] = v[i+1];

    n--;
    writeVec();

}

int main()
{
    readVec();
    deleteElementOn();

    return 0;
}
