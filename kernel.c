#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"
char jmain()
{
       clearScreen();
       print("Welcome to JamOS\nPlease enter a command\n");
       while (1)
       {
                print("\nJDOS> ");
                
                string ch = readStr();
                if(strEql(ch,"cmd"))
                {
                        print("\nYou are allready in cmd\n");
                }
                else if(strEql(ch,"clear"))
                {
                        clearScreen();
                }                
                else
                {
                        print("\nBad command!\n");
                }
                
                print("\n");        
       }
        
}
