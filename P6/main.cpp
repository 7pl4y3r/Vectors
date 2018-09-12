#include <iostream>

using namespace std;

int a[10],b[10],c[20];
int n,m,o;

void readVec(int v[])
{
    cout<< "Nr. de elemente... ";cin>>n;

    for(int i = 0; i < n; i++)
    {
        cout<<"v["<<i<<"] = ";cin>>v[i];
    }

}

void writeVec(int v[], int l)
{
    for(int i = 0; i < l; i++)
        cout<<"v[" <<i<< "] = " <<v[i] << ' ';
}

void interClasare()
{
    int i = 0;
    int j = 0;

    while(i < n && j < m){

        if(a[i] < b[j]){
            c[o++] = a[i];
            i++;
        }  else {

            c[o++] = b[j];
            j++;
        }

        while(i < n)
            c[o++] = a[i++];

        while(j < m)
            c[o++] = b[j++];

    }
}

int main()
{
    readVec(a);
    readVec(b);

    interClasare();

    writeVec(c,o);

    return 0;
}
