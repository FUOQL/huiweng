#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
 char a[20];
 cout<<"请输入一串字符:"<<endl;
 gets(a);
 int i=0;
 int j=strlen(a)-1;
 int l=0;
 for(int z=0;z<strlen(a)/2;z++)
 {
  if(a[i]!=a[j])
  {
  cout<<"不是回文字符。"<<endl;
  l=1;
  break;
  }
  i++;
  j--;
  } 
if(l!=1){
 cout<<"是回文."; 
}
 return 0;
 
}
