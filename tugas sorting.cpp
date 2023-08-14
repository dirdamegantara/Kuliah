#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int pilihan = 0;
int jumlahdata = 0;

// Fungsi selection_sort
void selection_sort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
	{
        int terendah = i;
        for (int j = i + 1; j < n; j++) 
		{
            if (arr[j] < arr[terendah]) 
			{
                terendah = j;
            }
        }
        // Tukar nilai pada indeks terendah dengan nilai dari indeks yang belum terurut
        int temp = arr[i];
        arr[i] = arr[terendah];
        arr[terendah] = temp;

        // Menampilkan array setelah setiap iterasi
        cout << "Iterasi " << i + 1 << ": ";
        for (int k = 0; k < n; k++) 
		{
            cout << "[" << arr[k] << "] ";
        }
        cout << endl;
    }
}

// Fungsi quick_sort
void quick_sort(int arr[], int low, int high) 
{
    if (low < high) 
	{
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++) 
		{
            if (arr[j] <= pivot) 
			{
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int pivot_index = i + 1;

        // Menampilkan array setelah setiap iterasi
        cout << "Pivot = " << arr[pivot_index] << ": ";
        for (int k = low; k <= high; k++) 
		{
            cout << "[" << arr[k] << "] ";
        }
        cout << endl;

        quick_sort(arr, low, pivot_index - 1); // Panggil rekursif untuk bagian sebelum pivot
        quick_sort(arr, pivot_index + 1, high); // Panggil rekursif untuk bagian setelah pivot
    }
}

// Fungsi merge untuk digunakan pada Fungsi merge_sort()
void merge(int arr[], int left[], int left_size, int right[], int right_size) 
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < left_size && j < right_size) 
	{
        if (left[i] <= right[j]) 
		{
            arr[k++] = left[i++];
        } 
		else 
		{
            arr[k++] = right[j++];
        }
    }

    while (i < left_size) 
	{
        arr[k++] = left[i++];
    }

    while (j < right_size) 
	{
        arr[k++] = right[j++];
    }
}

// Fungsi merge_sort
void merge_sort(int arr[], int n) 
{
    if (n > 1) 
	{
        int mid = n / 2;
        int left[mid];
        int right[n - mid];
        for (int i = 0; i < mid; i++) 
		{
            left[i] = arr[i];
        }
        for (int i = mid; i < n; i++) 
		{
            right[i - mid] = arr[i];
        }

        merge_sort(left, mid); // Panggil rekursif untuk bagian kiri
        merge_sort(right, n - mid); // Panggil rekursif untuk bagian kanan

        merge(arr, left, mid, right, n - mid); // Gabungkan hasil rekursif

        // Menampilkan array setelah setiap iterasi
        cout << "Array setelah merge: ";
        for (int i = 0; i < n; i++) 
		{
            cout << "[" << arr[i] << "] ";
        }
        cout << endl;
    }
}

// Fungsi radix_sort
void radix_sort(int arr[], int n)
{
    int max = arr[0]; // Cari nilai maksimum dalam array
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int exp = 1; max / exp > 0; exp *= 10)
    {
        int output[n]; // Array sementara untuk menyimpan hasil pengurutan
        int count[10] = {0}; // Array untuk menghitung jumlah angka pada setiap digit

        // Menghitung jumlah angka pada setiap digit
        for (int i = 0; i < n; i++)
        {
            count[(arr[i] / exp) % 10]++;
        }

        // Menghitung posisi akhir setiap digit pada array output
        for (int i = 1; i < 10; i++)
        {
            count[i] += count[i - 1];
        }

        // Menyusun angka-angka pada array output
        for (int i = n - 1; i >= 0; i--)
        {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }

        // Menyalin array output ke array asal
        for (int i = 0; i < n; i++)
        {
            arr[i] = output[i];
        }

        // Menampilkan array setelah setiap iterasi
        cout << "Iterasi " << exp << ": ";
        for (int i = 0; i < n; i++)
        {
            cout << "[" << arr[i] << "] ";
        }
        cout << endl;
    }
}

