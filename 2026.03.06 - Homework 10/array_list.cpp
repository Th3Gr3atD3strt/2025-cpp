#include <iostream>
#include <cstdio>

class ArrayList{
    
public:
    int capacity;
    int current_volume;
    int* arr;
    
ArrayList(int size){
    capacity = size;
    current_volume = 0;
    arr = new int[size]();
    
}
~ArrayList(){
    capacity = 0;
    delete[] arr;
} 

void extent(int new_capacity){
    int* new_arr = new int[new_capacity]();
    for (int i = 0; i < current_volume; i++){
        new_arr[i] = arr[i];
    }
    delete [] arr;
    arr = new_arr;
    capacity = new_capacity;
}

void removee(int index){
    if (index == current_volume - 1){
        arr[index] = 0;
        current_volume -= 1;
    }
    else if(index >= 0 && index < current_volume - 1){
        for (int i = index; i < current_volume ; i++){
            arr[i] = arr[i + 1];
        }
        arr[current_volume] = 0;
        current_volume -= 1;
    }
}

void add(int elem){
    if (current_volume == capacity){
        this->extent(capacity*2);
    }
    arr[current_volume] = elem;
    current_volume += 1;
    
}

void set(int index, int value){
    if (index < current_volume && index >= 0){
        arr[index] = value;
    }
    else if (index == current_volume){
        this->add(value);
    }
    else{
        std::cout << "Неправильный индекс!!!" << std::endl;
    }
}

void insert(int index, int value){
    if (current_volume == capacity){
        this->extent(capacity*2);
    }
    if (index >= 0 and index < current_volume){
        int tmp1 = arr[index];
        int tmp2;
        arr[index] = value;
        for (int i = index + 1; i <= current_volume; i++){
            tmp2 = arr[i];
            arr[i] = tmp1;
            tmp1 = tmp2;
        }
        current_volume += 1;
    }
}


void clear(){
    current_volume = 0;
}

bool contains(int elem){
    for (int i = 0; i < current_volume; i++){
        if (arr[i] == elem){
            return true;
        }
    }
    return false;
}

int get(int index){
    if (index < current_volume && index >= 0){
        return arr[index];
    }
    else {
        std::cout << "Неправильный индекс!!!";
        return 1337;
    }
}

int get_size(){
    return current_volume;
}

void print(){
    for (int i = 0; i < current_volume; i++){
        std::cout << i << ":  " << arr[i] << std::endl ;
    }
    std::cout << "Вместимость " << capacity << std::endl <<
    "Количнество элементов " << current_volume << std::endl;
}

void print_with_zeros(){
    for (int i = 0; i < capacity; i++){
        std::cout << i << ":  " << arr[i] << std::endl ;
    }
    std::cout << "Вместимость " << capacity << std::endl <<
    "Количнество элементов " << current_volume << std::endl;
}

void file_write(const char* path){
    FILE* file_ptr = NULL; 
    file_ptr = fopen(path, "rb");
    if (file_ptr == NULL){
        std::cout << "Ошибка открытия файла";
    }
    fwrite(arr, sizeof(int), current_volume, file_ptr);
    fclose(file_ptr);
}

void file_read(const char* path, int file_size){
    //необходимо заранее знать количество элементов массива в бинаринике
    int* new_arr = new int[file_size]();
    FILE* file_ptr = NULL; 
    file_ptr = fopen(path, "wb");
    if (file_ptr == NULL){
        std::cout << "Ошибка открытия файла";
    }
    fread(new_arr, sizeof(int), file_size, file_ptr);
    delete [] arr;
    current_volume = 0;
    capacity = 0;
    arr = new_arr;
    current_volume = file_size;
    capacity = file_size;
    fclose(file_ptr);
}
    
};

int main(){

    //Очень много баловства с методами
    ArrayList arrr(1);
    arrr.add(0);
    arrr.add(1);
    arrr.add(2);
    arrr.add(3);
    arrr.add(4);
    arrr.add(5);
    arrr.add(6);
    std::cout << "Вместимость " << arrr.capacity <<  "  Количнество элементов " << arrr.current_volume << std::endl;
    arrr.add(7);
    arrr.add(8);
    //arrr.print_with_zeros();
    arrr.removee(9);
    //arrr.set(8, 143);
    //arrr.set(9, 1431);
    //arrr.set(675, 1433231);
    //std::cout << arrr.get(465);
    //int c = arrr.contains(1436751);
    //arrr.insert(9, 876);
    //arrr.insert(0, 876);
    arrr.print();
    std::cout << arrr.contains(1431);
    return 0;
}
