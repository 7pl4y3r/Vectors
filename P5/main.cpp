#include <iostream>

using namespace std;

int v[10],n;

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

void insertionSort(int v[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = v[i];
       j = i-1;

       while (j >= 0 && v[j] > key)
       {
           v[j+1] = v[j];
           j--;
       }
       v[j+1] = key;
   }
}

void bubbleSort(int v[], int n)
{
    int aux;
   for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
   if(v[i] < v[j]){
    aux = v[i];
    v[i] = v[j];
    v[j] = aux;
   }

}

int main()
{
    readVec();
    cout<< "Sortare prin insertie\n";
    insertionSort(v,n);

    cout<< "Bubble sort\n";
    bubbleSort(v,n);

    writeVec();

    return 0;
}
