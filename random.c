//
//  Random.c
//  Created by william yang on 8/29/24.
//

#include "Random.h"
#include <stdlib.h>
#include <time.h>
char randchar(void){
    srand(time(NULL));
    char randomChar = (rand() % 26)+65;
    return randomChar;
}






