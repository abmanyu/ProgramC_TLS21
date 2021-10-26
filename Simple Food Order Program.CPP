#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char name[30], nasi1[]="Original" ,nasi2[]="Seafood" ,nasi3[]="Pedas" ,nasi4[]="Sosis", roll1[]="Ayam Negeri", roll2[]="Ayam Kampung", mie1[]="Mie Goreng Original",mie2[]="Mie Goreng Pedas",mie3[]="Mie Goreng Seafood";
	char cap1[]="Capcay Original", cap2[]="Capcay Spesial", cap3[]="Capcay Super Spesial";
	char ayam1[]="Ayam Negeri", ayam2[]="Ayam Kampung", gotostart ;
	int choice=0,pchoice,pchoice1, quantity;// time=40;
	beginning:
	system("CLS");
	cout<<"\t\t\t\t-----------------------------------------\n";
	cout<<"\t\t\t\t           Rumah Makan Indonesia            \n";
	cout<<"\t\t\t\t-----------------------------------------\n\n";
	
	cout<<"\n\n\tIngin memesan menu apa?\n\n";

	cout<<"\t--------------------\n";
	cout<<"\t        Menu        \n";
	cout<<"\t--------------------\n\n";

	cout<<"\t1) Nasi Goreng\n";
	cout<<"\t2) Mie Goreng\n";
	cout<<"\t3) Capcay\n";
	cout<<"\t4) Ayam Goreng\n";
	cout<<"\n\tMohon masukkan nomor pilihan Anda: ";
	cin>>choice;

	if(choice==1)
	 {
		cout<<"\n\t1) "<<nasi1<<"\n";
		cout<<"\t2) "<<nasi2<<"\n";
		cout<<"\t3) "<<nasi3<<"\n";
		cout<<"\t4) "<<nasi4<<"\n";
		cout<<"\n\tMohon masukkan pilihan varian?:";
		cin>>pchoice;
		if(pchoice>=1 && pchoice<=5)
		{
			cout<<"\n\t1) Kecil Rp15k\n"<<"\t2) Sedang Rp18k\n"<<"\t3) Besar Rp21k\n";
			cout<<"\n\tMohon masukkan pilihan ukuran:";
			cin>>pchoice1;
			if(pchoice1>=1 && pchoice1<=3)
			cout<<"\n\tBanyak barang: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 15000*quantity;
			break;

			case 2: choice = 18000*quantity;
			break;

			case 3: choice = 21000*quantity;
			break;


			      }
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t\t--------Pesanan Anda---------\n\n";
			 cout<<"\t"<<quantity<<" "<<nasi1;
			 cout<<"\n\tHarga total : "<<choice<<"\n\tPesanan Anda akan siap dalam +-20 menit.";
			 cout<<"\n\n\tTerima kasih atas pesanannya.\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Pesanan Anda---------\n\n";
			 cout<<"\t"<<quantity<<"  "<<nasi2;
			 cout<<"\nHarga total : "<<choice<<"\nPesanan Anda akan siap dalam +-20 menit.";
			 cout<<"\nTerima kasih atas pesanannya.\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Pesanan Anda---------\n\n";
			 cout<<"\t"<<quantity<<" "<<nasi3;
			 cout<<"\n\tHarga total : "<<choice<<"\n\tPesanan Anda akan siap dalam +-20 menit.";
			 cout<<"\n\tTerima kasih atas pesanannya.\n";
			 break;
			 case 4:
			 cout<<"\t\t--------Pesanan Anda---------\n\n";
			 cout<<"\t"<<quantity<<" "<<nasi4;
			 cout<<"\n\tHarga total : "<<choice<<"\n\tPesanan Anda akan siap dalam +-20 menit.";
			 cout<<"\n\tTerima kasih atas pesanannya.\n";
			 break;

			}
			cout<<"\n\tApakah Anda ingin memesan lagi? (Y / T):";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}



		}

	 }


	 else if(choice==2)
	 {
		cout<<"\n\t1) "<<mie1<<" Rp15k"<<"\n";
		cout<<"\t2) "<<mie2<<" Rp16k"<<"\n";
		cout<<"\t3) "<<mie3<<" Rp21k"<<"\n";
		cout<<"\n\tMohon masukkan pilihan varian?:: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\n\tBanyak barang: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 15000*quantity;
			break;

			case 2: choice = 16000*quantity;
			break;

			case 3: choice = 21000*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t\t--------Pesanan Anda---------\n";
			 cout<<"\t"<<quantity<<" "<<mie1;
			 cout<<"\n\tHarga total : "<<choice<<"\n\tPesanan Anda akan siap dalam +-20 menit.";
			 cout<<"\n\n\tTerima kasih atas pesanannya.\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Pesanan Anda---------\n\n";
			 cout<<"\t"<<quantity<<"  "<<mie2;
			 cout<<"\n\tHarga total : "<<choice<<"\n\tPesanan Anda akan siap dalam +-20 menit.";
			 cout<<"\n\tTerima kasih atas pesanannya.\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Pesanan Anda---------\n\n";
			 cout<<"\t"<<quantity<<" "<<mie3;
			 cout<<"\n\tHarga total : "<<choice<<"\n\tPesanan Anda akan siap dalam +-20 menit.";
			 cout<<"\n\tTerima kasih atas pesanannya.\n";
			 break;


			}
			cout<<"\n\tApakah Anda ingin memesan lagi? (Y / T):";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}

 }
}
	else if(choice==3)
	 {
		cout<<"\n\t1  "<<cap1<<" Rp14k"<<"\n";
		cout<<"\t2  "<<cap2<<" Rp18k"<<"\n";
		cout<<"\t3  "<<cap3<<" Rp22k"<<"\n";
		cout<<"\n\tMohon masukkan pilihan varian?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\n\tBanyak barang: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 14000*quantity;
			break;

			case 2: choice = 18000*quantity;
			break;

			case 3: choice = 22000*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t\t--------Pesanan Anda---------\n\n";
			 cout<<"\t"<<quantity<<" "<<cap1;
			 cout<<"\n\tHarga total : "<<choice<<"\n\tPesanan Anda akan siap dalam +-20 menit.";
			 cout<<"\n\n\tTerima kasih atas pesanannya.\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Pesanan Anda---------\n\n";
			 cout<<"\t"<<quantity<<"  "<<cap2;
			 cout<<"\n\tHarga total : "<<choice<<"\n\tPesanan Anda akan siap dalam +-20 menit.";
			 cout<<"\n\tTerima kasih atas pesanannya.\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Pesanan Anda---------\n\n";
			 cout<<"\t"<<quantity<<" "<<cap3;
			 cout<<"\n\tHarga total : "<<choice<<"\n\tPesanan Anda akan siap dalam +-20 menit.";
			 cout<<"\n\tTerima kasih atas pesanannya.\n";
			 break;


			}
			cout<<"\n\tApakah Anda ingin memesan lagi? (Y / T):";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			}
			}


	 else if(choice==4)
	 {
		cout<<"\n\t1) "<<ayam1<<" Rp13k"<<"\n";
		cout<<"\t2) "<<ayam2<<" Rp17k"<<"\n";
		cout<<"\n\tMohon masukkan pilihan varian?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=2)
		{
			cout<<"\n\tBanyak barang: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 13000*quantity;
			break;

			case 2: choice = 17000*quantity;
			break;


			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t\t--------Pesanan Anda---------\n\n";
			 cout<<"\t"<<quantity<<" "<<ayam1;
			 cout<<"\n\tHarga total : "<<choice<<"\n\tPesanan Anda akan siap dalam +-20 menit.";
			 cout<<"\n\n\tTerima kasih atas pesanannya.\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Pesanan Anda---------\n\n";
			 cout<<"\t"<<quantity<<"  "<<ayam2;
			 cout<<"\n\tHarga total : "<<choice<<"\n\tPesanan Anda akan siap dalam +-20 menit.";
			 cout<<"\n\tTerima kasih atas pesanannya.\n";
			 break;

}
			cout<<"\n\tApakah Anda ingin memesan lagi? (Y / T):";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			}
			}
			
			else
			{
				system("CLS");
				cout<<"\tMohon masukkan pilihan yang valid!\n";
				cout<<"\tApakah Anda ingin mengulang program lagi? (Y / T): " ;
				cin>>gotostart;

				if(gotostart=='Y' || gotostart=='y')
				{
				  goto beginning;
			  //return 0;
			}
			}
			
	getch();

 }



			



