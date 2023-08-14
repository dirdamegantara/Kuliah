#include <iostream>
using namespace std;

struct Node
{
    string nama_mahasiswa;
    string jurusan;
    int tahun_angkatan;
    Node* Next;
};

void Clear(Node* node)
{
    node->Next = NULL;
    cout << "Data dikosongkan" << endl << endl;
}

bool IsEmpty(Node* node)
{
    if (node->Next == NULL)
    {
        return true;
    }
    return false;
}

void Insert(Node* node, string nama, string jurusan, int tahun)
{
    while (node->Next != NULL)
    {
        node = node->Next;
    }
    node->Next = new Node;
    node->Next->nama_mahasiswa = nama;
    node->Next->jurusan = jurusan;
    node->Next->tahun_angkatan = tahun;
    node->Next->Next = NULL;
}

void RemoveTail(Node* node)
{
    if (!IsEmpty(node))
    {
        while (node->Next->Next != NULL)
        {
            node = node->Next;
        }
        delete node->Next;
        node->Next = NULL;
    }
}

void Display(Node* node)
{
    while (node->Next != NULL)
    {
        node = node->Next;
        cout << "Nama\t: " << node->nama_mahasiswa << endl << "Jurusan\t: " << node->jurusan << endl << "Tahun\t: " << node->tahun_angkatan << endl << endl;
    }
    cout << "NULL" << endl << endl;
}

int main()
{
	cout << "Dirda Megantara" << endl;
	cout << "F55122026" << endl << endl;
    Node* node = new Node;
    Clear(node);
    Insert(node, "Dirda Megantara", "Informatika", 2022);
    Insert(node, "Syafaat Ramadhan", "Informatika", 2022);
    Insert(node, "Nyoman DwipaPutra", "Informatika", 2022);
    Insert(node, "Christian", "Sistem Informasi", 2022);
    Insert(node, "Charlie", "Informatika", 2020);
    cout << "Data awal:" << endl;
    Display(node);
    RemoveTail(node);
    cout << "Data setelah removetail:" << endl;
    Display(node);
    system("PAUSE");
}

// Buatlah single linked list yang memiliki 3 data yaitu nama_mahasiswa, jurusan, tahun_angkatan, dan 1 rujukan(next).
// Terdapat 4 fungsi yang bernama clear(), isempty(), insert(), removetail()

