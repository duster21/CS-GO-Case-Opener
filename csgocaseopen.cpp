#include <iostream>
#include <ctime>
using namespace std;
int main()
{
  	/*Mil-Spec (Blue) – 79,92327%
    Restricted (Purple) – 15,98465%
    Classified (Pink) – 3,19693%
    Covert (Red) – 0,63939%
    Special Items/Knives (Gold) – 0,25575%*/
    cout << "How many case do you want to open?" << endl;
    srand (time(NULL));
	int casenum,mavsay=0,morsay=0,pembesay=0,redsay=0,sarisay=0;
    cin >> casenum;
    system("CLS");
	for(int i=0;i<casenum;i++)
    {
        int rng = rand()%10001;
        if(rng>=0 && 25>=rng)
        {
		cout << "Congratulations!!! !!!Special Item (Gold)!!!" << endl;
        sarisay++;
		} 
		else if(rng>=26 && 63>=rng)
	    {
	    cout << "Congratulations!!! !!!Covert (Red)!!!" << endl;
	    redsay++;
		}
	    else if(rng>=64 && 319>=rng)
	    {
	    cout << "Congratulations!!! !!!Classified (Pink)!!!" << endl;
		pembesay++;
		}
	    else if(rng>=320 && 1598>=rng)
	    {
	    cout << "Good!!! !!!Restricted (Purple)!!!" << endl;
		morsay++;
		}
	    else
	    {
	    cout << "!Mil-Spec (Blue)!" << endl;
	    mavsay++;
		}
	}
    cout << "\n\nRESULTS:\nMil-Spec (Blue):" << mavsay << "\nRestricted (Purple):" << morsay << "\nClassified (Pink):" << pembesay << "\nCovert (Red):" << redsay << "\nSpecial Item (Gold):" << sarisay << "\n\n";
    system("pause");
}
