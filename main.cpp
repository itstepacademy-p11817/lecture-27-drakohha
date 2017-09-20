#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
struct my_st_4 {
	const char* name;
	const char* klass;
	const char* kli4ka;
	
};
void fun_vvod(my_st_4* st_cat) {
	

}

int main() {

	int flag_menu = 0;

	do {
		printf("\n Vvedite nomer zadaci \n");
		std::cin >> flag_menu;
		enum color_t { red = 1, blue = 2, yelloy = 3 };
		enum firma_t{bosh=1,adidas=2,etc=3};
		enum model_t{pr9m=1,krygla9=2,ploskii=3};
		int ind ;
		
		if (flag_menu == 1) {
			printf("\n Structura stiralnoi mahini : \n");
			
			struct my_st {
				firma_t firma;				
				color_t color;
				int hirina;
				int dlina;
				int vusota;
				int mohnost;
				int skorost;
				int temper;
			};
			struct my_st st_1 = { bosh,red,100,50,50,500,25,40};
			std::cout << "\n" << "Vvedite dannue ob stiralnoi mahine : " << "\n";
			std::cout << "\n" << "Vvedite firmu (bosh-1,adidas-2,etc-3) = ";
			std::cin >> ind;
			st_1.firma = (firma_t)ind;
			std::cout << "\n" << "Vvedite color=(red-1,blue-2,yelloy-3) =   ";
			std::cin >> ind;
			st_1.color = (color_t)ind;
			std::cout <<"\n" <<"Vvedite hirinu= ";
			std::cin >> st_1.hirina;
			std::cout << "\n" << "Vvedite dlina= ";
			std::cin >> st_1.dlina;
			std::cout << "\n" << "Vvedite vusota= ";
			std::cin >> st_1.vusota;
			std::cout << "\n" << "Vvedite mohnost= ";
			std::cin >> st_1.mohnost;
			std::cout << "\n" << "Vvedite skorost= ";
			std::cin >> st_1.skorost;
			std::cout << "\n" << "Vvedite temperatura= ";
			std::cin >> st_1.temper;
			std::cout << "\n";
			
			

			printf("polu4enaii resultat : firma = %d color= %d hirina= %d dlina= %d \n vusota= %d mohnost= %d skorost= %d temperatura= %d ", st_1.firma, st_1.color, st_1.hirina, st_1.dlina, st_1.vusota, st_1.mohnost, st_1.skorost, st_1.temper);


		}



		if (flag_menu == 2) {

			struct my_st_2 {
				firma_t firma;
				model_t model;
				color_t color;
				int min_temp;
				int max_temp;
				int par;
				int mohnost;
			};
			printf("\n Structura ytuga : \n");
			struct my_st_2 st_2;

			std::cout << "\n" << "Vvedite dannue ob ytuge : " << "\n";
			std::cout << "\n" << "Vvedite firmu (bosh-1,adidas-2,etc-3) = ";
			std::cin >> ind;
			st_2.firma = (firma_t)ind;
			std::cout << "\n" << "Vvedite model (pr9m=1,krygla9=2,ploskii=3) = " << "\n";
			std::cin >> ind;
			st_2.model = (model_t)ind;
			std::cout << "\n" << "Vvedite color=(red-1,blue-2,yelloy-3) =   ";
			std::cin >> ind;
			st_2.color = (color_t)ind;
			std::cout << "\n" << "Vvedite min temperaturu = ";
			std::cin >> st_2.min_temp;
			std::cout << "\n" << "Vvedite max temperaturu = ";
			std::cin >> st_2.max_temp;
			std::cout << "\n" << "Vvedite ispolosovatie para (1-da,0-net) = ";
			std::cin >> st_2.par;
			std::cout << "\n" << "Vvedite mohnost = ";
			std::cin >> st_2.mohnost;

			printf("polu4enaii resultat : firma = %d model = %d color= %d min temperatura= %d \n max temperatura= %d  ispolosovanie para= %d mohnost= %d  ", st_2.firma, st_2.model,st_2.color, st_2.min_temp, st_2.max_temp,st_2.par, st_2.mohnost);


		}

		if (flag_menu == 3) {

			struct my_st_3 {
				firma_t firma;
				
				color_t color;
				int ekran;
				int ram;
				int proc;
				
			};
			printf("\n Structura telefona : \n");
			struct my_st_3 st_3;

			std::cout << "\n" << "Vvedite dannue ob telefone : " << "\n";
			std::cout << "\n" << "Vvedite firmu (bosh-1,adidas-2,etc-3) = ";
			std::cin >> ind;
			st_3.firma = (firma_t)ind;
			
			std::cout << "\n" << "Vvedite color=(red-1,blue-2,yelloy-3) =   ";
			std::cin >> ind;
			st_3.color = (color_t)ind;
			std::cout << "\n" << "Vvedite nalicie ekrana (1-da,0-net) = ";
			std::cin >> st_3.ekran;
			std::cout << "\n" << "Vvedite kol pam9ti = ";
			std::cin >> st_3.ram;
			std::cout << "\n" << "Vvedite 4astota processora = ";
			std::cin >> st_3.proc;
			
			printf("polu4enaii resultat : firma = %d  color= %d nali4ie ekrana= %d \n kol pam9ti= %d 4astota proca= %d ", st_3.firma, st_3.color, st_3.ekran, st_3.ram, st_3.proc);

		}


		if (flag_menu == 4) {

			printf("\n Structura hivotnogo : \n");

			
			int flag = 0;
			do {
				std::cout << "\n" << "Menu polsovatel9 : " << "\n";
				std::cout << "\n" << "1- sozdatb kota" << "\n" << "2-sozdatb sobaky" << "\n" << "3-vuvesti dannue" << "\n" << "4-Podatb golos" << "\n" << "0-vuhod" << "\n";
				std::cin >> flag;
				struct my_st_4 st_tt;
				struct my_st_4 st_cat;
					st_cat.name = "cat";
					st_cat.klass = "cat's";
					st_cat.kli4ka = "barsik";
				struct my_st_4 st_dog;
					st_dog.name = "Dog";
					st_dog.klass = "Dog's";
					st_dog.kli4ka = "bobik";


				if (flag == 1) {
					
					
					st_tt.name = st_cat.name;
					st_tt.klass = st_cat.klass;
					st_tt.kli4ka = st_cat.kli4ka;

				}
				if (flag == 2) {
					
					
					st_tt.name = st_dog.name;
					st_tt.klass = st_dog.klass;
					st_tt.kli4ka = st_dog.kli4ka;
				}
				if (flag == 3) {
					printf("polu4enaii resultat : name= %s klass= %s kli4ca= %s", st_tt.name, st_tt.klass, st_tt.kli4ka);
				}
				if (flag == 4) {
					if (st_tt.name == "cat") {
						printf("Meow!");
					}
					else {
						printf("gav gav!");
					}
				}

			
			
			} while (flag != 0);





		}


	} while (flag_menu != 0);



}