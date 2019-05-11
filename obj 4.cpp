#include <iostream>
#include<string.h>
#include<stdlib.h>
 
using namespace std;

void validity(string);
void generatestring(char []);

string str1;
int main(){
	
	char ch;
	string str;
	
	cout<<"Enter Alphabet set\n";
	cin>>str;
	cout<<"this string take only first two characters\n";
	validity(str);

}
void validity(string str){
	int n,i,j=1,k=0,l,m,index,flag=0,check=0;
		n=str.length();
	str=str.substr(1,n-2);



//cout<<n;
char arr[n-2];
if(str!="")
{
n=str.length();
strcpy(arr,str.c_str());
for(i=0;i<n-2;i++){
	if(arr[i]==','){
	
	check++;
	}
	if(check==2){
	
	arr[i]='\0';
	break;
	}

}
//cout<<arr;
 check=0;
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
}}
//cout<<flag;
if(flag==0)
cout<<"Invalid Alphabet Set";
else{

cout<<"Valid Alphabet Set"<<endl;

generatestring(arr);
}


}
void generatestring(char arr[]){
	int i=0;
	int count=1;
	for(i=0;arr[i]!='\0';i++)
	if(arr[i]==',')
	count++;
	

	
	string strarr[count];
	int m=0;
	for(i=0;i<arr[i]!='\0';i++)
	if(arr[i]==',')
	m++;
	else
	strarr[m]+=arr[i];
	
	count=m+1;
	char ch='\0';
	string str;
	
	

	cout<<"Enter length of string\n";
	cin>>str;
	char strlen[str.length()];
	strcpy(strlen,str.c_str());
	
/*	for(i=0;i<11;i++){
	
	cin>>strlen[i];

	if(strlen[i]=='A'||strlen[i]=='a'){
	ch='A';
	
	break;
	
}
else if(strlen[i]!='0'&&strlen[i]!='1'&&strlen[i]!='2'&&strlen[i]!='3'&&strlen[i]!='4'&&strlen[i]!='5'&&strlen[i]!='6'&&strlen[i]!='7'&&strlen[i]!='8'&&strlen[i]!='9'){
cout<<"here";
break;
}
break;
break;
	}*/

//	cout<<"strlen"<<strlen<<endl;
//	strlen[++i]='\0';
	int len=0,flag=0, total=1,n,j,k;
	if(strcmp(strlen,"A")==0||strcmp(strlen,"a")==0){
	//	cout<<"for All";
		flag=2;
	}

	else{
		int m=10;
		for(i=0;i<strlen[i]!='\0';i++){
			if(strlen[i]!='0'&&strlen[i]!='1'&&strlen[i]!='2'&&strlen[i]!='3'&&strlen[i]!='4'&&strlen[i]!='5'&&strlen[i]!='6'&&strlen[i]!='7'&&strlen[i]!='8'&&strlen[i]!='9')
		{
		flag=1;
		break;
		}
		/*if(arr[i]>='A'&&arr[i]<='Z')
		d=arr[i]-48;
		else{
			d=arr[i]-96;	
		}*/
	//	cout<<arr[i];

	
			len=m*len+(strlen[i]-48);
		
		}
		
		
	}
	cout<<endl;
	if(flag==1){
		cout<<"Invalid length";
	}
	else{
if(flag==2){
		cout<<"^";
	if(count>1){
	

	len=6;

for(i=1;i<len;i++){
total=1;
int binarr[i];
for(j=0;j<i;j++)
binarr[j]=0;
for(j=1;j<=i;j++)
total*=2;
for(j=0;j<i;j++){
	cout<<strarr[binarr[j]];
	
}
cout<<endl;
	for(j=2;j<=total;j++){
		n=i-1;
		while(n>=0){
			if(binarr[n]==0)
			{
				binarr[n]+=1;
				break;
			}
			else {
				binarr[n]=0;
				n--;
			}
		}
	for(k=0;k<i;k++)
	cout<<strarr[binarr[k]];
		
		
	cout<<endl;	
	}

}
}
else{
	for(i=1;i<8;i++){
	
	for(j=1;j<i;j++)
	cout<<strarr[0];
	cout<<endl;}
}
cout<<".\n.\n.\n.\n.\n.\n.";
}
else{
	if(len==0)
	
	cout<<"^";
else{

if(count>1){

	for(i=1;i<=len;i++){
		total*=2;
	}
	int binarr[len];
	for(i=0;i<len;i++)
	binarr[i]=0;
	for(i=0;i<len;i++)
	cout<<strarr[binarr[i]];
	cout<<endl;
	for(i=2;i<=total;i++){
		n=len-1;
		while(n>=0){
			if(binarr[n]==0)
			{
				binarr[n]+=1;
				break;
			}
			else {
				binarr[n]=0;
				n--;
			}
		}
	for(j=0;j<len;j++)
	cout<<strarr[binarr[j]];
		
		
	cout<<endl;	
	}
}
else
for(i=0;i<len;i++)
cout<<strarr[0];
cout<<endl;}
}
}
//cout<<"total"<<total;
	
	
}



