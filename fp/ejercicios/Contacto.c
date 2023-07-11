#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int id;
    char nombre[50];
    char apellidoPaterno[50];
    char apellidoMaterno[50];
    char domicilio[100];
    char RFC[13];
    char telefonoMovil[10];
    char telefonoCasa[10];
    char correoElectronico[50];
    char facebook[50];
    char twitter[50];
} Contacto;

typedef Contacto *CONTACTO;

CONTACTO nuevoContacto(int id);
void buscarContacto(CONTACTO *contacto, char nombre[50]);
void eliminarContacto(CONTACTO *contacto, int id);
void editarContacto(CONTACTO *contacto, int id);
void mostrarContacto(CONTACTO *contacto, int id);

CONTACTO nuevoContacto(int id){
    contacto[id] -> id = id;
    printf("Ingrese el nombre: ");
    scanf("%s", contacto[id]->nombre);
    printf("Ingrese el apellido paterno: ");
    scanf("%s", contacto[id]->apellidoPaterno);
    printf("Ingrese el apellido materno: ");
    scanf("%s", contacto[id]->apellidoMaterno);
    printf("Ingrese el domicilio: ");
    scanf("%s", contacto[id]->domicilio);
    printf("Ingrese el RFC: ");
    scanf("%s", contacto[id]->RFC);
    printf("Ingrese el telefono movil: ");
    scanf("%s", contacto[id]->telefonoMovil);
    printf("Ingrese el telefono de casa: ");
    scanf("%s", contacto[id]->telefonoCasa);
    printf("Ingrese el correo electronico: ");
    scanf("%s", contacto[id]->correoElectronico);
    printf("Ingrese el facebook: ");
    scanf("%s", contacto[id]->facebook);
    printf("Ingrese el twitter: ");
    scanf("%s", contacto[id]->twitter);
    id ++;
    return contacto;
}

void buscarContacto(CONTACTO *contacto, char nombre[50]){
    for (int i = 0; i < 100; i++){
        if (contacto[i]->nombre == nombre){
            printf("Id: %s", contacto[i]->id);
            printf("Nombre: %s", contacto[i]->nombre);
            printf("Apellido paterno: %s", contacto[i]->apellidoPaterno);
            printf("Apellido materno: %s", contacto[i]->apellidoMaterno);
            printf("Domicilio: %s", contacto[i]->domicilio);
            printf("RFC: %s", contacto[i]->RFC);
            printf("Telefono movil: %s", contacto[i]->telefonoMovil);
            printf("Telefono de casa: %s", contacto[i]->telefonoCasa);
            printf("Correo electronico: %s", contacto[i]->correoElectronico);
            printf("Facebook: %s", contacto[i]->facebook);
            printf("Twitter: %s", contacto[i]->twitter);
        }
    }
}

void eliminarContacto(CONTACTO *contacto, int id){
    for (int i = 0; i < 100; i++){
        if (contacto[i]->id == id){
        contacto[i]->nombre = "";
        contacto[i]->apellidoPaterno = "";
        contacto[i]->apellidoMaterno = "";
        contacto[i]->domicilio = "";
        contacto[i]->RFC = "";
        contacto[i]->telefonoMovil = "";
        contacto[i]->telefonoCasa = "";
        contacto[i]->correoElectronico = "";
        contacto[i]->facebook = "";
        contacto[i]->twitter = "";
        }
    }
}
void editarContacto(CONTACTO *contacto, int id){
    int opcion2;
     
    if (contacto[i]->id == id){
        printf("Que desea editar?\n");
        printf("1. Nombre\n");
        printf("2. Apellido paterno\n");
        printf("3. Apellido materno\n");
        printf("4. Domicilio\n");
        printf("5. RFC\n");
        printf("6. Telefono movil\n");
        printf("7. Telefono de casa\n");
        printf("8. Correo electronico\n");
        printf("9. Facebook\n");
        printf("10. Twitter\n");
        printf("11. Salir\n");
        printf("Seleccione una opcion: \n");
        scanf("%d", &opcion2);

        switch (opcion2){
        case 1:
            printf("Ingrese el nuevo nombre: \n");
            scanf("%s", contacto[i]->nombre);
            break;
        case 2:
            printf("Ingrese el nuevo apellido paterno: \n");
            scanf("%s", contacto[i]->apellidoPaterno);
            break;
        case 3:
            printf("Ingrese el nuevo apellido materno: \n");
            scanf("%s", contacto[i]->apellidoMaterno);
            break;
        case 4:
            printf("Ingrese el nuevo domicilio: \n");
            scanf("%s", contacto[i]->domicilio);
            break;
        case 5:
            printf("Ingrese el nuevo RFC: \n");
            scanf("%s", contacto[i]->RFC);
            break;
        case 6:
            printf("Ingrese el nuevo telefono movil: \n");
            scanf("%s", contacto[i]->telefonoMovil);
            break;
        case 7:
            printf("Ingrese el nuevo telefono de casa: \n");
            scanf("%s", contacto[i]->telefonoCasa);
            break;
        case 8:
            printf("Ingrese el nuevo correo electronico: \n");
            scanf("%s", contacto[i]->correoElectronico);
            break;
        case 9:
            printf("Ingrese el nuevo facebook: \n");
            scanf("%s", contacto[i]->facebook);
            break;
        case 10:
            printf("Ingrese el nuevo twitter: \n");
            scanf("%s", contacto[i]->twitter);
            break;
        case 11:
            exit(0);
            break;
        default:
            printf("Opcion no valida\n");
            break;
        }
        printf("Contacto editado con exito\n");
    }    
}

void mostrarContacto(CONTACTO *contacto, int id){
    if (contacto[i]->id == id){
        printf("Id: %s", contacto[i]->id);
        printf("Nombre: %s", contacto[i]->nombre);
        printf("Apellido paterno: %s", contacto[i]->apellidoPaterno);
        printf("Apellido materno: %s", contacto[i]->apellidoMaterno);
        printf("Domicilio: %s", contacto[i]->domicilio);
        printf("RFC: %s", contacto[i]->RFC);
        printf("Telefono movil: %s", contacto[i]->telefonoMovil);
        printf("Telefono de casa: %s", contacto[i]->telefonoCasa);
        printf("Correo electronico: %s", contacto[i]->correoElectronico);
        printf("Facebook: %s", contacto[i]->facebook);
        printf("Twitter: %s", contacto[i]->twitter);
    }
}

int main(int argc, char const *argv[]){
    CONTACTO contacto[100];
    int id = 0;
    printf("MENU CONTACTO\n");
    printf("1. Nuevo contacto\n");
    printf("2. Buscar contacto\n");
    printf("3. Eliminar contacto\n");
    printf("4. Editar contacto\n");
    printf("5. Mostrar contacto\n");
    printf("6. Salir\n");
    printf("Seleccione una opcion: \n");

    int opcion;
    
    switch (opcion)
    {
    case 1:
        nuevoContacto(id);
        break;
    case 2:
        printf("Ingrese el nombre del contacto: \n");
        scanf("%s", nombre);
        buscarContacto(contacto, nombre);
        break;
    case 3:
        printf("Ingrese el id del contacto: ");
        scanf("%d", id);
        eliminarContacto(contacto, id);
        break;
    case 4:
        printf("Ingrese el id del contacto: ");
        scanf("%d", id);
        editarContacto(contacto, id);
        break;
    case 5:
        printf("Ingrese el id del contacto: ");
        scanf("%d", id);
        mostrarContacto(contacto, id);
        break;
    case 6:
        exit(0);
        break;
    
    default:
        break;
    }
    return 0;
}
