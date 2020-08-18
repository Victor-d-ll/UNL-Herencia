#include "Auto3.h"
#include <cstdlib>
#include <conio2.h>
#include <iostream>

using namespace std;

/*
// CONSTRUCTOR
*/
Auto3::Auto3(int vel, int x0, int y0):Auto(vel, x0, y0){

	cambio = true;
	colorAuto = (rand()%15)+1;		
	
	color[1][0] = colorAuto;
	color[1][2] = colorAuto;
	color[2][0] = colorAuto;
	color[2][2] = colorAuto;	
	color[3][0] = colorAuto;	
	color[3][2] = colorAuto;	
	
	dibujar();	
	
}

/// El metodo update lo tiene cada objeto pero es 
/// distinto en cada caso, por lo que se debe implementar 
/// en cada clase
void Auto3::Colorear(){
	
	colorAuto = (rand()%15)+1;
	
	color[1][0] = colorAuto;
	color[1][2] = colorAuto;
	color[2][0] = colorAuto;
	color[2][2] = colorAuto;
	color[3][0] = colorAuto;
	color[3][2] = colorAuto;
	
}

void Auto3::update(){
	
	if(tempo+paso<clock()){
		dibujar();
		tempo=clock(); // tomamos el tiempo para saber la proxima vez que movemos la pelotita
	}
}
