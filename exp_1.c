/*
 * exp_1.c
 * 
 * Copyright 2023 rt <rt@rt-VirtualBox>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>

void insNome(char *ptr_nome);
void insidade(int *ptr_idade);
void insMorada(int *ptr_morada);

int main(int argc, char **argv)
{
	char *nome = (char*)malloc(20*sizeof(char)); 
	int idade=30;
	int *ptr_idade;
	ptr_idade=&idade;
	
	printf("Versao_6\n");
	insNome(nome);
	insidade(ptr_idade);
	
	printf("Terminou\n\n");
	return 0;
}

void insNome(char *ptr_nome)
{
	int a=5;
	printf("funçao insNome\n");		
	
	return;
}

void insidade(int *ptr_morada)
{
	printf("funçao inidade\n");		
		
	return;
}

