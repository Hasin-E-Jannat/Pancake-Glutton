#include<iostream>
using namespace std;
int main(){
int a[10],min_person,max_person;
for(int i=0;i<10;i++){
    cin>>a[i];
}
int max=0,min=999;
for(int i=0;i<10;i++){
    if(a[i] < min){
        min=a[i];
        min_person=i+1;
    }
    else{
        max=a[i];
        max_person=i+1;
    }
}
cout<<"Max pancake ate person "<<max_person<<endl;
cout<<"Least pancake ate person "<<min_person<<endl;
int temp = 10,rank[10]={0},j,index;
while(temp--){
        max=0;
        for( j=0;j<10;j++){
  if(a[j] == -1)
    continue;
  else{
  if(a[j] >= max){
        max = a[j];
       index=j;
  }
        }
    }
    a[index] = -1;
     cout<<"Person "<<index + 1 <<" :ate " << max << " pancakes"<<endl;
}
//for(int i=0;i<10;i++)
//cout<<"Person "<<rank[i]<<" :ate " << a[i] << " pancakes"<<endl;
return 0;
}
