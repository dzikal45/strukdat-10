/*
	Nama: Dzikri Algiffari
	NPM:140810180053
	Kelas:A
*/

#include <iostream>
using namespace std;
const int maxElement=255;

struct queue{
  int isi[maxElement];
  int head;
  int tail;
};
queue q;
void createElement(queue& q){
  q.head=0;
  q.tail=-1;
}
void insertQueue(queue& q, int element,int n){
  if(q.tail==n-1){
    cout<<"antrian penuh";
  }
  else{
    q.tail=q.tail+1;
    q.isi[q.tail]=element;
  }
}
void deleteQueue(queue& q,int& elementHapus){
  if(q.head>q.tail){
    cout<<"antrian kosong"<<endl;
  }
  else{
        elementHapus=q.isi[q.head];
        cout<<elementHapus<<endl;
        for(int i=0;i<=q.tail;i++){
          q.isi[i]=q.isi[i+1];
        }
        q.tail=q.tail-1;
  }
}
int main(){
  int n;
  int element,p;
  char a;
  cout<<"Masukan banyak antrian ="; cin>>n;
  createElement(q);
  for(int i=0;i<n;i++){
    cout<<"Angka:";cin>>element;
    insertQueue(q,element,n);
  }
   cout << "POP :"<<endl;
    for(int i=0;i<n;i++){
        deleteQueue(q,p);
     
    }

}