// Fungsi shell_sort
void shell_sort(int arr[], int n) 
{
    // Menentukan increment atau gap untuk pengurutan
    for (int gap = n / 2; gap > 0; gap /= 2) 
	{
        // Melakukan insertion sort dengan increment atau gap yang ditentukan
        for (int i = gap; i < n; i++) 
		{
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) 
			{
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }

        // Menampilkan array setelah setiap iterasi
        cout << "Array setelah gap " << gap << ": ";
        for (int i = 0; i < n; i++) 
		{
            cout << "[" << arr[i] << "] ";
        }
        cout << endl;
    }
}

//Fungsi cycle_sort
void cycle_sort(int arr[], int n) 
{
    for (int cycle_start = 0; cycle_start < n - 1; cycle_start++) 
	{
        int item = arr[cycle_start];
        int pos = cycle_start;
        for (int i = cycle_start + 1; i < n; i++) 
		{
            if (arr[i] < item) 
			{
                pos++;
            }
        }
        if (pos == cycle_start) 
		{
            continue; // Jika item sudah berada di posisi yang benar, lanjut ke iterasi selanjutnya
        }
        while (item == arr[pos]) 
		{
            pos++; // Cari posisi yang sesuai untuk item
        }
        if (pos != cycle_start) 
		{
            int temp = item;
            item = arr[pos];
            arr[pos] = temp; // Tukar item dengan elemen di posisi yang sesuai
        }
        while (pos != cycle_start) 
		{
            pos = cycle_start;
            for (int i = cycle_start + 1; i < n; i++) 
			{
                if (arr[i] < item) 
				{
                    pos++; // Cari posisi yang sesuai untuk item
                }
            }
            while (item == arr[pos]) 
			{
                pos++;
            }
            if (item != arr[pos]) 
			{
                int temp = item;
                item = arr[pos];
                arr[pos] = temp; // Tukar item dengan elemen di posisi yang sesuai
            }
        }

        // Menampilkan array setelah setiap iterasi
        cout << "Cycle Start di indeks ke-" << cycle_start + 1 << ": ";
        for (int k = 0; k < n; k++) 
		{
            cout << "[" << arr[k] << "] ";
        }
        cout << endl;
    }
}

