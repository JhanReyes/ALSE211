# include <iostream>
using namespace std;
int mayor_val(int a , int b){

int c = a < b ? c = b : c = a;

return c;

}

int mayor_ref(int &a , int &b ){


int c = a < b ? c = b : c = a;
return c;

}


int main(int argc , char** argv){
	int a=0;
	int b=0;
	float c = 0.049;
	float d =3.12;
	int m , n;
	cout <<"Hello World ALSE"<<" "<< a << " "<< b << " "<< c << " "<< d <<endl;
	cin>>m>>n;

int h = mayor_val(m,n);
	cout<<"m=" <<m<< "y" <<"n="<<n<<endl;

int i = mayor_ref(m,n);

	cout<<"m="<<" "<<m<<"y"<<" "<<"n="<<n<<endl; 
	cout << "Cantidad de parametros: " << argc << endl;
	for(a=0; a<argc-1;a=a+1){
	cout << "Argumento: "<<a<<" "<<"es"<<" " << argv[a] << endl;
	}
	
	
	return 0;
}
