
#include <stdio.h>
#include <math.h>

void libro1 ();
void libro2 ();
void libro3 ();
void libro4 ();
void libro5 ();
void verProductos ();
void Mostrarnuevos ( float numero, float id[], float nombre[], float descripcion[], float cantidad[], float precio[]);
void IngresarProducto (float numero,int *id, int *nombre, int *descripcion, int *cantidad, int *precio);
void EliminarProductos(int libro);
void ModificarProductos (int libro);
void Menu (int opcion);

int main(int argc, char const *argv[])
{
    int libro;
    int opcion;
    int numero, id, nombre, descripcion, cantidad, precio;
    Menu(opcion);

   
    return 0;
}

void libro1 (){
    printf("ID: 001\n");
    printf("Nombre: Lo que el viento se llevo \n");
    printf("Descripcion: La historia de la joven Scarlett O'Hara, integrante de una familia aristócrata sureña, en tiempos de la Guerra de Secesión.\n");
    printf("Cantidad: 40\n");
    printf("Precio: $23 \n");
    }

void libro2 (){
    printf("ID: 002\n");
    printf("Nombre: El diario de Ana Frank \n");
    printf("Descripcion: Niña de trece años oculta con su familia durante la ocupación nazi de Holanda.\n");
    printf("Cantidad: 18\n");
    printf("Precio: $20 \n");
    }

void libro3 (){
    printf("ID: 003\n");
    printf("Nombre: Don Quijote de la mancha \n");
    printf("Descripcion: Alonso Quijano, enloquecido de tanto leer novelas de caballería, cree ser un caballero llamado don Quijote de la Mancha.\n");
    printf("Cantidad: 23\n");
    printf("Precio: $24 \n");
    }

void libro4 (){
    printf("ID: 004\n");
    printf("Nombre: El principito \n");
    printf("Descripcion: Un pequeño principe que realiza una travesia por el universo, donde descubre la extraña forma en que los adultos ven la vida y comprende el valor del amor y la amistad.\n");
    printf("Cantidad: 10\n");
    printf("Precio: $17 \n");
    }
    
void libro5 () {
    printf("ID: 005\n");
    printf("Nombre: La Divina Comedia \n");
    printf("Descripcion: Sigue el camino desde el centro de la Tierra, donde se halla Lucifer, hasta el dominio de Dios.\n");
    printf("Cantidad: 15\n");
    printf("Precio: $23 \n");
    }

void verProductos (){
    printf("-----------------------------MENU--------------------------\n");

    void libro1 ();
    void libro2 ();
    void libro3 ();
    void libro4 ();
    void libro5 (); 
}

void Mostrarnuevos ( float numero, float id[], float nombre[], float descripcion[], float cantidad[], float precio[]){
    printf("LOS NUEVOS LIBROS INGRESADOS SON:\n");
    for (int a = 0; a < numero; a++){
    printf("ID:");
    printf("%i\n", id[a]);
    printf("Nombre:");
    printf("%i\n", nombre[a]);
    printf("Descripcion:");
    printf("%i\n", descripcion[a]);
    printf("Cantidad:");
    printf("%i\n", cantidad[a]);
    printf("Precio:");
    printf("%i\n", precio[a]);   
    }

}

void IngresarProducto (float numero,int *id, int *nombre, int *descripcion, int *cantidad, int *precio){

    printf("Escriba el numero de libros por añadir\n");
    scanf("%f", &numero);

    for (int a=0; a<numero; a++){
        printf("Escriba el ID:");
        scanf("%i", &id[a]);
        printf("Escriba el NOMBRE:");
        scanf("%i", &nombre[a]);
        printf("Escriba la DESCRIPCION:");
        scanf("%i", &descripcion[a]);
        printf("Escriba la CANTIDAD:");
        scanf("%i", &cantidad[a]);
        printf("Escriba el PRECIO:");
        scanf("%i", &precio[a]);
    }
    void verProductos ();
    void Mostrarnuevos ( float numero, float id[], float nombre[], float descripcion[], float cantidad[], float precio[]);    
}


void EliminarProductos(int libro){

    
    printf("Eliga el libro a eliminar");
    printf("Lo que el viento se llevo (001)\n");
    printf("El diario de Ana Frank (002)\n");
    printf("Don Quijote de la mancha (003)\n");
    printf("El principito (004)\n");
    printf("La Divina Comedia (005)\n");
    scanf("%i",libro);

    switch(libro){

        case 001: 
              void libro1 ();
              printf("\n ESTE LIBRO HA SIDO ELIMINADO CORRECTAMENTE");
            break;

        case 002: 
              void libro2 ();
              printf("\n ESTE LIBRO HA SIDO ELIMINADO CORRECTAMENTE");
            break;

        case 003: 
              void libro3 ();
              printf("\n ESTE LIBRO HA SIDO ELIMINADO CORRECTAMENTE");
            break;

        case 004: 
              void libro4 ();
              printf("\n ESTE LIBRO HA SIDO ELIMINADO CORRECTAMENTE");
            break;

        case 005: 
              void libro5 ();
              printf("\n ESTE LIBRO HA SIDO ELIMINADO CORRECTAMENTE");
            break;

        default: 
            printf("por favor ingresa correctamente el ID ");
        }
    
}

void ModificarProductos (int libro){

    void EliminarProductos(int libro);
    printf("Ahora ingrese el nuevo producto\n");
    void IngresarProducto (float numero,int *id, int *nombre, int *descripcion, int *cantidad, int *precio);   
        
}

void Menu (int opcion){
    printf("MENU:\n");
    printf("1. Ver Productos\n");
    printf("2. Ingresar Productos\n");
    printf("3. Eliminar Productos\n");
    printf("4. Modificar Productos\n");
    printf("5. Salir\n");


    printf("Que opcion desea realizar:\n");
    scanf("%i", &opcion);
    
    switch(opcion){

    case 1: 
        verProductos ();  
        printf("La actividad ha culminado exitosamente, ahora que desea hacer?\n");
        Menu (opcion);     
        break;

    case 2: 
        IngresarProducto (float numero,int *id, int *nombre, int *descripcion, int *cantidad, int *precio);   
        printf("La actividad ha culminado exitosamente, ahora que desea hacer?\n");
        Menu (opcion);    
        break;

    case 3: 
        EliminarProductos(libro);   
        printf("La actividad ha culminado exitosamente, ahora que desea hacer?\n");  
        Menu (opcion);  
        break;

    case 4: 
         ModificarProductos (libro); 
        printf("La actividad ha culminado exitosamente, ahora que desea hacer?\n");  
        Menu (opcion);  
        break;

    case 5: 
        printf("Ha salido del programa exitosamente");  
        break;

    default: 
        printf("por favor escoge una opcion permitida");
        Menu ( opcion);
        break;
    }


}