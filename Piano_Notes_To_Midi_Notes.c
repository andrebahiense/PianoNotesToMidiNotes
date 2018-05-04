#include <stdio.h>
#include <stdlib.h>

int main(){
	int note, oct, midi;
	printf("Digite o número correspondente da Nota: \n[0]C\n[1]C#\n[2]D\n[3]D#\n[4]E\n[5]F\n[6]F#\n[7]G\n[8]G#\n[9]A\n[10]A#\n[11]B");
	printf("\n\n*Válido a partir da oitava zero.\n");
	scanf("%d", &note);
	printf("Digite a oitava requerida:\n");
	scanf("%d", &oct);
	midi=(24+note)*(oct+1);
	printf("A nota correspondente em Midi é:\n %d \n\n", midi);
	return(0);
}