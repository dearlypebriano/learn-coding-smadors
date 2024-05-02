#include <iostream> // header file untuk input output
#include <sstream>  // header file untuk istringstream

int main() {
    char name[100];  // variable untuk menyimpan nama
    char alamat[100]; // variable untuk menyimpan alamat
    int kelas; // variable untuk menyimpan kelas
    std::string input; // variable untuk menyimpan input dari user
    std::string whole_input; // variable untuk menyimpan seluruh input

    printf("Masukkan nama: "); // output ke layar
    getline(std::cin, input); // mengambil input dari user dan disimpan di variable input
    whole_input += "Nama: " + input + "\n"; // menambahkan input nama ke variable whole_input
    std::istringstream iss_name(input); // membuat istringstream untuk memproses input nama

    iss_name >> name; // membaca input nama dan disimpan di variable name
    iss_name.str(std::string()); // mengosongkan istringstream
    iss_name.clear(); // me-clear stream, agar bisa digunakan lagi

    printf("Masukkan alamat: "); // output ke layar
    getline(std::cin, input); // mengambil input dari user dan disimpan di variable input
    whole_input += "Alamat: " + input + "\n"; // menambahkan input alamat ke variable whole_input
    std::istringstream iss_alamat(input); // membuat istringstream untuk memproses input alamat

    iss_alamat >> alamat; // membaca input alamat dan disimpan di variable alamat
    iss_alamat.str(std::string()); // mengosongkan istringstream
    iss_alamat.clear(); // me-clear stream, agar bisa digunakan lagi

    printf("Masukkan kelas: "); // output ke layar
    scanf("%d", &kelas); // mengambil input dari user dan disimpan di variable kelas
    whole_input += "Kelas: " + std::to_string(kelas) + "\n"; // menambahkan input kelas ke variable whole_input

    printf("%s", whole_input.c_str()); // mencetak seluruh input yang sudah diproses

    printf("Hello %s, alamat %s, kelas %d\n", name, alamat, kelas); // mencetak seluruh input yang sudah diproses

    return 0; // mengembalikan 0 sebagai exit code program
}

