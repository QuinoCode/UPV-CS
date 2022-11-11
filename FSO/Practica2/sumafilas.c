#include <stdio.h> 

#define TAM_FILA 100
#define NUM_FILAS 10
struct FILA {
    float datos[TAM_FILA];
    float suma;
};
// A) Define una variable filas que sea un vector de estructuras FILA de tama�o NUM_FILAS
struct FILA filas[NUM_FILAS];

void suma_fila(struct FILA *pf) {
// B) Implementar suma_fila
    int xd;
    for (xd = 0; xd < TAM_FILA; xd++) { //yo creo que el pf que me dan apunta a datos[0];
        
        pf->suma = pf->suma + pf->datos[xd];
       
    }
}

// Inicia las filas con el valor i*j
void inicia_filas() {
    int i, j;
    for (i = 0; i < NUM_FILAS; i++) {
        for (j = 0; j < TAM_FILA; j++) {
            filas[i].datos[j] = (float)i*j;
            
        }
    }
}
int main() { 
    int i;
    float suma_total;
    
    inicia_filas();
    // C) Completar bucle
    suma_total = 0;
    for (i = 0; i < NUM_FILAS; i++) {
        // Llamar a suma_fila (necesito un puntero a la estructura fila)
        struct FILA * pFila; //puntero a estructura tipo fila
        pFila = &filas[i]; //asignar el valor de la direcci� de la estructura deseada al puntero
        suma_fila(pFila); //pasarsela a la variable
        
        printf("La suma de la fila %u es %f\n", i, pFila->suma/* COMPLETAR */);
        // sumar la fila a suma_total
        suma_total = suma_total + filas[i].suma;
    }
    printf("La suma final es %f\n", suma_total); 
}

