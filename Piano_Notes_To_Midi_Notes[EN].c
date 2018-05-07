#include <stdio.h>
#include <stdlib.h>

int main(){
	int note, oct, midi;
	printf("Type a number for a note: \n[0]C\n[1]C#\n[2]D\n[3]D#\n[4]E\n[5]F\n[6]F#\n[7]G\n[8]G#\n[9]A\n[10]A#\n[11]B");
	scanf("%d", &note);
	printf("Type the octave required:\n");
	scanf("%d", &oct);
	if (oct >= 0){
		midi=(24+note)*(oct+1);
	}
	else {
		midi=note+((oct+2)*12);
	}
	printf("The correspondent note in Midi is:\n %d \n\n", midi);
	return(0);
}