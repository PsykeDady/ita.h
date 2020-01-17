#include "ita.h"

#include <stdio.h>

int inizio(){
    int i;
    perogni(i=0;i<5;i++){
        stampami("i=%d\n",i);
    }
    mentre(i>=0){
        stampami("%d",i--);
    }
    stampaacapo("");
}
