#include <iostream>

using namespace std;

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
    cout << "\n ------------------------------- \n";
    cout << "EJERCICIOS C++: \n";
    cout << "[1] NUMERO MAYOR,MENOR o IGUAL A 0 \n";
    cout << "[2] NUMERO PAR O IMPAR \n";
    cout << "[3] NUMEROS DEL 100 AL -2 \n";
    cout << "[4] NUMEROS PARES DEL 1 AL 100 \n";
    cout << "[5] -- \n";
    cout << "[6] -- \n";
    cout << "[7] -- \n";
    cout << "[8] -- \n";
    cout << "[9] -- \n";
    cout << "[10] -- \n";
    cout << "[11] -- \n";
    cout << "[12] -- \n";
    cout << "[13] -- \n";
    cout << "[14] -- \n";
    cout << "[15] -- \n";
    cout << "[16] -- \n";
    cout << "[17] -- \n";
    cout << "[18] -- \n";
    cout << "[19] -- \n";
    cout << "[20] -- \n";
    cout << "[21] -- \n";
    cout << "[22] -- \n";
    cout << "[23] -- \n";
    cout << "[24] -- \n";
    cout << "[25] -- \n";
    cout << "[26] SIGNO ZODIACAL \n";
    cout << "[27] -- \n";
    cout << "[28] -- \n";
    cout << "[29] -- \n";
    cout << "[30] -- \n";
    cout << "[31] -- \n";
    cout << "[32] -- \n";
    cout << "[33] -- \n";
    cout << "[34] -- \n";
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
    cout << "[4] SALIR \n";
    cout << "\n -------------------------------- \n";

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
        for(int i = 101; i >= -2; i--){
          cout << "[*] ==>" << i << "\n";
        }
      }break;
      case 4:{
        system("clear");
        cout << "------- NUMEROS PARES DEL 1 AL 100 ------- \n";
        
        for(int i = 0; i <= 100; i++){
          
          if(i % 2 == 0){
            cout << "[*] ==>" << i << "\n";
          }
        }
        
      }break;
      case 5:{
        system("clear");
        
      }break;
      case 6:{
        system("clear");
        
      }break;
      case 7:{
        system("clear");
        
      }break;
      case 8:{
        system("clear");
        
      }break;
      case 9:{
        system("clear");
        
      }break;
      case 10:{
        system("clear");
        
      }break;
      case 11:{
        system("clear");
        
      }break;
      case 12:{
        system("clear");
        
      }break;
      case 13:{
        system("clear");
        
      }break;
      case 14:{
        system("clear");
        
      }break;
      case 15:{
        system("clear");
        
      }break;
      case 16:{
        system("clear");
        
      }break;
      case 17:{
        system("clear");
        
      }break;
      case 18:{
        system("clear");
        
      }break;
      case 19:{
        system("clear");
        
      }break;
      case 20:{
        system("clear");
        
      }break;
      case 21:{
        system("clear");
        
      }break;
      case 22:{
        system("clear");
        
      }break;
      case 23:{
        system("clear");
        
      }break;
      case 24:{
        system("clear");
        
      }break;
      case 25:{
        system("clear");
        
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
        
      }break;
      case 28:{
        system("clear");
        
      }break;
      case 29:{
        system("clear");
        
      }break;
      case 30:{
        system("clear");
        
      }break;
      case 31:{
        system("clear");
        
      }break;
      case 32:{
        system("clear");
        
      }break;
      case 33:{
        system("clear");
        
      }break;
      case 34:{
        system("clear");
        
      }break;
      case 35:{
        system("clear");
        
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
            case 'A':
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
        
              break;
        
            case 'B':
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
              
              break;
        
            case 'C':
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
              break;
        
            case 'S':
              cout << "[*] PROGRAMA TERMINADO....";
              flag = false;
              break;
        
            default:
              system("clear");
              cout << "[*] ERROR: OPCION NO VALIDA....";
              break;
          }
        
        }while(flag == true);
        
      }break;
    }
    
  }
  
}