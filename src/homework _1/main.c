#include <stdio.h>

int main(){
    FILE *file = open("input.csv", "r");
    if (file == NULL) {
        return -1;
    }
    char *data[100] = {0};
    While (!feof(file)){
        char *buff = malloc(sizeof(char) * 100);
    }
    
}

