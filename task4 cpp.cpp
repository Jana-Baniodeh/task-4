#include<iostream>
using namespace std;
int main(){
	int n,x,i;
	cin>>n;
	int A{};
for ( i=1;i<=n;i++){
	cin>>A[i];

}
cin>>x;
int position=-1;
for (int i=0;i<n;i++)	
if(A[i]==x){
	position =1;
	break;
}
cout<<position <<endl; 
}
	


