#include<iostream>
#include<sstream>

int main() {
    char name[100];
    int umur;
    std::string input;
    std::string whole_input;

    printf("Masukkan nama: ");
    getline(std::cin, input);
    whole_input += "Nama: " + input + "\n";
    std::istringstream iss_name(input);

    iss_name >> name;
    iss_name.str(std::string());
    iss_name.clear();

    printf("Masukkan umur: "); 
    scanf("%d", &umur); 
    whole_input += "Umur: " + std::to_string(umur) + "\n"; 

    if (umur < 20) {
        if (umur < 8) {
            whole_input += "Status: Remaja (Balita)\n";
        } else if (umur < 5) {
            whole_input += "Status: Remaja (Bayi)\n";
        } else {
            whole_input += "Status: Remaja\n";
        }
    } else {
        whole_input += "Status: Tua\n"; // contoh implementasi sendiri
    }

    printf("%s", whole_input.c_str());

    printf("Hello %s, Status %s\n`", name, (umur < 20) ? "Remaja" : "Tua");

    return 0;
}
