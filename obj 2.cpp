#include <iostream>
#include<string.h>
 
using namespace std;
void validity(string);
void checkstring(char [],int);
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



//cout<<n;
char arr[n-2];
if(str!="")
{
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
}}
//cout<<flag;
if(flag==0)
cout<<"Invalid Alphabet Set";
else{

	checkstring(arr,n);
}


}


void checkstring(char arr[],int n ){
string str1;
int i,len_string,count=0,k=0,c=0,j,m=0,large=0,min=1000,flag=0;
char arr1[n];
while(k<n){
	if(arr[k++]==',')
	count++;
	
}
//cout<<count;
count++;
string str_arr[count];

int f=0;
if(count-1==0){
	char temparr[n+1];
	for(i=0;i<n;i++){
	temparr[i]=arr[i];	
	}
	temparr[i]='\0';
	str_arr[0]=temparr;
	large=n;
	min=n;
	cout<<str_arr[0];
} 
else{

for(i=0;i<n;i++){
	j=i;
	m=i;
	while(arr[m]!=','&&m<n){
	
	c++;
	i++;
	m++;}
	if(c>large)
	large=c;
	if(c<min)
	min=c;
	char temparr[c];
	for(k=0;k<c;k++)
	temparr[k]=arr[j++];
//	cout<<temparr;
temparr[k]='\0';
	c=0;
str_arr[f]=temparr;
//cout<<str_arr[f];
f++;
}}
//cout<<"Large"<<large<<endl;
//cout<<"min"<<min<<endl;
//cout<<str_arr[1].length();
	cout<<"Enter String for tokenization"<<endl;
	cin>>str1;

int y,z,check=0;

len_string=str1.length();
	arr1[len_string];//redclared arr by new length ;
strcpy(arr1,str1.c_str());

for(i=large;i>=min;i--){
	char temp[i+1];
	for(j=0;j<len_string;j++){
		
		m=j;
		for(k=0;k<i;k++){
			temp[k]=arr1[m++];
		
		}
		temp[k]='\0';
		m--;
		for(z=0;z<count;z++){
		if(temp==str_arr[z]){
		cout<<"TOKENS::"<<temp<<endl;
		for(y=1;y<=i;y++){
			arr1[m--]='*';
		}
	}
}
	//	cout<<temp<<endl;
	}
	
	
	
}
cout<<endl;
for(z=0;z<len_string;z++)
if(arr1[z]!='*'){

check=1;
break;
}
if(check==1){
	cout<<"Given String is not made by given alphabet set";
}
else{
		cout<<"Given String is made by given alphabet set";
}

}

