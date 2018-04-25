#include <iostream>
using namespace std;

int incremento(int x){
    return ++x;
}

int decremento(int x){
    return --x;
}

int sub(int x, int y){
	if(y > 0){
		while(y > 0){
			x = decremento(x);
			y--;
		}
		return x;
	}else{
		while(y < 0){
			x = incremento(x);
			y++;
		}
		return x;
	}
}

int div(int divisor, int dividendo){

}

int main(int argc, char** argv) {
    cout << decremento(5) << endl;
    cout << incremento(5) << endl;
    cout << sub(17,-6) << endl;
}
