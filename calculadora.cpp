#include <iostream>
using namespace std;

int incremento(int x){
	return ++x;
}

int decremento(int x){
    return --x;
}

int add(int x, int y){
	if(y > 0){
		while(y > 0){
			x = incremento(x);
			y--;
		}
		return x;
	}else{
		while(y < 0){
			x = decremento(x);
			y++;
		}
		return x;
	}
}
int add(int x, int y, int w){
	if(y > 0){
		while(y > 0){
			x = incremento(x);
			y--;
		}
		while(w > 0){
			x = incremento(x);
			w--;
		}
		return x;
	}else{
		while(y < 0){
			x = decremento(x);
			y++;
		}
		while(w < 0){
			x = decremento(x);
			w--;
		}
		return x;
	}
}

int add(int x, int y, int w, int z){
	if(y > 0){
		while(y > 0){
			x = incremento(x);
			y--;
		}
		while(w > 0){
			x = incremento(x);
			w--;
		}
		while(z > 0){
			x = incremento(x);
			z--;
		}
		return x;
	}else{
		while(y < 0){
			x = decremento(x);
			y++;
		}
		while(w < 0){
			x = incremento(x);
			w++;
		}
		while(z < 0){
			x = incremento(x);
			z++;
		}
		return x;
	}
}

int sub(int x, int y){
	if(y > 0){
		while(y > 0){
			x = decremento(x);
			y--;
		}
	}else{
		while(y < 0){
			x = incremento(x);
			y++;
		}
	}
	if(x < 0) return 0;
	else return x;
}

int prod(int x, int y){
	return x*y;
}

int div(int divisor, int dividendo){
	if(dividendo > 0)
		return (divisor/dividendo);
	else return INT_MAX;
}

int mod(int divisor, int dividendo){
	if(dividendo > 0)
		return(divisor % dividendo);
	else return INT_MAX;
}

int main(int argc, char** argv) {
    cout << decremento(5) << endl;
    cout << incremento(5) << endl;
    cout << sub(17,-6) << endl;
    cout << add(17,2) << endl;
    cout << add(17,2,2) << endl;
}
