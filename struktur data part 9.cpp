#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> bukuStack;
    int pilihan;
    
    while (true) {
    	cout << "\n===========================================\n";
        cout << "    Pilih operasi yang ingin dilakukan\n";
        cout << "===========================================\n";
        cout << "1. Push (tambahkan buku)\n";
        cout << "2. Pop (hapus buku teratas)\n";
        cout << "3. Peek (lihat buku teratas)\n";
        cout << "4. isEmpty (periksa apakah tumpukan kosong)\n";
        cout << "5. Size (jumlah buku dalam tumpukan)\n";
        cout << "6. Quit (keluar dari program)\n";
        cout << "===========================================\n";
        cout << "Masukkan pilihan (1-6): ";
        cin >> pilihan;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

        if (pilihan == 1) {
            string buku;
            cout << "Masukkan judul buku: ";
            cin.ignore();
            getline(cin, buku);
            bukuStack.push(buku);
            cout << "Buku \"" << buku << "\" telah ditambahkan ke tumpukan.\n";
        } else if (pilihan == 2) {
            if (!bukuStack.empty()) {
                cout << "Buku \"" << bukuStack.top() << "\" dihapus dari tumpukan.\n";
                bukuStack.pop();
            } else {
                cout << "Tumpukan kosong, tidak ada buku untuk dihapus.\n";
            }
        } else if (pilihan == 3) {
            if (!bukuStack.empty()) {
                cout << "Buku teratas adalah \"" << bukuStack.top() << "\".\n";
            } else {
                cout << "Tumpukan kosong, tidak ada buku untuk dilihat.\n";
            }
        } else if (pilihan == 4) {
            if (bukuStack.empty()) {
                cout << "Tumpukan kosong.\n";
            } else {
                cout << "Tumpukan tidak kosong.\n";
            }
        } else if (pilihan == 5) {
            cout << "Jumlah buku dalam tumpukan: " << bukuStack.size() << "\n";
        } else if (pilihan == 6) {
            cout << "Program selesai.\n";
            break;
        } else {
            cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    }
    
    return 0;
}

