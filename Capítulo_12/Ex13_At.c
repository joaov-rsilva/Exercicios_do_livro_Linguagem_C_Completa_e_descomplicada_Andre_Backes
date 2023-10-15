/* 13-Faça um programa que leia um arquivo texto contendo os dados de um aluno. Cada linha do 
arquivo contém o número de matrícula, o nome e as notas de três provas de um aluno. Os dados devem
ser lidos e armazenados em uma estrutura. Em seguida, Exiba os dados lidos em tela. */

#include <stdio.h>
#include <stdlib.h>

struct ST_StudentData{
    int Matriculation;
    char Name[30];
    float TestResults[3];
}Data;

int main(){

    FILE *StudentData = fopen("studentdata.txt", "r");
    if(StudentData == NULL){
        perror("Erro: ");
        exit(1);
    }

    while(!feof(StudentData)){
        if(feof(StudentData)){
            break;
        }

        fscanf(StudentData, "%d", &Data.Matriculation);
        fscanf(StudentData, "%s", Data.Name);
        fscanf(StudentData, "%f %f %f", &Data.TestResults[0], &Data.TestResults[1], &Data.TestResults[2]); //Leio do arquivo
    }

    printf("Matrícula: %d\n", Data.Matriculation);
    printf("Nome: %s\n", Data.Name);
    for(int i = 0; i < 3; i++){
        printf("%dº Nota: %.2f\n", (i+1), Data.TestResults[i]); 
    }

    fclose(StudentData);
    StudentData = NULL;

    return 0;
}