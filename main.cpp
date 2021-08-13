// Example program
#include <iostream>
#include <string>


/* Si es grupo de 3 omitir este
    Este metodo deber retornar el elemento numero N de serie de fibonnaci
    1 1 2 3 5 8 13  21
    
    1 2 3 4 5 6 7   8 
*/
int fibonacci(int N) {
    return 0;
}

/* Imprimier en Navo numero primo
    1, 2, 3, 5, 7, 13, 17, 19, 23
    
    1  2  3  4  5  6   7   8   9

*/
int primo(int N) {
    return 0;
}

/* Determina si un numero es capicua o no.
    retorna 0 si no es capicua
    retoran 1 si es capicua
*/
int esCap(int a){
    
    int nFirst = a;
    int res,n2=0;
    while(a>0){
         res=a%10;
      a=a/10;
      n2=n2*10+res;
      
    }
    if(n2 == nFirst){
        return 1;
    }else{
        return 0;
    }
}


/* Retornar el residuo de una division sin tulizar el operado residuo (modulo %) ni el operador de division (/)
*/
int residuo(int a, int b) {
    while(a>=b){
		a-=b;
	}
	return a;
}


int main()
{
  std::string name;
  std::cout << "El fibonacci de 8 " << fibonacci(8) << std::endl;   // 21
  std::cout << "El primo numer 8 " << fibonacci(8) << std::endl;    // 19

  std::cout << "El numero 11211 es capicua? " << capicua(11211) << std::endl ;    // 1 
   

   
  std::cout << "El residuo de 13 entre 4 es " << residuo(13, 4) << std::endl;    // 1 

}




