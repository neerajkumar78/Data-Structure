#include<iostream>
using namespace std;
#include<cstring>
#include<cstdio>
int lcs(string& x,int i,int n,string& y,int j,int m){
    if(i==n||j==m)
        return 0;
    else if(x[i]==y[j])
        return 1+lcs(x,i+1,n,y,j+1,m );
    else{
        return max(lcs(x,i+1,n,y,j,m ),lcs(x,i,n,y,j+1,m ));
    }
}
int main(){
//string p;
//getline(cin,p);
//cout<<p.length();
//cout<<p;
string x,y;
getline(cin,x);
getline(cin,y);
int n=x.length();
int m=y.length();

int l=lcs(x,0,n,y,0,m);
printf("length of subsequence is:%d",l);
}