void menupilihan(int pilihan) 
{
    switch (pilihan) 
	{
    case 1:
        cout << "\n\n================";
        cout << "\nSelection Sort";
        cout << "\n================";
        cout << "\nMasukkan Jumlah Data: ";
        cin >> jumlahdata;
        {
            int arr[jumlahdata];
            for (int i = 0; i < jumlahdata; i++) 
			{
                cout << "Data ke-" << i + 1 << " = ";
                cin >> arr[i];
            }
            cout << "\nData sebelum diurutkan: ";
            for (int i = 0; i < jumlahdata; i++) 
			{
                cout << "[" << arr[i] << "] ";
            }
            cout << "\n";
            selection_sort(arr, jumlahdata); // Panggil fungsi selection_sort()
            cout << "Data setelah diurutkan: ";
            for (int i = 0; i < jumlahdata; i++) 
			{
                cout << "[" << arr[i] << "] ";
            }
            cout << "\n\n\n";
        }
        break;
    case 2:
        cout << "\n\n================";
        cout << "\nQuick Sort";
        cout << "\n================";
        cout << "\nMasukkan Jumlah Data: ";
        cin >> jumlahdata;
        {
            int arr[jumlahdata];
            for (int i = 0; i < jumlahdata; i++) 
			{
                cout << "Data ke-" << i + 1 << " = ";
                cin >> arr[i];
            }
            cout << "\nData sebelum diurutkan: ";
            for (int i = 0; i < jumlahdata; i++) 
			{
                cout << "[" << arr[i] << "] ";
            }
            cout << "\n";
            quick_sort(arr, 0, jumlahdata - 1);
            cout << "Data setelah diurutkan: ";
            for (int i = 0; i < jumlahdata; i++) 
			{
                cout << "[" << arr[i] << "] ";
            }
            cout << "\n\n\n";
        }
        break;
    case 3:
        cout << "\n\n================";
        cout << "\nMerge Sort";
        cout << "\n================";
        cout << "\nMasukkan Jumlah Data: ";
        cin >> jumlahdata;
        {
            int arr[jumlahdata];
            for (int i = 0; i < jumlahdata; i++) 
			{
                cout << "Data ke-" << i + 1 << " = ";
                cin >> arr[i];
            }
            cout << "\nData sebelum diurutkan: ";
            for (int i = 0; i < jumlahdata; i++) 
			{
                cout << "[" << arr[i] << "] ";
            }
            cout << "\n";
            merge_sort(arr, jumlahdata);
            cout << "Data setelah diurutkan: ";
            for (int i = 0; i < jumlahdata; i++) 
			{
                cout << "[" << arr[i] << "] ";
            }
            cout << "\n\n\n";
        }
        break;
    case 4:
        cout << "\n\n================";
        cout << "\nRadix Sort";
        cout << "\n================";
        cout << "\nMasukkan Jumlah Data: ";
        cin >> jumlahdata;
        {
            int arr[jumlahdata];
            for (int i = 0; i < jumlahdata; i++) 
			{
                cout << "Data ke-" << i + 1 << " = ";
                cin >> arr[i];
            }
            cout << "\nData sebelum diurutkan: ";
            for (int i = 0; i < jumlahdata; i++) 
			{
                cout << "[" << arr[i] << "] ";
            }
            cout << "\n";
            radix_sort(arr, jumlahdata);
            cout << "Data setelah diurutkan: ";
            for (int i = 0; i < jumlahdata; i++) 
			{
                cout << "[" << arr[i] << "] ";
            }
            cout << "\n\n\n";
        }
        break;
    case 5:
        cout << "\n\n================";
        cout << "\nShell Sort";
        cout << "\n================";
        cout << "\nMasukkan Jumlah Data: ";
        cin >> jumlahdata;
        {
            int arr[jumlahdata];
            for (int i = 0; i < jumlahdata; i++) 
			{
                cout << "Data ke-" << i + 1 << " = ";
                cin >> arr[i];
            }
            cout << "\nData sebelum diurutkan: ";
            for (int i = 0; i < jumlahdata; i++) 
			{
                cout << "[" << arr[i] << "] ";
            }
            cout << "\n";
            shell_sort(arr, jumlahdata);
            cout << "Data setelah diurutkan: ";
            for (int i = 0; i < jumlahdata; i++) 
			{
                cout << "[" << arr[i] << "] ";
            }
            cout << "\n\n\n";
        }
        break;
    case 6:
        cout << "\n\n================";
        cout << "\nCycle Sort";
        cout << "\n================";
        cout << "\nMasukkan Jumlah Data: ";
        cin >> jumlahdata;
        {
            int arr[jumlahdata];
            for (int i = 0; i < jumlahdata; i++) 
			{
                cout << "Data ke-" << i + 1 << " = ";
                cin >> arr[i];
            }
            cout << "\nData sebelum diurutkan: ";
            for (int i = 0; i < jumlahdata; i++) 
			{
                cout << "[" << arr[i] << "] ";
            }
            cout << "\n";
            cycle_sort(arr, jumlahdata);
            cout << "Data setelah diurutkan: ";
            for (int i = 0; i < jumlahdata; i++) 
			{
                cout << "[" << arr[i] << "] ";
            }
            cout << "\n\n\n";
        }
        break;
    }
}

int main()
{
	while(pilihan != 7)
	{
		cout << "Silahkan pilih menu di bawah";
		cout << "\n1. Selection Sort\n2. Quick Sort\n3. Merge Sort\n4. Radix Sort\n5. Shell Sort\n6. Cycle Sort\n7. Keluar\n\nPilihan: ";
		cin >> pilihan;
		menupilihan(pilihan); // memanggil fungsi menu pilihan
	}
	system("CLS");
	cout << "Terima kasih telah menggunakan program ini.\n\n";
	cout << "Nama : \tDirda Megantara\n";
	cout << "NIM : \tF55122026";
	cout << "\n\n";
	_getch();
}


