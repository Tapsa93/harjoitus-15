/*TäSSä TEHTÄVÄSSÄ ON KÄYTETTÄVÄ C - kielen primitiivisiä merkkitaulukoita!

Tee ohjelma, joka kysyy käyttäjältä 17 merkkiä
pitkän merkkijonon(ei välilyäntejä).
a) Ohjelma tulostaa merkkijonon käänteisessä järjestyksessä näytälle
(tulostus tyyppiä "cout << mjono1[4];" jne)
b) Ohjelma kääntää annetun merkkijonon toiseen
merkkijonoon ja tulostaa sen näytälle
(tulostus tyyppiä "cout << mjono2;")
c) merkkijono voi olla kuinka pitkä
tahansa(max 100 kirjainta).
Syätetyn merkkijonon pituutta ei saa
laskea millään kirjastofunktiolla
(esim.lenght tms.) Ohjelma
tutkii onko annettu merkkijono
palindromi ja ilmoittaa sen käyttäjälle.
Välilyännit jonossa ovat sallittuja.

Käyttäjä syättää jonon : ABC_Kissa_kavelee
ohjelma tulostaa : eelevak_assiK_CBA*/
#include <iostream>
using namespace std;
int main()
{
	char jono1[18];
	char jono2[100];
	char jono3[18];
	int j;
	int i;
	int pituus;
	cout << "Anna max 100 merkkia pitka jono:";
	cin.get(jono1,100);

	// a) 
	/*for (i = 16;i > -1;i--)
	cout << jono1[i];*/
	
	// b)
	/*jono3 [17] = '\0';
	for (i= 0, j = 16; i < 16, j >= 0; i++, j--)
	{
		jono3[j] = jono1[i];
	}
	cout << jono2;*/
	
	// c)
	for (i = 0; jono1[i] != 0; i++);
	cout << "jonon pituus: " << i << endl;
	pituus = i;
	for (i = 0, j = pituus -1; j >= 0; i++, j--)
		jono2[i] = jono1[j];
	jono2[i] = '\0';
	if (strcmp(jono1, jono2) == 0)
		cout<< jono1 << " On palindromi";
	else
		cout << jono1 << " Ei ole Palindromi";
	
	


	
}
