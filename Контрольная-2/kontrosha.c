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
    int amount;
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
        if (tmp1 == NULL){
        City failed = {0};
        return failed;
    }
    char* tmp2 = (char*)malloc(strlen(city_country) + 1);
    if (tmp2 == NULL){
        City failed = {0};
        free(tmp1);
        return failed;
    }
    Wonder* wonders = NULL;
    strcpy(tmp1, city_name);
    strcpy(tmp2, city_country);
    City city = {.name = tmp1, .country = tmp2, .wonders = wonders, .amount = 0};
    return city;
}

void free_city(City* city){
    if (city != NULL){
        free(city->name);
        free(city->country);
        city->name = NULL;
        city->country = NULL;
        free(city->wonders);
    }
}


void add_wonder(City* city_ptr, Wonder* wonder_ptr ){
    int amount = city_ptr->amount;
    Wonder* tmp = realloc(city_ptr->wonders, (amount + 1) * sizeof(Wonder));
    if (tmp == NULL){
        printf("Ошибка выделения памяти");
    }
    tmp[amount] = *wonder_ptr;
    city_ptr->wonders = tmp;
    city_ptr->amount += 1;
}

void print_cities_and_wonders(City* cities, int num){
    for (int i = 0; i < num; i++){
        City current_city = cities[i];
        printf("%s : ", current_city.name);
        for (int j = 0; j < current_city.amount; j++){
            printf("%s, ", current_city.wonders[j] );
        }
        printf("\n");
    }
}

void find_max_city(City* cities, int num){
    int maximum = 0;
    City city = *cities;
    for (int i = 0; i < num; i++){
        if (cities[i].amount > maximum){
            maximum = cities[i].amount;
            city = cities[i];
        }
    }
    printf(city.name);
}




int main(){
    Wonder wonder_1 = create_wonder("Дост 1", 1);
    Wonder wonder_2 = create_wonder("Дост 2", 2);
    Wonder wonder_3 = create_wonder("Дост 3", 3);
    City city_1 = create_city("Город 1", "Россия");
    City city_2 = create_city("Город 2", "Россия");
    add_wonder(&city_1, &wonder_1);
    add_wonder(&city_2, &wonder_2);
    add_wonder(&city_2, &wonder_3);
    City cities[2] = {city_1, city_2};
    print_cities_and_wonders(cities, 2);
    printf("Крупнейший город: ");
    find_max_city(cities, 2);
    free_wonder(&wonder_1);
    free_wonder(&wonder_2);
    free_wonder(&wonder_3);
    free_city(&city_1);
    free_city(&city_2);
    return 0;
}
