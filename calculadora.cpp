#include <iostream>
using namespace std;


int incremento(int x){
	return ++x;
}

int decremento(int x){
    return --x;
}

int main(int argc, char** argv) {
    cout << decremento(5);
}

