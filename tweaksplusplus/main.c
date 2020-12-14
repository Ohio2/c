#include <stdio.h>
#include <stdlib.h>
/*Cheat sheet;
scanf: Read input
int: variable
*/
int main()
{
    /*mate c'mon you know how to extract the zips. atleast that pls!*/
    char input_file;
    char output_file;
    printf("State the folder, ONLY!\n");
    printf("C Resource pack patcher,licence is GPLv3, made by Ohio2 \n");
    printf("Input File is...: ");
    scanf("%c", &input_file);
    printf("Output File is...: \n");
    scanf("%c", &output_file);
    system("mv -f $input_file/* $output_file");
    system("mv $output_file ResourcePackPatched");
    system("zip $output_file"); 
    printf("Patched!");
    return ~150;
}