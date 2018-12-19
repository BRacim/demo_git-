/* 
 * File:   Tempo.c
 * Release: v0.0_0
 * Author: julien.rave
 * 
 * Created on 25 avril 2017, 01:06
 */

#include "Tempo.h"
#include <p24FJ256GA106.h>
void Tempo100ms()
{   
    Tempo_65535();
}

void Tempo200ms()
{   
        Tempo_65535();
        Tempo_65535();
  
}

void Tempo600ms()
{   
        Tempo200ms();
        Tempo200ms();
        Tempo200ms();
 
}

void Tempo1sec()
{   ;
        Tempo_65535();
        Tempo_65535();
        Tempo_65535();
        Tempo_65535();
        Tempo_65535();
        Tempo_65535();
        Tempo_65535();
        Tempo_65535();
        Tempo_65535();
        Tempo_65535();
    
}

void Tempo_65535()
{   

    int i;
    for ( i=0; i<65535; i++ )
    {   
        Nop();
    }

}
void Tempo_8192 ()
{   
    int i;
    for ( i=0; i<8192; i++ )
    {   
        Nop();
    }
}
void Tempo20ms()
{
    Tempo_32768 ();
}
void Tempo_32768 ()
{   

    int i;
    for ( i=0; i<32768; i++ )
    {   
        Nop();
    }

}
void Tempo_24000 ()
{   
    int i;
    for ( i=0; i<24000; i++ )
    {   
        Nop();
    }
}