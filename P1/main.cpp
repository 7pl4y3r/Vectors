#include <iostream>

using namespace std;

//Declarare
int v[10];
int n;

//citire
void readVec()
{
    cout<< "Nr. de elemente... ";cin>>n;

    for(int i = 0; i < n; i++)
    {
        cout<<"v["<<i<<"] = ";cin>>v[i];
    }

}

//afisare
void writeVec()
{
    for(int i = 0; i < n; i++)
        cout<<"v[" <<i<< "] = " <<v[i] << ' ';
}

int main()
{
    readVec();
    writeVec();

    return 0;
}
