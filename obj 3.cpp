#include <iostream>
#include<string.h>
#include<stdlib.h>
 
using namespace std;
struct node{
	char data[30];
	int len;
	struct node* next;

	
};
void validity(string);
void checkstring(char [],int);
void insert(string,struct node**);
string str1;
int main(){
	
	char ch;
	string str;
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

int len_string;

void checkstring(char arr[],int n ){
string str1;
int i,count=0,k=0,c=0,j,m=0,large=0,min=1000,flag=0;
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
struct node* start=NULL;

int total=0;
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
			total++;
			insert(temp,&start);

		for(y=1;y<=i;y++){
			arr1[m--]='*';
		}
	}
}
	//	cout<<temp<<endl;
	}
	

	
}
string strmyarr[total];
int d=0;
string tempstr;
char temparr1[len_string],temparr2[len_string+1];
strcpy(temparr1,str1.c_str());
strcpy(temparr2,temparr1);
//cout<<temparr1<<endl;
//cout<<temparr2<<endl;
temparr2[len_string]='\0';

struct node *current=start;


m=0;
d=0;
int b=0;
for(i=0;i<total;i++){
current=start;

while(current!=NULL){
	char * temparr3;
	temparr3=(char *)calloc (current->len,sizeof(char));


	
	for(j=0;j<current->len;j++){
		temparr3[j]=temparr2[j];
		
	}
	temparr3[j]='\0';
	

	string st=temparr3,st1=current->data;

	
if(	st==st1){

strmyarr[d++]=current->data;

	for(j=b;j<(current->len)+b;j++){
		temparr1[j]='*';
	}
	b+=current->len;
m=0;	
for(j=0;j<len_string;j++){
	if(temparr1[j]!='*'){
	
	temparr2[m++]=temparr1[j];

	}
}
temparr2[m]='\0';

}
	

	current=current->next;
	free(temparr3);

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
		cout<<"Given String is made by given alphabet set\n";
		cout<<"Size of string="<<total<<endl;
for(i=0;i<total;i++)
cout<<"tokens:"<<strmyarr[i]<<endl;		
cout<<endl<<"Reverse string is:\n";		
for(i=total-1;i>=0;i--)
cout<<strmyarr[i];
}

}
void insert(string str,struct node** start){
	struct node * newnode;

	newnode=(struct node*)malloc(sizeof(struct node));
	
	str+='\0';
strcpy(newnode->data,str.c_str());
newnode->data[str.length()]='\0';
newnode->len=str.length()-1;

	//	cout<<newnode->data;
	newnode->next=NULL;

		if(*start==NULL){
	
	
		*start=newnode;
		
		
	}
	else{
	
		struct node* current=*start;
		while(current->next!=NULL){
				//	cout<<"inside";
		
			current=current->next;
			
			
		}
		
	
		
			current->next=newnode;
	}
	
}


