#include <iostream>

using namespace std;

int main(){

    int x, y, z;
    int maior, win, aux;

    win = 0;

    cin >> z;

    while(cin >> x >> y){

        z --;
        maior = (9 * (x * x)) + (y * y);
        aux = 2 * (x * x) + (25 * (y * y));

        if(aux > maior){
            maior = aux;
            win = 1;
        }

        aux = (-100 * x) + (y * y * y);

        if(aux > maior){
            win = 2;
        }

        switch(win){
            case 0:
                cout <<"Rafael ganhou"<<endl;
                break;
            case 1:
                cout <<"Beto ganhou"<<endl;
                break;
            case 2:
                cout <<"Carlos ganhou"<<endl;
                break;
            default:
                break;
        }

        if (z == 0)
            return 0;
        win = maior = aux = 0;
            


    }

    return 0;
}