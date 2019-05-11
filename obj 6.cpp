#include<iostream>
#include<string.h>
using namespace std;
void checkmoore(int [][3],int);
int main(){
	int states,i,j,k=0;
	char sum[]={'a','b'};
	string str;
	cout<<"Enter the value of divisor\n";
	cin>>states;
	while(states<=0){
	cout<<" Again Enter the value of divisor\n";
	cin>>states;	
	}
	int t_states[states][3],a;

	for(i=0;i<states;i++){
		for(j=0;j<2;j++){
		cout<<"Enter Transition on state "<<i+1<< "read 0:"<<endl;
		cin>>a;
		t_states[i][j++]=a-1;
		cout<<"Enter Transition on state "<<i+1<< "read 1:"<<endl;	
		cin>>a;
		t_states[i][j++]=a-1;
		}
		cout<<"Output on state"<<i+1<<"\n";
		cin>>t_states[i][2];
	
	}

	checkmoore(t_states,states);
	

}
void checkmoore(int t_states[][3],int states){
	int i,j,num,rem,temp=1,count=0,c_state=0,r;
	long binnum=0;
	char ch;
	do{
	
	cout<<"Enter Number"<<endl;
	cin>>num;
//	r=num%states;
	while(num!=0){
		rem=num%2;
		num=num/2;
		binnum=binnum+rem*temp;
		temp=temp*10;
		count++;
	}
	
//cout<<binnum<<endl<<count;
int arr[count],divisor=10;
for(i=count-1;i>=0;i--){
	arr[i]=binnum%divisor;
	binnum/=divisor;
	
}
int flag=0;
for(i=0;i<count;i++){
	if(arr[i]==0)
	c_state=t_states[c_state][0];
	else if(arr[i]==1)
	c_state=t_states[c_state][1];

	
}

cout<<"remainder of your number is"<<t_states[c_state][2]<<endl;
/*if(t_states[c_state][2]==r){
	cout<<"accepted";
	
}
else{
	cout<<"not accepeted";
}*/
c_state=0;



count=0,temp=1,binnum=0;


cout<<endl<<"do you want to continue press y yes and n for no\n";
cin>>ch;
}while(ch=='y'||ch=='Y');


}
