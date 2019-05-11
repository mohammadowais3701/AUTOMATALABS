#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int states,i,j,k=0;
	char sum[]={'a','b'};
	string str;
	cout<<"Enter Number of States\n";
	cin>>states;
	int t_states[states][3],a;

	for(i=0;i<states;i++){
		for(j=0;j<2;j++){
		cout<<"Enter Transition on state "<<i+1<< "read a:"<<endl;
		cin>>a;
		t_states[i][j++]=a-1;
		cout<<"Enter Transition on state "<<i+1<< "read b:"<<endl;	
		cin>>a;
		t_states[i][j++]=a-1;
		}
		cout<<i+1<<" state is a final press 1 for yes or 0 for No\n";
		cin>>t_states[i][2];
		while(t_states[i][2]!=0 && t_states[i][2]!=1){
			cout<<"press only 1 or 0";
			cin>>t_states[i][2];
		}
	}
/*	for(i=0;i<states;i++){
		for(j=0;j<3;j++)
		cout<<t_states[i][j]<<" ";
		cout<<endl;
	}*/
	
	cout<<"Enter string\n";
	cin>>str;
	char strarr[str.length()];
	strcpy(strarr,str.c_str());
	
//	cout<<arrstr;
int c_state=0;
int flag=0;
for(i=0;i<str.length();i++){
//cout<<"strarr"<<strarr[i]<<endl;
//cout<<"current"<<c_state+1<<endl;
	if(strarr[i]=='a'){
		c_state=t_states[c_state][0];
		
	}
		else if(strarr[i]=='b'){
		c_state=t_states[c_state][1];
	}
	else{
		flag=1;
		break;
	}
	
	
}
if(flag==0){
	
	if(t_states[c_state][2]==1){
		cout<<"string accepted";
	}
	else{
		cout<<"string does not accepted";
	}
}
else{
	cout<<"Invalid string";
	
//		cout<<"string accepted";
}
	
	
}
