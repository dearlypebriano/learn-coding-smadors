/**
 * Contoh program untuk membuat pengkondisian
 * 
 * Author: Dearly Febriano Irwansyah
 * Date: Kamis, 2-Mei-2024 (22.40 WIB - 22.45 WIB)
 * Proccess: Coding (2 Minutes), Debugging and Run (2.5 Minutes), (30 Second Up To Github)
 */
#include<iostream>
#include<sstream>

int main() {
    char name[100]; // variabel untuk menyimpan nama
    int umur; // variabel untuk menyimpan umur
    std::string input; // variabel untuk menyimpan input dari user
    std::string whole_input; // variabel untuk menyimpan seluruh input

    // ambil input dari user untuk nama
    printf("Masukkan nama: ");
    getline(std::cin, input); // mengambil input dari user dan disimpan di variable input
    whole_input += "Nama: " + input + "\n"; // menambahkan input nama ke variable whole_input
    std::istringstream iss_name(input); // membuat istringstream untuk memproses input nama

    iss_name >> name; // membaca input nama dan disimpan di variable name
    iss_name.str(std::string()); // mengosongkan istringstream
    iss_name.clear(); // me-clear stream, agar bisa digunakan lagi

    // ambil input dari user untuk umur
    printf("Masukkan umur: "); 
    scanf("%d", &umur); 
    whole_input += "Umur: " + std::to_string(umur) + "\n"; 

    // melakukan pengkondisian berdasarkan umur
    // jika umur <= 40, maka dia statusnya dewasa
    if (umur <= 40) {
        whole_input += "Status: Dewasa\n";
    }
    // jika umur > 40, maka dia statusnya Tua
    else {
        whole_input += "Status: Tua\n";
    }

    // mencetak seluruh input yang sudah diproses
    printf("%s", whole_input.c_str());

    // mencetak seluruh input yang sudah diproses, tetapi dengan cara yang lebih sederhana
    printf("Hello %s, Status %s\n", name, (umur <= 40) ? "Dewasa" : "Tua");

    return 0;
}