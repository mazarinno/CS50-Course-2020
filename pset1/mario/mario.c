#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("Height:\n");

    while (height <= 0 || height > 8)
    {
        height = get_int("Height:\n");
    }


     if (height == 1)
         {
            printf("#  #\n");
        }
        else if (height == 2)
        {
            printf(" #  #\n");
            printf("##  ##\n");
        }
        else if (height == 3)
        {
            printf("  #  #\n");
            printf(" ##  ##\n");
            printf("###  ###\n");
        }
        else if (height == 4)
        {
            printf("   #  #\n");
            printf("  ##  ##\n");
            printf(" ###  ###\n");
            printf("####  ####\n");
        }
        else if (height == 5)
        {
            printf("    #  #\n");
            printf("   ##  ##\n");
            printf("  ###  ###\n");
            printf(" ####  ####\n");
            printf("#####  #####\n");
        }
        else if (height == 6)
        {
            printf("     #  #\n");
            printf("    ##  ##\n");
            printf("   ###  ###\n");
            printf("  ####  ####\n");
            printf(" #####  #####\n");
            printf("######  ######\n");
        }
        else if (height == 7)
        {
            printf("      #  #\n");
            printf("     ##  ##\n");
            printf("    ###  ###\n");
            printf("   ####  ####\n");
            printf("  #####  #####\n");
            printf(" ######  ######\n");
            printf("#######  #######\n");
        }
        else if (height == 8)
          {
            printf("       #  #\n");
            printf("      ##  ##\n");
            printf("     ###  ###\n");
            printf("    ####  ####\n");
            printf("   #####  #####\n");
            printf("  ######  ######\n");
            printf(" #######  #######\n");
            printf("########  ########\n");
          }
}