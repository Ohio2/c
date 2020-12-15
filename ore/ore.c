#include <stdio.h>
#include <stdlib.h>
/*Cheat sheet;
scanf: Read input
int: variable
*/
int main()
{
    /*Ore but it's core. Get it, hahaha. C (Programming language) + Ore 
    it's spelled <c-ore>*/
    char df = %1;
    switch(df)
    {
        case '-Sa' :
        /*i know typing in -Sa can be difficult, but as i cannot do anything about it, it'll have to do*/
            system("git clone aur.archlinux.org/%2 $HOME/.ore && cd %2 && makepkg -sic && cd - && rm -rf %2 && cd -");
        case 'S' :
            system("sudo pacman -S %2");
        case 'R' : 
            system("sudo pacman -R %2");
        case 'H' :
            printf("Ohio2's handy-dandy AUR Helper & Pacman Wrapper rewritten in C!");
            system("pacman -H");
        case 'V' :
            printf("c.rev.1");
        case 'Syu' :
            system("sudo pacman -Syu");
        case 'Sy' : 
            system("sudo pacman -Sy");
    }
}