#include <iostream>
using namespace std;

void stampa(int );

int main()
{
	
	int N;
	char c;
	do{
	cout<<"---------------Fizz Buzz---------------"<<endl<<endl;
	cout<<"Fino a quanto vuoi contare?: ";
	cin>>N;
	stampa(N);
	cout<<endl<<endl<<"Vuoi contare ancora?(S=si): ";
	cin>>c;
	}while(c=='S' || c=='s');
	return 0;
}

void stampa(int N)
{
	int i;
	for(i=1;i<N+1;i++)
	{
		if(i%3==0 && i%5==0)
		{
			cout<<"FIZZ BUZZ!-";
		}else{
			if(i%3==0)
			{
				cout<<"Fizz-";
			}else{
				if(i%5==0)
				{
					cout<<"Buzz-";
				}else{
					cout<<i<<"-";
				}
			}
		}
	
	}
	
		

}
