//
//  Random.c
//  Created by william yang on 8/29/24.
//

#include "random.h"
#include <stdlib.h>
#include <time.h>
char randchar(void){
    char randomChar = (rand() % 26)+65;
    return randomChar;
}






