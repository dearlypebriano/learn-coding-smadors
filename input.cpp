#include <iostream>
#include <sstream>

int main() {
    char name[100], alamat[100];
    int kelas;
    std::string input, whole_input;

    printf("Masukkan nama: ");
    getline(std::cin, input);
    whole_input += "Nama: " + input + "\n";
    std::istringstream iss_name(input);

    iss_name >> name;
    iss_name.str(std::string());
    iss_name.clear();

    printf("Masukkan alamat: ");
    getline(std::cin, input);
    whole_input += "Alamat: " + input + "\n";
    std::istringstream iss_alamat(input);

    iss_alamat >> alamat;
    iss_alamat.str(std::string());
    iss_alamat.clear();

    printf("Masukkan kelas: ");
    scanf("%d", &kelas);
    whole_input += "Kelas: " + std::to_string(kelas) + "\n";

    printf("%s", whole_input.c_str());

    printf("Hello %s, alamat %s, kelas %d\n", name, alamat, kelas);

    return 0;
}

