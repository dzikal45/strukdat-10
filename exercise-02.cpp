/*
	Nama: Dzikri Algiffari
	NPM:140810180053
	Kelas:A
*/
#include<iostream>
using namespace std;
struct ElementQueue{
  char info ;
  ElementQueue* next;
};
typedef ElementQueue* pointer;
typedef pointer list;
struct queue{
  list head;
  list tail;
};
 queue  q;
 void createlist(queue& q){
   q.head= NULL;
   q.tail=NULL;
 }
 void createElmt(pointer& pBaru){
   pBaru= new ElementQueue;
   cout<<"Masukan antrian =";cin>>pBaru->info;
   pBaru->next=NULL;
 }
 void insertQueue(queue& q,pointer pBaru){
   if(q.head==NULL){
     q.head=pBaru;
     q.tail=pBaru;
   }
   else{
     q.tail->next=pBaru;
     q.tail=pBaru;
   }
 }
 void deleteQueue(queue& q,pointer& pHapus){
   if(q.head==NULL && q.tail==NULL){
     pHapus=NULL;
     cout<<"list kosong";
   }
   else if(q.head->next==NULL){
     pHapus=q.head;
     q.head=NULL;
     q.tail=NULL;
     cout << "\nData yang dihapus  " << pHapus->info<< endl;
   }
   else{
     pHapus=q.head;
     q.head=q.head->next;
     pHapus->next=NULL;
     cout << "\nData yang dihapus   " << pHapus->info<< endl;

   }
 }
 void traversal(queue q){
   pointer pBantu;
   pBantu=q.head;
   while(pBantu!=NULL){
     cout<<pBantu->info<<",";
     pBantu=pBantu->next;
   }
 }
 main(){
   pointer pb,ph;
   int n;
   createlist(q);
   cout<<"masukan banyak antrian="; cin>>n;
     for(int i=0; i<n; i++)
    {
        createElmt(pb);
        insertQueue(q,pb);
    }
  cout << "POP : "<<endl;
    for(int i=0;i<n;i++){
    deleteQueue(q,ph);
    }

 }
