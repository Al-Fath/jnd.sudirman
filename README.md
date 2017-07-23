# jnd.sudirman
About my project in programming C++
#----------------------------------------------
# 		Latihan Program Untuk BAB 5 & 6
#----------------------------------------------

#----------------------------------------------
Belajar Tentang 
1. cout
2. Manipulator
3. cin
#----------------------------------------------

1. cout 
	jadi cout itu syntax yg di pake dalam program C++, untuk menampilkan kalimat, tulisan, dll
	dengan format

		cout << "Type Here" << endl;

	pemakaian symbol << dimaksudkan untuk menampilkan suatu perintah yang ada 
	di kanan symbol << , dalam hal ini tulisan Type Here akan ditampilkan 
	karena ada syntax cout sebelumnya. dalam penulisan suatu tulisan setelah cout
	diharuskan suatu tuliskan berada didalam tanda " ", jadi
		"Type Here"

2. Manipulator
	Manipulator umumnya digunakan untuk megatur tampilan suatu data.
	dalam Manipulator kita akan mengenal jenis-jenisnya yaitu :

	a. endl -> Manipulator yang digunakan untuk menyisipkan newline/ pindah baris,
	b. ends -> Manipulator untuk meyisipkan karakter null (ASCII nol)
	c. flush -> identik/sama seperti endl,
	d. oct -> mengkonversi ke bilangan berbasis 8
	e. dec -> Mengkonversi ke bilangan berbasis 10 (oktal)
	f. hex -> Mengkonversi ke bilangan berbasis 16 (hexadesima)
	g. setbase(n) -> Mengkonversi bilangan berbasis n dalam tipe data int(n = 8,10 atau 16)
	h. setw(n) -> Mengatur lebar field/syntax yang ada disebelah kanannya sebesar n karakter (int)
	i. setfill(c) -> Mengisi karakter pengisi yang digunakan setelah manipulator setw(n), c = karakter (int)
	j. setprecision(n) ->  Mengatur presisi bilangan pecahan n digit (int)
	k. setiosflags(long f) -> Mengatur format yang ditentukan oleh f, akan dijelaskan selanjutnya
	l. resetiosflags(long f) -> Menghapus format yang dibentuk oleh f, akan dijelaskan selanjutnya

 2.1 Format untuk Pemakaian setiosflags(long f) dan resetiosflags(long f)
 		a. ios::left -> Mengatur rata kiri terhadap lebar field yang diatur melalui manipulator setw()
 		b. ios::right -> Mengatur rata kanan terhadap lebar field yang diatur melalui manipulator setw()
 		c. ios::scientific -> Memformat keluaran dalam notasi exponensial
 		d. ios::fixed -> Memformat keluaran dalam bentuk notasi desiamal
 		e. ios::dec -> Memformat keluaran berbasis 10
 		f. ios::hex -> Memformat keluran berbasis 16
 		g. ios::oct -> Memformat keluaran berbasis 8
 		h. ios::uppercase -> Memformat huruf pada notasi heksadesimal ke huruf kapital
 		i. ios::showbase -> Menampilkan awalan 0x pada bilangan hekadesimal dan 0 pada bilangan oktal
 		j. ios::show -> Menampilkan tanda + pada bilangan yang positif.

 	sedangkan untuk pemakaian manipulator resetiosflags() digunakan untuk kembali kepada 
 	keadaan semula , setelah pemakaian manipulator setiosflags() 
 			contoh :
 					cout << setiosflags(ios::left) << setw(8) << "Type Here"
 						 << resetiosflags(ios::left) << endl;

 	pengunaan manipulator setiosflags() dapat menggunakan lebih dari satu argumen didalam () dengan menggunakan tanda (|) diantara argumen-argumennya.
 			contoh :
 					cout << setiosflags(ios::showbase | ios::uppercase);
 					cout << hex << 45 << endl;

					cout << resetiosflags(ios::showbase | ios::uppercase);
					cout << endl;

3. CIN (read si in)
	
	C++ menyediakansuatu object bernama cin , dimana object ini bermanfaat untuk membaca data dari input pengguna program, normalnya keyboard.

	pengunaan :
		cout << "Masukan Nilai";
		cin >> int nilai;

	3.1 penggunaan cin.ignore(255, '\n') 
		penggunaan cin.ignore digunakan setelah memasukkan suatu karakter kedalam perintah cin,
		namun akan menghasilkan suatu karakter yang tersisa karena tidak dibaca oleh komputer sebelumnya, sehingga dibaca kemudian.

		angka 255 menyatakan jumlah karakter terbanyak yang akan diabaikan, setelah satu karakter diambil sebelumnya, sampai karakter /n (newline) dijumpai.

		catatan :
			karena jika kita hanya menggunakan object cin saja dalam suatu perintah tertentu akan menyebabkan hanya dapat membaca satu karakter, dianjurkan menggunakan beberapa opsi yaitu :

			3.1.1. menggunakan argumen string

				   digunakan untuk membaca string dari keyboard contoh;

				   {
				   	string nama;
				   	cout << "Nama Anda : ";
				   	cin >> nama;

				   	cout << "Hai, " << nama << "!" << endl;
				   }

				   penggunaan seperti ini tetap saja hanya dapat membaca data string hanya satu kata saja
				   karenanya digunakan suatu object tambahan fungsi :

				   getline();

				   contoh :
				   			{
				   				string nama;

				   				cout << "Nama Anda : ";
				   				getline(cin, nama);

				   				cout << "Hai, " << nama << "!" << endl;
				   			}

				   	maka dengan begitu komputer akan dapat membaca suatu data string(kalimat, kata) secara penuh.
