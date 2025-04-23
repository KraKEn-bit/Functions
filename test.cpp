#include <iostream>
#include <string>
#include <algorithm>
#include<vector>
#include<limits.h>

using namespace std;

int main(){
 int n;
 cin>>n;
 int rem=0,copy=n,count=0;
 int islucky=0;
 for(int i=1;i<=n;i++){
    int temp = i; 
    islucky = 1;  
    while(temp != 0){
        rem = temp % 10;
        temp = temp / 10;
        if(rem != 4 && rem != 7){
            islucky = 0;
            break;
        }
    }
    if(islucky && n % i == 0){
        count++;
    }
}
if(count>=1){
    cout<<"YES";
}
else{
    cout<<"NO";
}
 return 0;
}