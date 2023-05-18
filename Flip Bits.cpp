#include <bits/stdc++.h> 
int flipBits(int* arr, int n) 
{
    // WRITE YOUR CODE HERE
     int l=0;
    for(int i=0;i<n;i++){             
    if(arr[i]==1){
        arr[i]=-1;
        l++;
    }
    else {
        arr[i]=1;
    }
}
int sum=0;                            
int maxsum=0;                          
for(int i=0;i<n;i++){
    sum+=arr[i];
    maxsum=max(maxsum,sum);
    if(sum<0){
        sum=0;
    }
}
return l+maxsum; 
    
}
