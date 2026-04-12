#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//ARREGLOS
char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core","Pentium"};

//ESTRUCTURAS
typedef struct 
{
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_cpu;
}Compu;

//FUNCIONES
void cargarDatos(Compu *compu, int cantidad);
void listarPC(Compu *compu, int cantidad);
void masAntigua(Compu *compu, int cantidad);
void mostrarMasVeloz(Compu *compu, int cantidad);

int main(){
    srand(time(NULL));
    int cantidad_computadoras=5;
    Compu *compu = malloc(cantidad_computadoras*sizeof(Compu));
    cargarDatos(compu,cantidad_computadoras);
    listarPC(compu,cantidad_computadoras);
    masAntigua(compu,cantidad_computadoras);
    mostrarMasVeloz(compu,cantidad_computadoras);
    return 0;
}

void cargarDatos(Compu *compu, int cantidad){
    printf("\n==DATOS CARGADOS==\n");
    //COMPUTADORA 1
    int id_tipos=rand()%6;
    compu[0].velocidad = 1 + rand() % 3;
    compu[0].anio = 2015 + rand() % (2024-2015+1);
    compu[0].cantidad_nucleos = 1 + rand() % 8;
    compu[0].tipo_cpu=tipos[id_tipos];
    //COMPUTADORA 2
    id_tipos=rand()%6;
    compu[1].velocidad = 1 + rand() % 3;
    compu[1].anio = 2015 + rand() % (2024-2015+1);
    compu[1].cantidad_nucleos = 1 + rand() % 8;
    compu[1].tipo_cpu=tipos[id_tipos];
    //COMPUTADORA 3
    id_tipos=rand()%6;
    compu[2].velocidad = 1 + rand() % 3;
    compu[2].anio = 2015 + rand() % (2024-2015+1);
    compu[2].cantidad_nucleos = 1 + rand() % 8;
    compu[2].tipo_cpu=tipos[id_tipos];
    //COMPUTADORA 4
    id_tipos=rand()%6;
    compu[3].velocidad = 1 + rand() % 3;
    compu[3].anio = 2015 + rand() % (2024-2015+1);
    compu[3].cantidad_nucleos = 1 + rand() % 8;
    compu[3].tipo_cpu=tipos[id_tipos];
    //COMPUTADDORA 5
    id_tipos=rand()%6;
    compu[cantidad-1].velocidad = 1 + rand() % 3;
    compu[cantidad-1].anio = 2015 + rand() % (2024-2015+1);
    compu[cantidad-1].cantidad_nucleos = 1 + rand() % 8;
    compu[cantidad-1].tipo_cpu=tipos[id_tipos];
};

void listarPC(Compu *compu, int cantidad){
    for (int i = 0; i < cantidad; i++)
    {
        printf("\n====Especificaciones Computadora %d====",i+1);
        printf("\nVelocidad de procesamiento %dGHz",compu[i].velocidad);
        printf("\nAnio de fabricacion: %d",compu[i].anio);
        printf("\nCantidad de nucleos: %d",compu[i].cantidad_nucleos);
        printf("\nTipo de procesador: %s\n",compu[i].tipo_cpu);

    }
}

void masAntigua(Compu *compu, int cantidad){
    int indice=0;
    int aux=5000;
    for (int i = 0; i < cantidad; i++)
    {
        if(aux>compu[i].anio){
            aux=compu[i].anio;
            indice=i;
        }
    }
    printf("\n===Computadora mas antigua===");
    printf("\nVelocidad de procesamiento %dGHz",compu[indice].velocidad);
    printf("\nAnio de fabricacion: %d",compu[indice].anio);
    printf("\nCantidad de nucleos: %d",compu[indice].cantidad_nucleos);
    printf("\nTipo de procesador: %s\n",compu[indice].tipo_cpu);
}

void mostrarMasVeloz(Compu *compu, int cantidad){
    int indice=0;
    int aux=0;
    for (int i = 0; i < cantidad; i++)
    {
        if(aux<compu[i].velocidad){
            aux=compu[i].velocidad;
            indice=i;
        }
    }
    printf("\n===Computadora mas veloz===");
    printf("\nVelocidad de procesamiento %dGHz",compu[indice].velocidad);
    printf("\nAnio de fabricacion: %d",compu[indice].anio);
    printf("\nCantidad de nucleos: %d",compu[indice].cantidad_nucleos);
    printf("\nTipo de procesador: %s\n",compu[indice].tipo_cpu);
}