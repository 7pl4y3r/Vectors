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
        cout<<"v[" <<i<< "] = " << v[i] << endl;
}

void insertOnPosition(int p)
{
    n++;
    for(int i = n; i > p; i--)
        v[i] = v[i-1];

        cin>>v[p];
        writeVec();
}

int main()
{
    readVec();

    int p;
    cout<< "Inserare pe o anumita pozitie\n";
    cout<< "Pozitia dorita... ";cin>>p;
    insertOnPosition(p);

    return 0;
}
