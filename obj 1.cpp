#include <iostream>
#include<string.h>
 
using namespace std;
void validity(string);
int main(){
	string str;
	char ch;
	
	cout<<"Enter Alphabet set\n";
	cin>>str;
	validity(str);

}
void validity(string str){
	int n,i,j=1,k=0,l,m,index,flag=0;
		n=str.length();
	str=str.substr(1,n-2);
//	cout<<str;
char arr[n-2];
n=str.length();
strcpy(arr,str.c_str());
int check=0;
while(check<n){
	if(arr[check++]==','){
		flag=1;
	}
}

//cout<<arr<<endl;


if(flag==1){
flag=0;
for(i=0;i<n;i++){

	k=i;
//	ch=arr[k];
	index=i;
	
	
while(k<n&&arr[k]!=',')
	k++;
if(k<n)
flag=0;

	m=k;
//cout<<n<<endl;
	for(j=k+1;j<n;j++){
	
		if(arr[j]==','||arr[index]==',')
		{
		
			if(flag==0){
				
				break;
			}
		
			if(arr[index]==','){
			
			while(j<n&&arr[j]!=','){j++;
			}}
		
			index=i-1;
		for(m=j;m<n;m++)
		if(arr[m]==',')
			flag=0;
			
		}
		
	else if(arr[j]!=arr[index]){
			
			flag=1;
		}
	index++;
//	cout<<j;
	}
	if(flag==0){
		break;
	}

	i=k;
	
	
}}
else{
	flag=1;
}
//cout<<flag;
if(flag==0)
cout<<"Invalid Alphabet Set";
else{
	cout<<"Valid alphabet set";
}


}




	
	
	
	
		
