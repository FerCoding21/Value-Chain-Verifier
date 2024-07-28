#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string cadena;
    int agru = 0;
    bool salir = false;

    while (!salir) {
        cout << "Ingrese la cadena a analizar. Termine con ';' y use '%' para salir:" << std::endl;
        getline(cin, cadena, ';');

        // Analizar la cadena hasta el punto antes del ';'
        for (std::size_t i = 0; i < cadena.length(); ++i) {
            // Validaci�n de variables
            if (cadena[i] == 'x' || cadena[i] == 'y' || cadena[i] == 'z') {
                std::cout << cadena[i] << ": Es variable" << std::endl;
            }
			
			 // Validaci�n de la palabra reservada "Do-while"
			if (cadena[i] == 'd' || cadena[i] == 'D') {
                if (cadena.substr(i, 8) == "do-while" || cadena.substr(i, 8) == "Do-while") {
                    std::cout << "Do-while: Es palabra reservada" << std::endl;
                    i += 7; // Saltar los siguientes caracteres
                } else {
                    std::cout << cadena[i] << ": palabra reservada mal escrita" << std::endl;
                }
            }
			
            // Validaci�n de la palabra reservada "while"
            if (cadena[i] == 'w' || cadena[i] == 'W') {
                if (cadena.substr(i, 5) == "while" || cadena.substr(i, 5) == "While") {
                    std::cout << "while: Es palabra reservada" << std::endl;
                    i += 4; // Saltar los siguientes 4 caracteres
                } else {
                    std::cout << cadena[i] << ": palabra reservada mal escrita" << std::endl;
                }
            }
             // Validaci�n de la palabra reservada "Do"
			if (cadena[i] == 'd' || cadena[i] == 'D') {
                if (cadena.substr(i, 2) == "do" || cadena.substr(i, 2) == "Do") {
                    std::cout << "Do: Es palabra reservada" << std::endl;
                    i += 1; // Saltar los siguientes caracteres
                } else {
                    std::cout << cadena[i] << ": palabra reservada mal escrita" << std::endl;
                }
            }
             // Validaci�n de la palabra reservada "IF"
			if (cadena[i] == 'i' || cadena[i] == 'I') {
                if (cadena.substr(i, 2) == "if" || cadena.substr(i, 2) == "IF") {
                    std::cout << "IF: Es palabra reservada" << std::endl;
                    i += 1; // Saltar los siguientes caracteres
                } else {
                    std::cout << cadena[i] << ": palabra reservada mal escrita" << std::endl;
                }
            }
            
            // Validaci�n de la palabra reservada "FOR"
			if (cadena[i] == 'f' || cadena[i] == 'F') {
                if (cadena.substr(i, 3) == "for" || cadena.substr(i, 3) == "FOR") {
                    std::cout << "FOR: Es palabra reservada" << std::endl;
                    i += 2; // Saltar los siguientes caracteres
                } else {
                    std::cout << cadena[i] << ": palabra reservada mal escrita" << std::endl;
                }
            }
            
            // Validaci�n de la palabra reservada "ESCRIBIR"
			if (cadena[i] == 'e' || cadena[i] == 'E') {
                if (cadena.substr(i, 8) == "escribir" || cadena.substr(i, 8) == "ESCRIBIR") {
                    std::cout << "ESCRIBIR: Es palabra reservada" << std::endl;
                    i += 7; // Saltar los siguientes caracteres
                } else {
                    std::cout << cadena[i] << ": palabra reservada mal escrita" << std::endl;
                }
            }
            
            // Validaci�n de la palabra reservada "Leer"
			if (cadena[i] == 'l' || cadena[i] == 'L') {
                if (cadena.substr(i, 4) == "leer" || cadena.substr(i, 4) == "LEER") {
                    std::cout << "LEER: Es palabra reservada" << std::endl;
                    i += 3; // Saltar los siguientes caracteres
                } else {
                    std::cout << cadena[i] << ": palabra reservada mal escrita" << std::endl;
                }
            }
            
            
            // Validaci�n de signos de agrupaci�n
            if (cadena[i] == '(' || cadena[i] == '{' || cadena[i] == '[') {
                std::cout << cadena[i] << ": Se abre signo de agrupaci�n" << std::endl;
                agru++;
            } else if (cadena[i] == ')' || cadena[i] == '}' || cadena[i] == ']') {
                std::cout << cadena[i] << ": Se cierra signo de agrupaci�n" << std::endl;
                agru--;
            }

            // Validaci�n de operadores matem�ticos
            if (cadena[i] == '+' || cadena[i] == '-' || cadena[i] == '*' || cadena[i] == '/'|| cadena[i] == '^') {
                std::cout << cadena[i] << ": Es un operador matem�tico" << std::endl;
            }

            // Validaci�n de operadores relacionales
            if (cadena[i] == '<') {
                if (i + 1 < cadena.length() && cadena[i + 1] == '=') {
                    std::cout << "<=: Operador relacional menor o igual que" << std::endl;
                    i++; // Saltar el pr�ximo car�cter
                } else {
                    std::cout << "<: Operador relacional menor que" << std::endl;
                }
            }

            if (cadena[i] == '>') {
                if (i + 1 < cadena.length() && cadena[i + 1] == '=') {
                    std::cout << ">=: Operador relacional mayor o igual que" << std::endl;
                    i++; // Saltar el pr�ximo car�cter
                } else {
                    std::cout << ">: Operador relacional mayor que" << std::endl;
                }
            }

            if (cadena[i] == '!') {
                if (i + 1 < cadena.length() && cadena[i + 1] == '=') {
                    std::cout << "!=: Operador relacional diferente que" << std::endl;
                    i++; // Saltar el pr�ximo car�cter
                }
            }

            if (cadena[i] == '=') {
                std::cout << "= : Operador relacional igual que" << std::endl;
            }
			
			
            // Validaci�n de operadores l�gicos
            if (cadena[i] == '&') {
                std::cout << "& : Operador l�gico and" << std::endl;
            }

            if (cadena[i] == '|') {
                std::cout << "| : Operador l�gico or" << std::endl;
            }

            if (cadena[i] == '~') {
                std::cout << "~ : Operador l�gico negaci�n" << std::endl;
            }

            // Validaci�n de n�meros
            if (isdigit(cadena[i])) {
                std::cout << cadena[i] << ": Es un n�mero" << std::endl;
            }

            // Validaci�n de signo de puntuaci�n
            if (cadena[i] == ';') {
                std::cout << "; : Simbolo de final de lo ingresado" << std::endl;
            }

            // Verificaci�n de salida del programa
            if (cadena[i] == '%') {
                std::cout << "% : Termina la ejecuci�n del programa" << std::endl;
                salir = true;
                break;
            }
        }

        // Verificaci�n de signos de agrupaci�n balanceados
        if (agru != 0) {
            std::cout << "Falta cerrar un signo de agrupaci�n." << std::endl;
            agru = 0; // Resetear para la siguiente iteraci�n
        }
    }

    return 0; // Salida limpia del programa
}
