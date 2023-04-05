#include<bits/stdc++.h>
using namespace std;
void swap(int a[],int i,int j)
{
    int t=a[i];
    a[i]=a[j];
    a[j]=t;
}
int partition(int a[],int l,int h)
{
    int p=a[h];//last element
    int i=l-1;
    for(int j=l;j<h;j++)
    {
        if(a[j]<p)
        {
            i++;
            swap(a,i,j);
        }
        swap(a,i+1,h);
        return i+1;
    }
}
void sort(int a[],int l,int h)
{
    if(l<h){
    int p=partition(a,l,h);
    sort(a,l,p-1);
    sort(a,p+1,h);
    }
}
int main()
{
    int n;
    cin>>n;
    int l=0,h=n-1;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,l,h);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}
