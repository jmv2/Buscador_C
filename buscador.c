#include "sources/master.h"

int main(){

  int opt = 0 ;
  char* menu = "1) Cargar y listar StopWords\n2) Crear indice\n3) Guardar indice\n4) Cargar indice\n5) Consulta\n6) Mostrar resultados\n0) Salir\n";

  printf("Favor ingresar una opcion\n");
  printf("%s", menu);
  scanf("%d", &opt);

  while((opt < 0 ) || (opt > 5)){
    printf("Ingresar una opcion valida\n");
    printf("%s", menu);
    scanf("%d", &opt);
    printf("\n");
  }

  master(opt);

  return 0;
}
