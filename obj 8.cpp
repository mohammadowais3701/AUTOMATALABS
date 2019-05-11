#include<iostream>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define LENGTH 100
using namespace std;

char stack[LENGTH];
int top=-1;

int isoperator(char ch){
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
	return(1);
	else 
	return(0);
}
int precedence(char ch){
		if(ch=='+'||ch=='-')
		return(1);
		else if(ch=='*'||ch=='/')
		return (2);
		else if(ch=='^')
		return (3);
		else 
		return(0);
		
}

char pop(){
	char ch;
	
	if(top<0){
		cout<<"Stack Under Flow,Invalid infix";
		exit(1);
	}
	else{
		ch=stack[top];
			
		top--;
	
		return (ch);
	}
}

void push(char item ){
	if(top>=LENGTH-1){
		cout<<"Stack Over Flow";
		exit(1);
		
	}
	else{
	top++;
		stack[top]=item;
	}
	
}
void infixTOpostfix(char INFIX[],char POSTFIX[]){
	int i=0,j=0,len=0;
	char item,ch;
	push('(');
	//strcat(INFIX,")");
//	strcat(INFIX,'\0');
//	cout<<INFIX<<endl;
	
	item=INFIX[i];
	while(item!='\0'){
		if(item=='('){
			push(item);
		}
		else if(isdigit(item)){
	
			POSTFIX[j]=item;
			j++;
		}
		else if(isoperator(item)==1){
			
			ch=pop();
		
			while(isoperator(ch)==1 && precedence(ch)>=precedence(item)){
				
				POSTFIX[j++]=ch;
				ch=pop();
				
			}
			push(ch);
			push(item);
			
		}
		else if(item==')'){
			ch=pop();
			while(ch!='('){
				POSTFIX[j]=ch;
				j++;
				ch=pop();
			}
		}
		else{
			
			cout<<"Invalid Expression";
		exit(1);
			
		}
		i++;
		//	cout<<item<<endl;
		item=INFIX[i];
		
		
	}
	
	POSTFIX[j]='\0';
	
	
}
void evaluatepostfix(char POSTFIX[]){
	int top = -1 ;  
	int i ;
	char ch;
	int val;
	int A, B ;
strcat(POSTFIX,")");

	
	for (i = 0 ; POSTFIX[i] != ')'; i++)
	{
		ch = POSTFIX[i];
		if (isdigit(ch))
		{
			
			push(ch - '0');
		}
		else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
		{
		
			A = pop();
			B = pop();

			switch (ch) 
			{
				case '*':
				val = B * A;
				break;

				case '/':
				val = B / A;
				break;

				case '+':
				val = B + A;
				break;

				case '-':
				val = B - A;
				break;
			}

		
			push(val);
		}
	}
	int d=pop();
	cout<<endl<<"Result="<<d<<endl;
//	printf( " \n Result: %d \n", pop()) ;
	
}
int main(){
	char INFIX[LENGTH],POSTFIX[LENGTH];
	string str;
	int len;
	cout<<"Enter Expression\n";
cin>>str;
	len=str.length();
	strcpy(INFIX,str.c_str());
INFIX[len]=')';
INFIX[len+1]='\0';
	
	infixTOpostfix(INFIX,POSTFIX);
	cout<<"POSTFIX\n";
	cout<<POSTFIX;
	evaluatepostfix(POSTFIX);
	return (0);
	
}
