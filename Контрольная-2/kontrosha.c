#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    char* name;
    int year;
}Wonder;

typedef struct{
    char* name;
    char* country;
    Wonder* wonders;
}City;

Wonder create_wonder(char* wonder_name, int wonder_year){
    char* tmp = (char*)malloc(strlen(wonder_name) + 1);
    if (tmp != NULL){
        strcpy(tmp, wonder_name);
    }
    else{
        Wonder failed = {0};
        return failed;
    }
    Wonder wonder = {.name = tmp, .year = wonder_year};
    return wonder;
}

void free_wonder(Wonder* wonder){
    if (wonder != NULL){
        free(wonder->name);
        wonder->name = NULL;
    }
}

City create_city(char* city_name, char* city_country){
    char* tmp1 = (char*)malloc(strlen(city_name) + 1);
    char* tmp2 = (char*)malloc(strlen(city_country) + 1);
    Wonder* wonders = NULL;
    if ((tmp1 != NULL) && (tmp2 != NULL)){
        strcpy(tmp1, city_name);
        strcpy(tmp2, city_country);
    }
    //чуток подправить с выделением памяти и удалением при ошибке.
    else{
        City failed = {0};
        return failed;
    }
    City city = {.name = tmp1, .country = tmp2, .wonders = wonders};
    return city;
}

void free_city(City* city){
    if (city != NULL){
        free(city->name);
        free(city->country);
        city->name = NULL;
        city->country = NULL;
    }
}

int main(){
    Wonder wonder_1 = create_wonder("Проверкаы", 1337);
    printf(wonder_1.name);
    printf("\n");
    printf("%d", strlen(wonder_1.name));
    printf("\n");

}
