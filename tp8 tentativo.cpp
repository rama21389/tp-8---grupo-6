 /*TP numero 8: Es Fecha o no es Fecha
  Grupo 6
  K1051 
 
 */
 
 
 #include <iostream>

using namespace std;
bool EsFecha (int a, int b, int c);

int main () {
	
	
	
	int a,b,c;
	bool x; 
	
	
	
	cout<< " Ingrese un dia (en forma de numero)"<<endl;
	cin>> a;
	cout<< " Ingrese un mes (en forma de numero)"<<endl;
	cin>> b;
	cout<< " Ingrese un año" << endl;
	cin>> c;
	
	 if (a<=0 or a>31 or b<=0 or b>12 or c<=0)
	 
	 
	    cout<< " No es Fecha"<<endl;
	 
	else {
	
	 x= EsFecha (a,b,c);   
	if (x)
		
		cout<< "Es Fecha"<<endl;
	else
	    cout<< "No es Fecha"<<endl;	
}
}
	
	
	
bool EsFecha ( int a , int b, int c){
	
	
switch (b){


case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
	
	return true;
	break;
	
case 4:
case 6:
case 9:
case 11:

if (a = 31)
	
	return false;
	
else

return true;


break;


case 2: 

if (a>29)

return false;
if (a<29)

return true;

else{

if (a=29)
if ((c % 4)== 0)

return true;

else

return false;
break;	


}
}
}





	

