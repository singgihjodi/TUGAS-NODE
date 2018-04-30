/*TUGAS-PETRUK-SLLC Dengan Head
Nama kelompok :
Singgih Jodi Prayoga 1717051013
Wildan Mutaqin 1717051037
Kasandra Cahyani 1717051027
Putri Febriana 1717051022*/

#include<iostream>
using namespace std;

class title
{	
	public :		//dont erase this,or it will be private class
		int num;
		title *temp;	
};

title *head;

void addhead (){
	head= '\0';
}

bool check (){
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
			cout<<"Data Depan Telah Dihapus!"<<endl;
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
			cout<<"Data Belakang Telah Dihapus!"<<endl;
				} 	else 
				  {
		  	cout<<"empty"<<endl;
		  		}
}

void tambah_tengah(){
	title *tmp, *help;
	int posisi_sisip;
	if(head != NULL){
		cout<<"Sisip data setelah data ke : ";
		cin>>posisi_sisip;
		help=head;
		tmp=new title;
		for (int i=1;i<posisi_sisip;i++){
			if(help->temp != NULL){
				help=help->temp;
			}
			else{
				continue;
			}
		}
		cout<<"Masukan Angka : ";
		cin>>tmp->num;
		tmp->temp=help->temp;
		help->temp=tmp;
	}
	else{
		cout<<"Belum Ada Data !";
	}
	
}

void hapus_tengah(){
	int banyakdata,posisi_hapus,poshapus;
	title *hapus, *help;
	if(head !=NULL){
		cout<<"Akan dihapus pada data ke :";
		cin>>posisi_hapus;
		banyakdata=1;
		help=head;
		while(help->temp != NULL){
			help=help->temp;
			banyakdata++;
		}
		if((posisi_hapus<1) || (posisi_hapus>banyakdata)){
			cout<<"Belum ada Data !";
		}
		else{
			help=head;
			poshapus=1;
			while(poshapus<(posisi_hapus-1)){
				help=help->temp;
				poshapus++;
			}
			hapus=help->temp;
			help->temp=hapus->temp;
			delete hapus;
		}
	}
	else{
		cout<<"Node Masih Kosong !!";
	}
}


void inputangka(){
	cout<<"Masukan Banyak Angka :";
}


int main(){	
	int n,num;
	addhead();
	//================================================================//
	cout<<"==Tambah Node Depan=="<<endl;		//Nomor 1
	inputangka();
	cin>>n;
	for(int x=1;x<=n;x++)
	{
		cin>>num;	
		addnumb(num);			
	}
	print();
	cout<<endl<<endl;
	//================================================================//
	cout<<"==Tambah Node Belakang=="<<endl;		//Nomor 2
	inputangka();
	cin>>n;
	for(int x=1;x<=n;x++)
	{
		cin>>num;	
		addback(num);			
	}
	print();
	cout<<endl<<endl;
	//================================================================//
	cout<<"==Hapus Node Depan=="<<endl;			//Nomor 3
	rmvfrnt();
	print();
	cout<<endl<<endl;
	//================================================================//
	cout<<"==Hapus Node Belakang=="<<endl;		//Nomor 4
	rmvb();
	print();
	cout<<endl<<endl;
	//================================================================//
	cout<<"==Tambah Node Tengah=="<<endl;		//Nomor 5
	inputangka();
	cin>>n;
	for (int i=0;i<n;i++){
		tambah_tengah();   
	}
	print();
	cout<<endl<<endl;
	//================================================================//
	cout<<"==Hapus Node Tengah=="<<endl;		//Nomor 6
	inputangka();
	cin>>n;
	for (int i=0;i<n;i++){
		hapus_tengah();
		print();
	}
	
	return 0;

	
}
