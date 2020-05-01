#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

vector<int> slection_sort(vector<int> a){
int n=a.size();
for(int i=0;i<n-1;i++){
int x=i;
for(int j=i;j<n;j++){
if(a[x]>a[j])
	x=j;

}
swap(a[i],a[x]);


}

return a;



}

int main(){

int n;
cin>>n;
if(n>100){
cout<<"very large size\n";
return 0;
}
vector<int> x;
for(int i=0;i<n;i++){
int y;
cin>>y;
x.push_back(y);

}
vector<int> ans=selection_sort(x);



}
