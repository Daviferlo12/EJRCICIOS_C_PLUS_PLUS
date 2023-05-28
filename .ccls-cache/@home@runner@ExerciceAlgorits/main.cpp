#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void options(){
    cout << "\n ------------------------------- \n";
    cout << "\n -------- EJERCICIOS C++ ------- \n";
    cout << "\n ------------------------------- \n";
    cout << "[1] NUMERO MAYOR,MENOR o IGUAL A 0 \n";
    cout << "[2] NUMERO PAR O IMPAR \n";
    cout << "[3] NUMEROS DEL 100 AL -2 \n";
    cout << "[4] NUMEROS PARES DEL 1 AL 100 \n";
    cout << "[5] NOTAS DEL ESTUDIANTE \n";
    cout << "[6] MULTIPLOS DE 2 Y 3 (DEL 1 AL 100) \n";
    cout << "[7] NUMERO MAYOR \n";
    cout << "[8] NUMERO MENOR \n";
    cout << "[9] SUMA DE NUMEROS DEL 20 al 50 \n";
    cout << "[10] SUMA DE 15 NUMEROS CUALQUIERA \n";
    cout << "[11] MENOR O MAYOR DE EDAD \n";
    cout << "[12] 3 NUMEROS DE MEYOR A MENOR \n";
    cout << "[13] 3 NUMERO DE MENOR A MAYOR \n";
    cout << "[14] AREA Y VOLUMEN DE UN CILINDRO \n";
    cout << "[15] KILOMETROS POR HORA A METROS POR SEGUNDO \n";
    cout << "[16] NUMEROS IMPARES DEL 1 AL 100 \n";
    cout << "[17] SUMA DE NUMEROS IMPARES DEL 1 AL 100 \n";
    cout << "[18] SUMA DE NUMEROS PARES DEL 1 AL 100 \n";
    cout << "[19] MENOR Y MAYOR DE 5 NUMEROS INGRESADOS POR TECLADO \n";
    cout << "[20] NUMERO FACTORIAL \n";
    cout << "[21] DE NUMEROS A NUMEROS ROMANOS \n";
    cout << "[22] ULTIMA CIFRA DE UN NUMERO INGRESADO \n";
    cout << "[23] DE CENTIMETROS A PULGADAS \n";
    cout << "[24] DE HORAS, MINUTOS Y SEGUNDOS A MINUTOS \n";
    cout << "[25] NUMERO Y MES DEL AÑO \n";
    cout << "[26] SIGNO ZODIACAL \n";
    cout << "[27] DESDE EL 1 HASTA UN NUMERO INGRESADO \n";
    cout << "[28] LA SUMA DESDE EL 1 HASTA UN NUMERO INGRESADO \n";
    cout << "[29] RESIDUO DEL 1 AL 10 DE UN NUMERO INGRESADO \n";
    cout << "[30] AREA Y PERIMETRO DE UN CIRCULO \n";
    cout << "[31] VOLUMEN DE UNA ESFERA \n";
    cout << "[32] TEOREMA DE PITAGORAS \n";
    cout << "[33] DE FAHRENHEIT A CERSIUS \n";
    cout << "[34] DE CELSIUS A FAHRENHEIT \n";
    cout << "[35] -- \n";
    cout << "[36] -- \n";
    cout << "[37] -- \n";
    cout << "[38] -- \n";
    cout << "[39] -- \n";
    cout << "[40] -- \n";
    cout << "[41] -- \n";
    cout << "[42] -- \n";
    cout << "[43] -- \n";
    cout << "[44] -- \n";
    cout << "[45] -- \n";
    cout << "[46] -- \n";
    cout << "[47] -- \n";
    cout << "[48] -- \n";
    cout << "[49] -- \n";
    cout << "[50] SUELDO MENSUAL DE UN EMPLEADO \n";
    cout << "\n -------------------------------- \n";
    cout << "\n[51] SALIR \n";
    cout << "\n -------------------------------- \n";
}

