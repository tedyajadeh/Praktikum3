# Praktikum3

##Latihan1.cpp : mencari bilangan terbesar

**Alur algoritma**
1. mendeklarasikan jumlah variabel
2. mengisi nilai variabel
3. menghitung bilangan terbesar dengan rumus 
	for (i;i<n;i++) {
	cout << "masukan bilangan ke-" << i+1 << ": ";
        cin >> a;

        if (a > max)
            max = a;

4. mencetak hasil kelayar cout << "bilangan terbesar adalah: " << max << endl;

**Flowchart Program**
![Flowchart](https://raw.githubusercontent.com/tedyajadeh/Praktikum3/master/Flowchart1.png)

**Screnshoot**
![Screnshoot](https://raw.githubusercontent.com/tedyajadeh/Praktikum3/master/Screnshoot1.png)


**code program lengkap**
'''c++
#include <iostream>

using namespace std;

int main() {
    int i=0;
    int max=0;
    int n,a;

    cout << "masukan jumlah bilangan: ";
    cin >> n;

    for (i;i<n;i++) {
        cout << "masukan bilangan ke-" << i+1 << ": ";
        cin >> a;

        if (a > max)
            max = a;
    }

    cout << "bilangan terbesar adalah: " << max << endl;
}


###Latihan2.cpp : mencari 3 bilangan terbesar

**Alur algoritma**
1. mendekrasi kan 3 variabel A,B,C
2. mengisi nilai variabel yang di inginkan
3. menghitungkan angka terbesar dengan rumus if
4. mencetak hasil kelayar dengan urutan angka terbesar

**Flowchart Program**
![Flowchart](https://raw.githubusercontent.com/tedyajadeh/Praktikum3/master/Flowchart2.jpg)

**Screnshoot**
![Screnshoot](https://raw.githubusercontent.com/tedyajadeh/Praktikum3/master/Screnshoot2.png)

**code program lengkap**
'''c++
#include<iostream>

using namespace std;

int main() {
    int A,B,C;

    cout << "masukkan bilangan A: "; cin >> A;
    cout << "masukkan bilangan B: "; cin >> B;
    cout << "masukkan bilangan C: "; cin >> C;

    if (A<B) {
        if (B<C)
            cout << "urutan bilangan: " << A << ", " << B << ", " << C << endl;
        else {
            if (A<C)
                cout << "urutan bilangan: " << A << ", " << C << ", " << B << endl;
            else
                cout << "urutan bilangan: " << C << ", " << A << ", " << B << endl;

        }
    } else {
        if (A<C)
            cout << "urutan bilangan: " << B << ", " << A << ", " << C << endl;
        else {
            if (B<C)
                cout << " urutan bilangan: " << B << ", " << C << ", " << A << endl;
            else
                cout << " urutan bilangan: " << C << ", " << B << ", " << A << endl;

        }
    }
}

####Latihan3.cpp : susun algoritma untuk menginput 3 buah bilangan yang masing - masing menyatakan panjang sisi sebuah segitiga. kemudian periksa ketiga buah garis tersebut. Bila ketiga buah garis (sisi) tersebut panjangnya sama maka cetak perkataan "SAMA SISI", Bila hanya dua sisi yang sama maka cetak perkataan "SAMA KAKI", Tapi bila Ketiga - tiganya tidak sama maka cetak perkataan "SEMBARANG". 

**Alur algoritma** 
1. mendeklarasikan 3 variabel A,B,C
2. mengisi nilai variabel yang di inginkan
3. menghitung dengan rumus if
4. mencetak hasil kelayar dengan sembarang

**Flowchart Program**
![Flowchart](https://raw.githubusercontent.com/tedyajadeh/Praktikum3/master/Flowchart3.png)

**Screnshoot**
![Screnshoot](https://raw.githubusercontent.com/tedyajadeh/Praktikum3/master/Screshoot3.png)

**code program lengkap**
'''c++
 #include<stdio.h>
main()
{ int A,B,C;
  scanf("%i %i %i", &A,&B,&C);
  if(A==B)
    { if(A==C)
	  printf("SEGITIGA SAMA SISI");
	else
  	  printf("SEGITIGA SAMA KAKI");
    }
  else
     { if(A==C)
	   printf("SEGITIGA SAMA KAKI");
	else
         { if(B==C)
		 printf("SEGITIGA SAMA KAKI");
   	     else
              printf("SEGITIGA SEMBARANG");
         }
    }
}
