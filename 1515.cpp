#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    int n, a, t, min;
   
    string planeta, aux;
    vector <string> saida;
    
    min = 1000000;

    while(cin >> n){

        if(n == 0)
            break;

        while(n > 0){

            cin >> planeta >> a >> t;

            if((a-t) < min){
                
                aux = planeta;
                min = a - t;

            }

            n--;
        }

        min = 1000000;
        //cout << aux << endl;
        saida.push_back(aux);
    }

    
    for(int i = 0; i < saida.size(); i++)
        cout << saida[i] << endl;
    

    return 0;
}