
	
							
		
				
				 	
				 	
							
					
					
					
					
					
						
							
				//TUGAS-PETRUK-SLLC Dengan Head
#include<iostream>
using namespace std;

class title
{	
public :		//dont erase this,or it will be private class
int num;
title *temp;	

};
title *head;
void addhead ()
{
	head= '\0';
}
bool check ()
{
	if (head=='\0'){
	return true;
	}
	else{
	return false;
	}
}

void addnumb (int data)
{
title *tmp;
title *help;
	tmp = new title ();
	 	tmp->num = data;
	 		tmp->temp = tmp;
			 	if (check()==1)
				 {
				 	head=tmp;
				 	head->temp=head;
						  }	 
					else
					{
					help=head;
					while(help->temp!=head)
					{
						help=help->temp;
						}	
					tmp->temp=head;
					head=tmp;
					help->temp = head;	
						}
	cout<<"----inserted data---- \n";
 } 	
 
 void addback(int data)
{
title *tmp;
title *help;
	tmp = new title ();
	 	tmp->num = data;
	 		tmp->temp = tmp;
			 	if (check()==1)
				 {
				 	head=tmp;
				 	head->temp=head;
						  }	 
					else
					{
					help=head;
					while(help->temp!=head)
					{
						help=help->temp;
						}	
					help->temp = tmp;
					tmp->temp = head;
						
				tmp->temp = head;
						
						}
	cout<<"----inserted data---- \n";
 } 	

void print ()
{
if (!check())
{
	title *help;
	help=head;
	do{
		cout<<help->num<<" ";
		help=help->temp;
	}
	while (help!=head);
	}
	else
	{
		cout<<"empty";
	}
}

void rmvfrnt()
{
	title *clear;
	title *help;
	if (check()==0)
	{
		int var;
		clear=head;
		var= head->num;
			if (head->temp !=head)
			{
				help=head;
					while (help->temp!=head)
					{
						help=help->temp;
					}
					head=head->temp;
					delete clear;
					help->temp=head;
			}
			else
			{
				head='\0';
			}
			cout<<"cleared"<<endl;
	}
		else 
		{
			cout<<"empty"<<endl;
		}
}

void rmvb()
{
	title *clear;
	title *help;
		if (check()==0){
			int var;
			clear = head;
			if(head->temp == head){
				head = '\0';
			}else{
				help = head;
				while(help->temp->temp != head){
					help = help->temp;
				}
				clear = help->temp;
	         	var = help->num;
				help->temp = head;
				delete clear;
			}
			cout<<"deleted";
				} 	else 
				  {
		  	cout<<"empty"<<endl;
		  		}
	}




	


int main()
{	int n,num;
	addhead();
/*	addback(2);
	addback(10);
	addback(78); */
	cout<<"how many insert data : ";
	cin>>n;
	for(int x=1;x<=n;x++)
	{
		cin>>num;
		
		addnumb(num);//no.1
	}
	 //rmvfrnt(); // no.3
	 //rmvb(); //no.4
	 
	
	/*cout<<"bawah"<<endl;
	for(int x=1;x<=n;x++)
	{
		cin>>num;
		
		addback(num); //no.2
	} */
	print();
	
	return 0;
}