#include<iostream>
using namespace std;

class check{
	public :
	void display()
		{
		  cout<<"whoops"<<endl;
		  cout<<"ggwp"<<endl;
		}
};

int main(){ 
check *L1;
L1->display();  //gunakan -> jika deklarasinya pointer
/*
market l1;
l1.display; //gunakan -> apabila deklarasinya tidak dengan pointer
*/
}

/////////////////////////////////////////////////////
/////////////////////////////////////////////////////

#include <iostream>
using namespace std;

/*class Mahasiswa{
int id;
char Nama[50];
}; 
*/

class Node // class deklarasi node,wajib,bisa struct bisa class{
	public:
	int data;
	Node *next;
};

Node *head;
void init(){
	head = NULL; //initialize node with head
}

bool isEmpty(){
	if (head == NULL) //check if  head is empty or not
	return 1;
return 0;
}

void tambahDepan(int databaru){
	Node *baru;
	baru = new Node();
	baru->data = databaru;
	baru->next = baru;
	if (isEmpty()){
		head = baru;
		head->next = head;
	}
	else{
	Node *bantu;
	bantu = head;
	while (bantu->next != head){
		bantu = bantu->next;
	}
	baru->next = head;
	head = baru;
	bantu->next = head;
	}
}

void tambahDataBelakang(int dataBaru){
  Node *baru;
  baru=new node();
  baru->data=dataBaru;
  baru->next=baru;
  	if (isEmpty()){
  		head=baru;
  		head->next=head;
  	} 
	else {
  		Data *bantu;
  		bantu=head;
 		while (bantu->next!=head){
  			bantu=bantu->next;
  		}
  		bantu->next=baru;
  		baru->next=head;
	}
}

void cetak(){
	if (!isEmpty()){
	Node *bantu;
	bantu = head;
	do{
		cout<<bantu->data<<" ,";
		bantu=bantu->next;
	}
	while (bantu!=head);
	} 
	else {
		cout<<"List Kosong";
	}
}

int main(){
	int();
	int n, data;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> data;
	tambahDepan(data);
}
	cetak();

return 0;
}
