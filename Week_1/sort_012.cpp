#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    int x,y,z; 
    x = y = z = 0;
    for(int i=0;i<n;i++)
        if(*(arr+i) == 0) x++;
        else if(*(arr+i) == 1) y++;
        else z++;
    
    for(int i=0;i<x;i++)
        cout<<"0 ";
    for(int i=0;i<y;i++)
        cout<<"1 ";
    for(int i=0;i<z;i++)
        cout<<"2 ";
}