#include<iostream>
#include<string.h>
using namespace std;
//void checkmoore(int [][3],int);
int main(){
	int states,i,j,k=0,c_state=0,count=0;
	char sum[]={'a','b'};
	string str;
	

	int t_states[5][3]={{1,0,0},
						{1,2,0},
						{1,3,0},
						{4,0,0},
						{1,0,1}};


cout<<"Enter String\n";
cin>>str;
char strarr[str.length()];
strcpy(strarr,str.c_str());
for(i=0;i<str.length();i++){
	if(strarr[i]=='a'){
		c_state=t_states[c_state][0];
	}
	else if(strarr[i]=='b'){
		c_state=t_states[c_state][1];
	}
	if(t_states[c_state][2]==1){
		count++;
	}
	
}

	cout<<"Occurrence of abba="<<count;

}
