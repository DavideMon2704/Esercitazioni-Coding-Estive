#include <iostream>
using namespace std;
int const NMAX=24;

struct partecipante
{
	char nome[20];
	char sesso;
	int distretto;
};
void registra(partecipante[],int);
void stampa(partecipante[],int);
	

int main()
{
	partecipante scheda[NMAX];
	cout<<"============BENVENUTI agli Hunger Games!!!============\n\n\n";
    registra(scheda, NMAX);
    stampa(scheda, NMAX);
	return 0;
}

void registra(partecipante p[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cin>>p[i].nome;
		cin>>p[i].sesso;
		cin>>p[i].distretto;
	};
};

void stampa(partecipante p[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"--------------------\n"<<"Dal distretto "<<p[i].distretto<<endl<<p[i].nome<<"!\n"<<p[i+1].nome<<"!\n"<<"--------------------\n";
		i++;
	};
};
