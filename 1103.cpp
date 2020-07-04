#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int dia = 1440;

int main(){
    
    int hi, mi, hf, mf;
    int hdif, mdif;
    int fim;

    while (cin >> hi >> mi >> hf >> mf) {

        fim = hi + mi + hf + mf;

        if (fim == 0)
            return 0;

        hdif = (hf - hi) * 60;
        mdif = (mf - mi);
        
  
        if (hdif < 0) {

            hdif = dia + hdif;

        }

        if (hdif == 0) {

            if (mdif < 0)
                hdif = dia;

        }

        /*
   
        if (mdif < 0) {

            hdif += mi;
            hdif -= mf;

        } else {

            hdif += mf;
            hdif -= mi;
        }
        
        
        
        */

        hdif += mf;
        hdif -= mi;

 

        cout << hdif << endl;



    }

    return 0;
}
