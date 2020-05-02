#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

class Time{
	public:
		int* min;
		int* sec;
		//Прототипы функций
		void write_to_file(int* min, int* sec);														//Запись в файл
		void read_to_file();																		//Чтение из файла
		void delete_interval(int* min, int* sec, int delete_min, int delete_sec);					//Удалить интервалы(Идет обнуление)
		void decrease_the_interval(int* min, int* sec, int decrease_min, int decrease_sec);			//Вычитание из интервалов
		int* add_k_element_min(int k, int* min);													//Добавить К минут в начало 
		int* add_k_element_sec(int k, int* sec);													//Добавить К секунд в начало
		
																								
		Time(){																						//Конструктор и объявлением динамического массива
			min = new int[10];
			sec = new int[10];
			for(int i = 0; i < 10; i++){															//И инициализирование случайными значениями от 1 до 59
				min[i] = rand()%59+1;
				sec[i] = rand()%59+1;
			}
		}
		
};
