#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr){
    for(int a:arr)cout<<a<<" ";
}

void insert(vector<int> &arr,int k){
    
    int key, j,n=arr.size();
    arr.resize(n+1);  

    key = k;  
    j = n - 1;  

    /* Move elements of arr[0..i-1], that are  
    greater than key, to one position ahead  
    of their current position */
    while (j >= 0 && arr[j] > key) 
    {  
        arr[j + 1] = arr[j];  
        j = j - 1;  
    }  
    arr[j + 1] = key;  

}

int main(int argc, char const *argv[])
{
   vector<int> res;
   int n=6;
   for(int i=1;i<=sqrt(n);i++){
       if(n%i==0)insert(res,i);
       if(i!=sqrt(n))insert(res,n/i);
   }
   print(res);
    return 0;
}
