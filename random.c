//
//  Random.c
//  Created by william yang on 8/29/24.
//

#include "Random.h"
#include <stdlib.h>

char randchar(void){
    char randomChar = (rand() % 26)+65;
    return randomChar;
}






