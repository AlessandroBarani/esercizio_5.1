#include <stdio.h>
int main(){
    char partecipanti[]= {'F', 'D', 'E', 'A', 'M', 'B'};
    int posizione;
    printf("Inserisci la posizione finale del partecipante: ");
    scanf("%d", &posizione);
    if(posizione >= 1 && posizione <= 6) {
        printf("%c e' arivato: %d", partecipanti[posizione-1], posizione);
    }else {
        printf("Errore, posizione inserita inesistente.");
    }

    return 0;
}
