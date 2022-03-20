/*
Segundos
103e27c4d8

Escreva um programa que dada uma quantidade S de segundos calcula e imprime 
a quantidade correspondente em horas, minutos e segundos.
*/

#include<iostream>

int main(){
	int tempoS, horas, minutos, segundos;
	
	std::cin >> tempoS;
	
	horas = tempoS/3600;
	minutos = (tempoS - (horas*3600))/60;
	segundos = (tempoS - (horas*3600) - (minutos*60));
	
	std::cout << horas << " hora(s), " << minutos << " minuto(s) e " << segundos << " segundo(s)" << std::endl;

	return 0;
}