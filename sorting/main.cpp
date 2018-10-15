#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;
//metode selection sort
void SelectionSort(int array[], const int Size){
	int i, j, smallest, temp;
	for(i=0;i<Size;i++){
		smallest=i;
		for(j=i;j<Size;j++){
			if(array[smallest]>array[j]){
			smallest=j;
			}
		}
		temp=array[i];
		array[i]=array[smallest];
		array[smallest]=temp;
	}
	for(int n=0;n<Size;n++)
		cout<<setw(3)<<array[n];
}



void main(){
	int NumList[8]={5, 34, 32, 25, 75, 42, 22, 2};
	int Swap;
	cout<<"data sebelum diurutkan: \n";
	for(int ctr=0;ctr<8;ctr++){
		cout<<setw(3)<<NumList[ctr];
	}
	cout<<"\n\n";
//metode buble sort
	/*for(int i=0;i<7;i++)
		for(int ii=0;ii<7;ii++)
		if(NumList[ii] > NumList[ii+1] ){
			Swap = NumList[ii];
			NumList[ii]=NumList[ii+1];
			NumList[ii+1]=Swap;
		}
	cout<<"Data setelah diurutkan: (Bubble sort)\n";
	for(int iii=0;iii<8;iii++)
		cout<<setw(3)<<NumList[iii];
	cout<<endl<<endl;
*/
	SelectionSort(NumList, 8);
	


getch();
}