int main() {

  cout << "\n ---------------------------------- \n";
  cout << "[*] TALLER EN CLASE # 3 = 50% \n";
  cout << "[*] MATERIA: Algoritmos y Fundamentos de Programación\n";
  cout << "[*] JORNADA: NOCTURNA\n";
  cout << "[*] NOMBRE: David Fernando Lopez Barragan\n";
  cout << "\n ---------------------------------- \n";

  bool flag = true;
  int option;

  while(flag == true){

    options();
    
    cout << "Que ejercicio desea ejecutar ?  : ";
    cin >> option;

    switch(option){
      case 1:{
        system("clear");

        int num;
        cout << "-------- Numero menor, mayor o igual a 0 -------\n";
        cout << "Ingresa el numero: ";
        cin >> num;

        if(num < 0){
          cout << "El numero es menos a 0 \n";
        }else if(num > 0){
          cout << "El numero es mayor a 0 \n";
        }else{
          cout << "El numero es igual a 0 \n";
        }
        
      }break;
      case 2:{
        system("clear");
        
        int num;
        cout << "-------- Numero par o impar -------\n";
        cout << "Ingresa el numero: ";
        cin >> num;

        if(num % 2 != 0){
          cout << "El numero impar \n";
        }else{
          cout << "El numero es par \n";
        }
        
      }break;
      case 3:{
        system("clear");

        cout << "------- NUMEROS DEL 100 AL -2 ------- \n";
        for(int i = 100; i >= -2; i--){
          cout << "[*] ==>" << i << "\n";
        }
      }break;
      case 4:{
        system("clear");
        cout << "------- NUMEROS PARES DEL 1 AL 100 ------- \n";
        
        for(int i = 0; i <= 100; i++){
          
          if(i % 2 == 0){
            cout << "[*] ==> " << i << "\n";
          }
        }
        
      }break;
      case 5:{
        system("clear");
        bool opc = true;
        string nombre;
      	string facultad;
      	string semestre;
      	string materia;
      	
      	float nota1, nota2, nota3;
      	double notaF, prom;	
      	
      	
      	cout << "Ingrese su nombre: \n";
      	//cin >> nombre;
      	getline(cin, nombre);
        
      	cout << "Ingrese su facultad: ";
      	//cin >> facultad;
      	getline(cin, facultad);
      	
      	cout << "Ingrese el semestre: ";
      	getline(cin, semestre);
      	
      	do{
      		cout <<"\n ++++++++++++++++++++++++++ \n";
      		cout <<"[1] DEFINITIVAS "<<endl;
      		cout <<"[2] INGRESAR DATOS DEL ESTUDIANTE NUEVAMENTE \n";
      		cout <<"[3] SALIR "<<endl;
      		
      		cout <<"Escoga una opcion: ";
      		cin >> option;
      		
      		switch(option){
      			
      			case 1:
      							
      				system("clear");
      				cout << "Ingrese la materia: ";
      				cin >>materia; 
      			
      				cout << "Ingrese la primera nota de " << materia<<": ";
      				cin >> nota1;
      				
      				
      				cout << "Ingrese la segunda nota de " << materia<<": ";
      				cin >> nota2;
      				
      				cout << "Ingrese la tercera nota de " << materia<<": ";
      				cin >> nota3;
      				
      				
      				notaF = ((nota1 * 0.3) + (nota2 * 0.3) + (nota3 * 0.4));
      				
      				if(notaF < 3.0){
      					cout<< "EL ESTUDIANTE REPROBO LA MATERIA CON "<<notaF;
      				}else if(notaF >= 3.0 && notaF <= 5.0){
      					cout<< "EL ESTUDIANTE APROBO LA MATERIA CON "<<notaF;
      		    	}
      				
      				break;
      				
      			case 2:
      				system("clear");
      				
      				cout << "Ingrese su nombre: ";
      				// cin >> nombre;
              getline(cin,nombre);
              
      				cout << "Ingrese su facultad: ";
      				// cin >> facultad;
              getline(cin,facultad);
              
      				
      				cout << "Ingrese el semestre: ";
      				// cin >> semestre;
              getline(cin,semestre);
              
      				
      				break;
      			
      			case 3:
      				cout << "[*] PROGRAMA TERMINADO.... \n \n";
      				opc = false;
      				break;
      			
      			default:
      				
      				cout << "[*] OPCION NO VALIDA.... \n \n";
      				
      				break;	
      				
      		}
      	}while(opc == true);
        
      }break;
      case 6:{
        system("clear");
        cout << "------- MULTIPLOS DEL 2 Y 3 (DEL 1 AL 100) ------- \n";
        
        for(int i = 1; i <= 100; i++){
          
          if(i % 2 == 0 && i % 3 == 0){
            cout << "[*] MULTIPLO DE 2 y 3 ==> " << i << "\n\n";
          }else if(i % 2 == 0){
            cout << "[*] MULTIPLO DE 2 ==> " << i << "\n\n";
          }else if(i % 3 == 0){
            cout << "[*] MULTIPLO DE 3 ==> " << i << "\n\n";
          }
        }
      }break;
      case 7:{
        system("clear");
        int num, num2;
        cout << "------ NUMERO MAYOR ------ \n";
        cout << "ingrese el primer numero: ";
        cin >> num;
        cout << "ingrese el segundo numero: ";
        cin >> num2;

        if(num > num2){
          cout << "El numero " << num << "es mayor \n";
        }else if(num < num2){
          cout << "El numero " << num2 << "es mayor \n";
        }
        
        
      }break;
      case 8:{
        system("clear");

        int num, num2;
        cout << "------ NUMERO MENOR ------ \n";
        cout << "ingrese el primer numero: ";
        cin >> num;
        cout << "ingrese el segundo numero: ";
        cin >> num2;

        if(num < num2){
          cout << "El numero " << num << "es menor \n";
        }else if(num > num2){
          cout << "El numero " << num2 << "es menor \n";
        }
        
      }break;
      case 9:{
        system("clear");

        cout << "------- SUMA DE NUMEROS DEL 20 AL 50 ------- \n";

        int sum = 0;
        
        for(int i = 20; i <= 50; i++){

          sum += i;
          
        }

        cout << "La suma de los numero del 20 al 50 es: " << sum << "\n";
        
      }break;
      case 10:{
        system("clear");
        cout << "---------- SUMA DE 15 NUMEROS CUALQUIERA ----------- \n";
        int nums[15];
        int sum = 0, ing;
        for(int i = 0; i < 15; i++){

          cout << "Ingrese el numero "<< i + 1 << " : ";
          cin >> ing;
          
          nums[i] = ing;
          
          sum += nums[i];
        }
        
        //-----------------------------------------//
        
        cout << "Los numeros ingresados son : \n";
        
        for(int j = 0; j < 15; j++){

          cout << "[*] ==> " << nums[j] << "\n";
          
        }
        cout << "La suma de los 15 numero es de: " << sum << "\n";
        
      }break;
      case 11:{
        system("clear");

        int anio, anio_act = 2023;

        cout << "Ingrese su año de nacimiento : ";
        cin >> anio;

        if(anio > 1950 && anio < 2023 ){
          if(anio_act - anio < 18){
            cout << "[*] TIENES "<< anio_act - anio << " AÑOS POR LO TANTO ERES MENOR DE EDAD";
          }else{
            cout << "[*] TIENES "<< anio_act - anio << " AÑOS POR LO TANTO ERES MAYOR DE EDAD";
          }
        }else{
          cout << "[ERROR] : DATOS NO VALIDOS...";
        }
        
      }break;
      case 12:{
        system("clear");
        int num_to_order[3] , num;
        
        // INGRESO DE VALORES AL ARRAY
        for(int i = 0; i < 3; i++){
          cout << "Ingrese el numero " << i + 1 << ": ";
          cin >> num;
          num_to_order[i] = num;
          
        }

        if(num_to_order[0] > num_to_order[1] && num_to_order[0] > num_to_order[2]){
          if(num_to_order[1] > num_to_order[2]){
            cout << "Los mumeros del mayor al menor serian "<<  num_to_order[0] << num_to_order[1] << num_to_order[2] << "\n";
          }else{
            
            cout << "Los mumeros del mayor al menor serian "<<  num_to_order[0] << num_to_order[2] << num_to_order[1] << "\n";
          }
        }else if(num_to_order[1] > num_to_order[0] && num_to_order[1] > num_to_order[2]){

          if(num_to_order[0] > num_to_order[2]){
            cout << "Los mumeros del mayor al menor serian "<<  num_to_order[1] << " - " << num_to_order[0] << " - "<< num_to_order[2] << "\n";
          }else{
            
            cout << "Los mumeros del mayor al menor serian "<<  num_to_order[1] << " - "<< num_to_order[2] << " - "<< num_to_order[0] << "\n";
          }

        }else if(num_to_order[2] > num_to_order[0] && num_to_order[2] > num_to_order[1]){

          if(num_to_order[0] > num_to_order[1]){
            cout << "Los mumeros del mayor al menor serian "<<  num_to_order[2] << " - "<< num_to_order[0] << " - "<< num_to_order[1] << "\n";
          }else{
            
            cout << "Los mumeros del mayor al menor serian "<<  num_to_order[2] << " - "<< num_to_order[1] << " - "<< num_to_order[0] << "\n";
          }

        }else{
          cout << "[*] ALGUNO DE LOS VALORES SON IGUALES....";
        }

        
        
      }break;
      case 13:{
        system("clear");
        int num_to_order[3] , num;
        
        // INGRESO DE VALORES AL ARRAY
        for(int i = 0; i < 3; i++){
          cout << "Ingrese el numero " << i + 1 << ": ";
          cin >> num;
          num_to_order[i] = num;
          
        }

        if(num_to_order[0] < num_to_order[1] && num_to_order[0] < num_to_order[2]){
          if(num_to_order[1] < num_to_order[2]){
            cout << "Los mumeros del mayor al menor serian "<<  num_to_order[0] << num_to_order[1] << num_to_order[2] << "\n";
          }else{
            
            cout << "Los mumeros del mayor al menor serian "<<  num_to_order[0] << num_to_order[2] << num_to_order[1] << "\n";
          }
        }else if(num_to_order[1] < num_to_order[0] && num_to_order[1] < num_to_order[2]){

          if(num_to_order[0] < num_to_order[2]){
            cout << "Los mumeros del mayor al menor serian "<<  num_to_order[1] << " - " << num_to_order[0] << " - "<< num_to_order[2] << "\n";
          }else{
            
            cout << "Los mumeros del mayor al menor serian "<<  num_to_order[1] << " - "<< num_to_order[2] << " - "<< num_to_order[0] << "\n";
          }

        }else if(num_to_order[2] < num_to_order[0] && num_to_order[2] < num_to_order[1]){

          if(num_to_order[0] < num_to_order[1]){
            cout << "Los mumeros del mayor al menor serian "<<  num_to_order[2] << " - "<< num_to_order[0] << " - "<< num_to_order[1] << "\n";
          }else{
            
            cout << "Los mumeros del mayor al menor serian "<<  num_to_order[2] << " - "<< num_to_order[1] << " - "<< num_to_order[0] << "\n";
          }

        }else{
          cout << "[*] ALGUNO DE LOS VALORES SON IGUALES....";
        }  
      }break;
      case 14:{
        system("clear");
        double pi = 3.14159265359, Ab, Al, At;
        double vol;
        float rad, alt;
        cout << "Ingresa el radio del cilindro: ";
        cin >> rad;
        cout << "Ingresa la altura del cilindro: ";
        cin >> alt;

        Ab = pi * (rad * rad); // Area de la base
        Al = (2*pi*rad*alt); // Area lateral

        At = Al + (Ab * Ab);
        vol = Ab * alt;

        cout << "\n \n Area de la base: "<<Ab << "\n";
        cout << "Area lateral: "<<Al << "\n";
        
        cout << "El area total del cilindro es de: " << At << "\n";
        cout << "El volumen del cilindro es: " << vol << "\n";
        
      }break;
      case 15:{
        system("clear");
        double velocidad, new_velocidad;

        cout << "Ingrese la velocidad expresada como KM/H : ";
        cin >> velocidad;

        new_velocidad = (velocidad * 1000) / 3600;

        cout << "Esto es igual a "<< new_velocidad << " M/S";        
      }break;
      case 16:{
        system("clear");
        
        cout << "------- NUMEROS IMPARES DEL 1 AL 100 ------- \n";
        
        for(int i = 0; i <= 100; i++){
          
          if(i % 2 != 0){
            cout << "[*] ==> " << i << "\n";
          }
        }
      }break;
      case 17:{
        system("clear");

        cout << "------- SUMA DE NUMEROS IMPARES DEL 1 AL 100 ------- \n";
        int sum = 0;
        for(int i = 0; i <= 100; i++){
          
          if(i % 2 != 0){
            sum += i;
          }
        }

        cout << "La suma de los numeros impares es de : " << sum << "\n";
      }break;
      case 18:{
        system("clear");

        cout << "------- SUMA DE NUMEROS PARES DEL 1 AL 100 ------- \n";
        int sum = 0;
        for(int i = 0; i <= 100; i++){
          
          if(i % 2 == 0){
            sum += i;
          }
        }

        cout << "La suma de los numeros pares es de : " << sum << "\n";
      }break;
      case 19:{
        system("clear");
        
        int nums[5] , g_number = 0, l_number = 10000, num;
        
        // INGRESO DE VALORES AL ARRAY
        for(int i = 0; i < 5; i++){
          cout << "Ingrese el numero " << i + 1 << ": ";
          cin >> num;
          nums[i] = num;
        }


        // VALIDACION DE LA DATA DEL ARREGLO
        for(int j = 0; j < 5; j++){
          
          if(nums[j] > g_number){
          
            g_number = nums[j];
          
          }
          
          if(nums[j] < l_number){
            
            l_number = nums[j];
            
          }
          
        }
        cout << "\n ---------------------------- \n";
        cout << "El numero mayor es:" << g_number << "\n";
        cout << "El numero menor es:" << l_number << "\n";
        cout << "\n ---------------------------- \n";
        system("sleep 3s");
        
      }break;
      case 20:{
        system("clear");
        int num, fact;
        
        cout << "Ingrese el numero para hallar su factorial : ";
        cin  >> num;

        for(int i = 1;i <= num; i++){
          fact *= i;
        }

        cout << "El factorial de " << num << " es: " << fact << "\n";
        
      }break;
      case 21:{
        system("clear");

        int num;

        cout << "Digite el numero: ";
        cin >> num;

        switch(num){
          case 1:
            cout << "[*] "<< num << " ==> " <<" I  \n";
            system("sleep 3s");
            break;
          case 2:
            cout << "[*] "<< num << " ==> " <<" II \n";
            system("sleep 3s");
            break;
          case 3:
            cout << "[*] "<< num << " ==> " <<" III \n";
            system("sleep 3s");
            break;
          case 4:
            cout << "[*] "<< num << " ==> " <<" IV \n";
            system("sleep 3s");
            break;
          case 5:
            cout << "[*] "<< num << " ==> " <<" V \n";
            system("sleep 3s");
            break;
          case 6:
            cout << "[*] "<< num << " ==> " <<" VI \n";
            system("sleep 3s");
            break;
          case 7:
            cout << "[*] "<< num << " ==> " <<" VII \n";
            system("sleep 3s");
            break;
          case 8:
            cout << "[*] "<< num << " ==> " <<" VIII \n";
            system("sleep 3s");
            break;
          case 9:
            cout << "[*] "<< num << " ==> " <<" IX \n";
            system("sleep 3s");
            break;
          case 10:
            cout << "[*] "<< num << " ==> " <<" X \n";
            system("sleep 3s");
            break;
        }
        
      }break;
      case 22:{
        
        system("clear");
        int num;

        cout << "Ingrese un numero: ";
        cin >> num;

        if(num < 10){
          cout << "El numero ingresado solo es de una cifra por lo tanto es "<< num << "\n";
        }else{
          num %= 10;

          cout << "La ultima cifra del numero es : " << num << "\n";
        }
        
      }break;
      case 23:{
        system("clear");
        float num, pulgada;

        cout << "Ingrese los centimetros: ";
        cin >> num;
        
        pulgada = num / 2.54;

        cout << "Al realizar la conversion de CM a IN es ==> " << num << " CM son "<< pulgada << " IN \n";

        
      }break;
      case 24:{
        system("clear");


        float min, hor, seg;
        cout << "Ingresa el tiempo expresado en minutos: ";
        cin >> min;

        hor = min / 60;
        seg = min * 60;

        cout << "CONVERSION: \n";
        cout << "HORAS: "<< hor << "\n";
        cout << "MINUTOS: "<< min << "\n";
        cout << "SEGUNDOS: "<< seg << "\n";

        system("sleep 3s");
        
      }break;
      case 25:{
        system("clear");

        int mes;

        cout << "Ingrese un numero del 1 al 12 : ";
        cin >> mes;

        switch(mes){
          case 1:
            system("clear");
            cout << "El numero "<< mes << " hace referencia a enero.. \n";
            system("sleep 2s");
            break;

          case 2:
            system("clear");
            cout << "El numero "<< mes << " hace referencia a febrero.. \n";
            system("sleep 2s");
            break;

          case 3:
            system("clear");
            cout << "El numero "<< mes << " hace referencia a marzo.. \n";
            system("sleep 2s");
            break;

          case 4:
            cout << "El numero "<< mes << " hace referencia a abril.. \n";
            system("sleep 2s");
            break;

          case 5:
            system("clear");
            cout << "El numero "<< mes << " hace referencia a mayo.. \n";
            system("sleep 2s");
            break;

          case 6:
            cout << "El numero "<< mes << " hace referencia a junio.. \n";
            system("sleep 2s");
            break;

          case 7:
            system("clear");
            cout << "El numero "<< mes << " hace referencia a julio.. \n";
            system("sleep 2s");
            break;

          case 8:
            cout << "El numero "<< mes << " hace referencia a agosto.. \n";
            system("sleep 2s");
            break;

          case 9:
            cout << "El numero "<< mes << " hace referencia a septiembre.. \n";
            system("sleep 2s");
            break;

          case 10:
            system("clear");
            cout << "El numero "<< mes << " hace referencia a octubre.. \n";
            system("sleep 2s");
            break;

          case 11:
            system("clear");
            cout << "El numero "<< mes << " hace referencia a noviembre.. \n";
            system("sleep 2s");
            break;

          case 12:
            system("clear");
            cout << "El numero "<< mes << " hace referencia a diciembre.. \n";
            system("sleep 2s");
            break;

          default:
            system("clear");
            cout << "[*] ERROR: NUMERO NO VALIDO... \n";
            system("sleep 2s");
            break;
          
        }

        
      }break;
      case 26:{
        system("clear");
        
        string mes;
        int dia;
      
        cout << "Ingrese su mes de nacimiento: ";
        cin >> mes;
      
        for(int i = 0; i <= mes.length(); i++){
          mes[i] = tolower(mes[i]);
        }
        
        cout << "Ingrese el dia: ";
        cin >> dia;
        
        if((mes == "marzo" && dia >= 21 ) || (mes == "abril" && dia <= 20)){
          
          cout << "SU SIGNO ZODIACAL ES ARIES";
          
        }else if((mes == "abril" && dia >= 21 ) || (mes == "mayo" && dia <= 20)){
          
          cout << "SU SIGNO ZODIACAL ES TAURO";
        
        }else if((mes == "mayo" && dia >= 21 ) || (mes == "junio" && dia <= 20)){
          
          cout << "SU SIGNO ZODIACAL ES GEMINIS";
        
        }else if((mes == "junio" && dia >= 21 ) || (mes == "julio" && dia <= 22)){
          
          cout << "SU SIGNO ZODIACAL ES CANCER";
        
        }else if((mes == "julio" && dia >= 23 ) || (mes == "agosto" && dia <= 23)){
          
          cout << "SU SIGNO ZODIACAL ES LEO";
        
        }else if((mes == "agosto" && dia >= 24 ) || (mes == "septiembre" && dia <= 22)){
          
          cout << "SU SIGNO ZODIACAL ES VIRGO";
        
        }else if((mes == "septiembre" && dia >= 23 ) || (mes == "octubre" && dia <= 23)){
          
          cout << "SU SIGNO ZODIACAL ES LIBRA";
        
        }else if((mes == "octubre" && dia >= 24 ) || (mes == "noviembre" && dia <= 23)){
          
          cout << "SU SIGNO ZODIACAL ES SCORPIO";
        
        }else if((mes == "noviembre" && dia >= 23 ) || (mes == "diciembre" && dia <= 21)){
          
          cout << "SU SIGNO ZODIACAL ES SAGITARIO";
        
        }else if((mes == "diciembre" && dia >= 22 ) || (mes == "enero" && dia <= 20)){
          
          cout << "SU SIGNO ZODIACAL ES CAPRICORNIO";
        
        }else if((mes == "enero" && dia >= 21 ) || (mes == "febrero" && dia <= 19)){
          
          cout << "SU SIGNO ZODIACAL ES TAURO";
        
        }else if((mes == "febrero" && dia >= 20 ) || (mes == "marzo" && dia <= 20)){
          
          cout << "SU SIGNO ZODIACAL ES PISCIS";
       
        }else{
          cout <<" [*] MES O DIA NO VALIDO...";
        }
      
      }break;     
      case 27:{
        system("clear");

        int num;

        cout << "Ingrese el numero hasta donde quiere imprimir: ";
        cin >> num;

        for(int i = 1; i <= num; i++){
          cout << "[*] ==> " << i << "\n";
        }

        system("sleep 2s");
        
      }break;
      case 28:{
        system("clear");

        int num, sum = 0;

        cout << "Ingrese el numero hasta donde quiere imprimir: ";
        cin >> num;

        for(int i = 1; i <= num; i++){
          sum += i;
        }

        cout << "La suma de los numeros del 1 hasta el " << num << " es: " << sum << "\n";

        system("sleep 3s");
        
      }break;
      case 29:{
        system("clear");

        int num;

        cout << "Ingrese un numero para calcular su residuo: ";
        cin >> num;

        for(int mod = 1; mod <= 10; mod++){
          cout << "[*] " << num << " % "<< mod << " = " << num % mod << "\n";
        }
        system("sleep 3s");
        
      }break;
      case 30:{
        system("clear");

        float rad, perimetro, area, pi = 3.141516;

        cout << "Ingrese el radio del circulo: ";
        cin >> rad;

        perimetro = 2 * pi * rad;

        area = pi * pow(rad, 2);

        cout << "El perimetro es: " << perimetro << "\n";
        cout << "El area es: " << area << "\n";
        
      }break;
      case 31:{
        system("clear");
        
        float rad, pi = 3.1416;
        double vol;

        cout << "Ingrese el radio de la esfera: ";
        cin >> rad;

        vol = (4/3) * pi * pow(rad, 3);

        cout << "El volumen de la esfera es de : "<< vol << "\n";
        system("sleep 3s");
        
      }break;
      case 32:{
        system("clear");

        float hip, cat1, cat2;

        cout << "Ingrese el primer cateto: ";
        cin >> cat1;

        cout << "Ingrese el segundo cateto: ";
        cin >> cat2;

        hip = sqrt(pow(cat1, 2) + pow(cat2, 2));

        cout << "La hipotenusa del triangulo es de: " << hip << "\n";
        system("sleep 3s");
        
      }break;
      case 33:{
        system("clear");

        float fahre, celci;

        cout << "Ingrese la temperatura en fahrenheit: ";
        cin >> fahre;

        celci = (fahre - 32) * 0.5556;

        cout << "[*] "<< fahre << "F ==> " << celci << "C  \n";
        system("sleep 3s");
        
      }break;
      case 34:{
        system("clear");

        
        float fahre, celci;

        cout << "Ingrese la temperatura en fahrenheit: ";
        cin >> celci;

        fahre = (celci * 1.8) + 32;

        cout << "[*] "<< celci << "C ==> " << fahre << "F  \n";
        system("sleep 3s");
        
      }break;
      case 35:{
        system("clear");

      	string materia;
      	float nota1, nota2, nota3;
      	double notaF;	
  
        cout << "Ingrese la materia: ";
        cin >>materia; 
      
        cout << "Ingrese la primera nota de " << materia<<": ";
        cin >> nota1;
        
        cout << "Ingrese la segunda nota de " << materia<<": ";
        cin >> nota2;
        
        cout << "Ingrese la tercera nota de " << materia<<": ";
        cin >> nota3;
        
        if((nota1 >= 1 && nota1 <= 5) && (nota2 >= 1 && nota2 <= 5) && (nota3 >= 1 && nota3 <= 5)){
          
          notaF = ((nota1 * 0.3) + (nota2 * 0.3) + (nota3 * 0.4));
        
          if(notaF < 3.0){
        
            cout<< "EN"<< materia << ", EL ESTUDIANTE REPROBO LA MATERIA CON "<<notaF << "\n";
            system("sleep 3s");
        
          }else if(notaF >= 3.0 && notaF <= 5.0){
        
            cout<< "EN "<< materia <<", EL ESTUDIANTE APROBO LA MATERIA CON "<<notaF << "\n";
            system("sleep 3s");
        
          }    
        }

        
      }break;
      case 36:{
        system("clear");
        
      }break;
      case 37:{
        system("clear");
        
      }break;
      case 38:{
        system("clear");
        
      }break;
      case 39:{
        system("clear");
        
      }break;
      case 40:{
        system("clear");
        
      }break;
      case 41:{
        system("clear");
        
      }break;
      case 42:{
        system("clear");
        
      }break;
      case 43:{
        system("clear");

        
      }break;
      case 44:{
        system("clear");
        
      }break;
      case 45:{
        system("clear");
        
      }break;
      case 46:{
        system("clear");
        
      }break;
      case 47:{
        system("clear");
        
      }break;
      case 48:{
        system("clear");
        
      }break;
      case 49:{
        system("clear");
        
      }break;
      case 50:{
        
        system("clear");
        bool flag = true;
        char cat;
        double horas, total, bonif;
        
        do{
          cout << "\n ----------------------------------- \n";
          cout << "\n ------- SUELDO EMPLEADO ----------- \n";
          cout << "Empleado tipo [A] \n";
          cout << "Empleado tipo [B] \n";
          cout << "Empleado tipo [C] \n";
          cout << "[S] SALIR \n";
          cout << "\n -------------------------- \n";
        
          cout << "Ingrese la categoria del empleado: ";
          cin >> cat;
        
          cat = toupper(cat);
        
          switch(cat){
            case 'A':{
              system("clear");
              cout << "Ingrese el numero de horas trabajadas: ";
              cin >> horas;
              
              if(horas > 150){
                
                total = horas * 26.90;
                bonif = total * 0.5;
                cout << "Su sueldo seria de "<< total << " mas un 5% de bonificaciones por sus horas trabajadas seria " << total + bonif << "\n";
                
              }else{
                
                total = horas * 26.90;
                cout << "Su sueldo seria de $"<< total << "\n";
              }
        
            }break;
            case 'B':{
              system("clear");
              cout << "Ingrese el numero de horas trabajadas: ";
              cin >> horas;
        
              if(horas > 150){
                
                total = horas * 24.30;
                bonif = total * 0.5;
                cout << "Su sueldo seria de "<< total << " mas un 5% de bonificaciones por sus horas trabajadas seria " << total + bonif << "\n";
                
              }else{
                
                total = horas * 24.30;
                cout << "Su sueldo seria de "<< total << "\n";
              }
              
            }break;
            case 'C':{
              system("clear");
              cout << "Ingrese el numero de horas trabajadas: ";
              cin >> horas;
              
              if(horas > 150){
                
                total = horas * 21.50;
                bonif = total * 0.5;
                cout << "Su sueldo seria de "<< total << " mas un 5% de bonificaciones por sus horas trabajadas seria " << total + bonif << "\n";
                
              }else{
                
                total = horas * 21.50;
                cout << "Su sueldo seria de "<< total << "\n";
              }
            }break;
            case 'S':{
              cout << "[*] PROGRAMA TERMINADO....";
              flag = false;
            }break;
            default:
              system("clear");
              cout << "[*] ERROR: OPCION NO VALIDA....";
              break;
          }
        
        }while(flag == true);
        
      }break;
      case 51:{
        cout << "[*] PROGRAMA TERMINADO....";
        flag = false;
      }break;
      default:{
        cout << "[*] ERROR : OPCION NO VALIDA...";
      }break;
      
    }
    
  }
  
}