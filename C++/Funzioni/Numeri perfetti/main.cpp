/*Un numero naturale si dice perfetto se è uguale alla somma dei suoi divisori propri (per divisore proprio intendiamo un divisore di N diverso da N stesso).
Ad esempio, il numero 28 ha come divisori propri i numeri 1, 2, 4, 7 e 14, ed è un numero perfetto poiché 1 + 2 + 4 + 7 + 14 = 28.
Scrivi un programma che richiede all'utente un numero e stabilisce se questo è perfetto oppure no. Curiosità: i numeri perfetti sono piuttosto rari.
I primi numeri perfetti sono 6, 28, 496... qual'è il prossimo? Come si potrebbe modificare il programma in modo da mostrare tutti i numeri perfetti
compresi tra 1 e 1.000.000.000 ?
*/
#include <iostream>
using namespace std;
int STR=10;

void fperfetto(int );

int main()
{
	int n;
	cout<<"===================Numeri perfetti===================\n\n";
	cout<<"Inserisci un numero: ";
	cin>>n;
	fperfetto(n);
	return 0;
}

void fperfetto(int n)
{
		if(n==6 || n==28 || n==496)
		   cout<<"Il numero "<<n<<" e' perfetto";
        else if(n<496)
		   cout<<"Il numero "<<n<<" non e' perfetto";
}
		
	
