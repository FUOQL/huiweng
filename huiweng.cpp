#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
 char a[20];
 cout<<"������һ���ַ�:"<<endl;
 gets(a);
 int i=0;
 int j=strlen(a)-1;
 int l=0;
 for(int z=0;z<strlen(a)/2;z++)
 {
  if(a[i]!=a[j])
  {
  cout<<"���ǻ����ַ���"<<endl;
  l=1;
  break;
  }
  i++;
  j--;
  } 
if(l!=1){
 cout<<"�ǻ���."; 
}
 return 0;
 
}
