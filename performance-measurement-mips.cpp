#include <iostream>
#include <math.h>
#define m 1000000
using namespace std;
main (){
	float ins, ins2, inex, inex2, eti, eti2, res, res2, resmips, resmips2, clkrt, clkrt2, cpi, cpi2;
	char yn;
	int opt;
	cout<<"\n------------Main menu------------\n \nPlease select one option:\n\n";
	cout<<"1-Calculate the performance measurement"<<"\n";
	cout<<"2-Compare the MIPS for two hardwares"<<"\n";
	cout<<"3-Exit"<<"\n \n";
	do{
		cout<<"Select one option: ";
		cin>>opt;
		if(opt !=1 && opt!=2 && opt!=3){
			cout<<"Invalid data!\n";
		}
	}while(opt !=1 && opt !=2 && opt!=3);
	switch(opt){
		case 1:
			do{
				cout<<"\nHow many instructions have been executed? ";
				cin>>ins;
				inex=ins*m;
				cout<<"\nWhat is the execution time (in seconds) of the process? ";
				cin>>eti;
				res=(inex/eti);
				resmips=res/m;
				cout<<"\nThe MIPS for this computer is: "<<resmips<<" MIPS\n";
				cout<<"\nDo you wanna calculate again? (Y/N) ";
				cin>>yn;
			}while (yn == 'Y' || yn == 'y');
			if(yn == 'n' || yn == 'N'){
				return main();				
			}
		break;
		case 2:
			do{
				cout<<"\nHow many instructions have been executed in the first computer? ";
				cin>>ins;
				inex=ins*m;
				cout<<"\nWhat is the execution time (in seconds) for the first computer? ";
				cin>>eti;
				cout<<"\nWhich is the clock rate for the first computer (Mhz)? ";
				cin>>clkrt;
				cout<<"\n\nHow many instructions have been executed in the second computer? ";
				cin>>ins2;
				inex2=ins2*m;
				cout<<"\nWhat is the execution time (in seconds) for the second computer? ";
				cin>>eti2;
				cout<<"\nWhich is the clock rate for the second computer (Mhz)? ";
				cin>>clkrt2;
				res=(inex/eti);
				res2=(inex2/eti2);
				resmips=res/m;
				resmips2=res2/m;
				cout<<"\n\nThe MIPS for the first computer is: "<<resmips<<" MIPS";
				cout<<"\nThe MIPS for the second computer is: "<<resmips2<<" MIPS\n";
				cpi=clkrt/resmips;
				cpi2=clkrt2/resmips2;
				cout<<"\n\nThe CPI for the first computer is: "<<cpi<<" CPI";
				cout<<"\nThe CPI for the second computer is: "<<cpi2<<" CPI\n";
				if(cpi>cpi2){
					cout<<"\nThe first computer has the best performance\n";
				}else if(cpi2>cpi){
					cout<<"\nThe second computer has the best performance\n";
				}else{
					(cpi=cpi2);
					cout<<"\nThe two computers have the same performance\n";
				}
				cout<<"\nDo you wanna calculate again? (Y/N) ";
				cin>>yn;
			}while (yn == 'Y' || yn == 'y');
			if(yn == 'n' || yn == 'N'){
				return main();
			}
		break;
		case 3:
			do{
				cout<<"\nDo you really want to quit? (Y/N) ";
				cin>>yn;
				if(yn != 'Y' && yn != 'y' && yn != 'N' && yn != 'n'){
					cout<<"Invalid data!\n";
				}
			}while(yn != 'Y' && yn != 'y' && yn != 'N' && yn != 'n');
			switch(yn){
				case 'n': case 'N':
					return main();
				break;
				case 'y': case 'Y':
					cout<<"\nThanks for using the program\n";
					return 0;
		}
	}				
}
