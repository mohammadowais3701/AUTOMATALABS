#include<iostream>
#include<string.h>

using namespace std;
void game(int TT[][4]){
	int i,j,k=3,sum=0,c_state=0,m=0,p1,p2;//m for string transition
	string str;
	for(m=0;m<2;m++){
		sum=0,k=3,c_state=0;
		cout<<"------------------------PLAYER "<<m+1<<"--------------------------\n";
		
	do{
	cout<<"Enter String\n";//string accepted in the form of 1,2,3,4
	cin>>str;
	char arr[str.length()];
	strcpy(arr,str.c_str());
int test=0;
		for(j=0;j<str.length();j++){
			if(arr[j]==49){
			if(c_state!=TT[c_state][0])
				sum+=TT[c_state][0];
				c_state=TT[c_state][0];
				test+=1;
				
			}
			else if(arr[j]==50){
				if(c_state!=TT[c_state][1])
				sum+=TT[c_state][1];
				c_state=TT[c_state][1];	
				test+=2;
			}
			else if(arr[j]==51){
				if(c_state!=TT[c_state][2])
				sum+=TT[c_state][2];
				c_state=TT[c_state][2];	
			}
			else if(arr[j]==52){
				if(c_state!=TT[c_state][3])
				sum+=TT[c_state][3];
				c_state=TT[c_state][3];	
			}
		//	cout<<"score"<<sum<<endl<<test<<endl;
		}
	
		c_state=0;
		k--;
	
	}while(k!=0);
	if(m==0)
	p1=sum;
	else 
	p2=sum;
}
if(p1>p2){
	cout<<"Player 1 won!!!!";
}
else if(p1<p2){
	cout<<"Player 2 won!!!!";
}
else{
	cout<<"Match Drawn";
}

//	cout<<"score"<<sum;
	
}
int main(){
	int sum1,sum2;
	int TT[][4]={{0,6,0,1},
				{1,4,0,11},
				{5,2,2,10},
				{14,3,8,3},
				{1,9,6,12},
				{6,2,5,9},
				{0,5,6,4},
				{12,8,9,14},
				{7,8,10,3},
				{4,10,5,7},
				{9,10,2,8},
				{11,12,1,15},
				{11,7,4,13},
				{15,14,12,13},
				{13,3,7,14},
				{15,13,11,15},
				};
				
game(TT);				
	
}
