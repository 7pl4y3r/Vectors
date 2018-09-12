#include <iostream>

using namespace std;

int a[10],b[10],c[20];
int m,n,o;

void readVec(int v[], int l)
{
    cout<< "Reading a vec\n";
    for(int i = 0; i < l; i++)
        cin>>v[i];
}

void writeVec(int v[], int l)
{
    cout << "Read vec is:\n";
    for(int i = 0; i < l; i++)
        cout<<v[i] << ' ';

        cout<<endl;
}

void quickSort(int v[], int l, int r)
{
    if(l < r){

        int i = l, piv = l, j = r, aux;
        while(i < j){

           while(v[i] < v[piv])
                i++;

           while(v[j] > v[piv])
            j--;

           if(i < j){
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
           }
        }

        aux = v[j];
        v[j] = v[i];
        v[i] = aux;

        quickSort(v, l, j-1);
        quickSort(v, j+1, r);
    }
}

void sortAll()
{
    int i = 0;
    int j = 0;

    while(i < m && j < n){
        if(a[i] < b[j])
            c[o++] = a[i++];
        else
            c[o++] = b[j++];
    }

    while(i < m)
        c[o++] = a[i++];

    while(j < n)
        c[o++] = b[j++];
}

int main()
{
    //Se citesc cei doi vectori -->
    cout<< "m = ";cin>>m;
    readVec(a,m);
    writeVec(a,m);

    cout<< "n = ";cin>>n;
    readVec(b,n);
    writeVec(b,n);
    // <--

    quickSort(a, 0, m-1);
    writeVec(a,m);

    quickSort(b, 0, n-1);
    writeVec(b,n);

    sortAll();
    writeVec(c, o);

    return 0;
}
