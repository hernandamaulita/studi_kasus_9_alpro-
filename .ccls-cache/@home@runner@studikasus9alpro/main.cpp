#include <iostream>
using namespace std;
// membuat deklarasi class//
class angka{
private:
 //deifinisi alamat variabel//
        int a[10][10];
          int garis,kolom,jumlah,temp;
          int array2[20];

public:

 void input(){
   //input jumlah isi  array 2 dimensi//
    cout<<"masukan data array dua dimensi dengan batas 4 baris dan 5 kolom "<<endl;
     // masukan isi kolom array//
    for(int i=0;i<4;i++)
    for(int j=0;j<5;j++)
    {
        cout<<endl;
        cout<<"baris ["<<i<<"]\tkolom["<<j<<"]:";
        cin>>a[i][j];
    }
    
 }
void proses(){
   for(int i=0;i<4;i++)
    for(int j=0;j<5;j++)
    
    {
        // proses bubble short array//
        garis=i;
        kolom=j;
        for(int k=0;k<4;k++)
        for(int l=0;l<5;l++)
              {
                   if(a[garis][kolom]<a[k][l])
                   { 
                        garis=k;
                        kolom=l;
                   }
                   temp=a[i][j];     
        a[i][j]=a[garis][kolom];
        a[garis][kolom]=temp;
              }   
    }

}

void output(){
      //menampilkan array 2 d yang sudah dishorting//   
    for(int i=0;i<4;i++)
    {
    for(int j=0;j<5;j++)
    {
       cout<<" "<<a[i][j];
    }
   cout<<endl;
    }
    // konvrensi array 2 d ke satu dimensi//
    int k=0;
	for (int i=0; i<4; i++)
	{for (int j=0; j<5; j++)
	{ array2[k]=a[i][j];
	k++;}
	}
    // menjadi 

    cout << " Setelah dikonversi menjadi array 1 dimensi :"<<endl;
	for (int k=0; k<4*5; k++)
	{cout << array2[k]<<"  ";}
  
}
};
int main(){
    angka a;
    a.input();
    a.proses();
    a.output();
}