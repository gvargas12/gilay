#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 10

// Estructura que representa a un usuario
struct User {
    char name[50];
    int cel;
    
};
  void motra();
 void regi();


 struct User users[MAX_USERS]; // Arreglo de estructuras para almacenar usuarios
    int num_users = 0; // Número de usuarios registrados
    int option;
int main() {
   

    do {
        // Menú de opciones
        
        printf("**********Menu de registro**************** ");
         printf("\n");                      
        printf("\n1. Registrar usuario");    
        printf("\n2. Mostrar usuarios");       
        printf("\n3. Salir");
		printf("\n******************************************");                 
        printf("\nSeleccione una opcion: ");  
        
        scanf("%d", &option);                  
       
         
        switch (option) {
            case 1: // Registrar usuario
            regi(); 
                break;
            case 2: // Mostrar usuarios
               motra();
                break;
            case 3: // Salir
                printf("\nHasta luego.\n");
                break;
            default:
                printf("\nOpcion invalida.\n");
                break;
        }
    } while (option != 3);

    return 0;
}
void regi(){
	
	if (num_users < MAX_USERS) {
                    struct User *user = &users[num_users]; // Obtener puntero a la siguiente estructura disponible
                    printf("\nNombre: ");
                    scanf("%s", user->name);
                    printf("Cedula : ");
                    scanf("%d", &user->cel);
                    num_users++;//datos de  entradas de la persona
                    printf("Usuario registrado con éxito.\n");
                } else {
                    printf("\nNo se pueden registrar más usuarios.\n");
                }
	system("pause");
	 system("cls");
}


void motra(){
	
	 system("cls");
	 printf("\n");
	 if (num_users > 0) {
                    printf("\nUsuarios registrados:\n");
                    for (int i = 0; i < num_users; i++) {
                        struct User *user = &users[i]; // Obtener puntero a la estructura del usuario
                        printf("%d. Nombre: %s, cedula: %d\n", i + 1, user->name, user->cel);
                    }
                } else {
                    printf("\nNo hay usuarios registrados.\n");
                }
	
	
		 printf("\n");
	     printf("\n");
	
		system("pause");
	 system("cls");
}
