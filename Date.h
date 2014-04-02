#ifndef _DATE_H
#define _DATE_H
#include <iostream>
using namespace std;

class Date{
public:
    /**
     * @relates Date
     * @brief Constructor
     * @details Instansiasi objek Date dengan nilai awal
     */
    Date();
    /**
     * @relates Date
     * @brief Constructor Param
     * @details Instansiasi objek Date dengan nilai masukan dari pengguna
     * 
     * @param _tanggal masukan pengguna untuk tanggal
     * @param _bulan masukan pengguna untuk bulang
     * @param _tahun masukan pengguna untuk tahun
     */
    Date(int,int,int);
    /**
     * @relates Date
     * @brief [brief description]
     * @details [long description]
     * 
     * @param d [description]
     */
    Date(const Date& d);
    /**
     * @relates Date
     * @brief Copy constructor
     * @details Menyalin isi objek Date pada objek date yang baru
     * 
     * @param d Objek Date hasil
     */
    Date& operator=(const Date& d);
    /**
     * @relates Date
     * @brief Operator Overloading>
     * @details Membandingkan dua buah nilai Date
     * 
     * @param d Objek date yang akan dibandingkan
     * 
     * @return boolean true atau false
     */
    bool  operator>(const Date& d);
    /**
     * @relates Date
     * @brief Operator overloading == 
     * @details mengecek apakah dua buah objek Date sama
     * 
     * @param d Objek Date yang akan dicek
     * 
     * @return boolean true atau false
     */
    bool  operator==(const Date& d);
	/**
     * @relates Date
     * @brief Operator overloading <<
     * @details Memungkinkan objek Date untuk menampilkan isinya tanpa harus menggunakan getter
     * 
     * @param output keluaran yang akan ditampilkan pada layar
     * @param d objek Date yang akan ditampilkan isinya
     */
    friend ostream &operator<<(ostream &output,const Date &d);
    /**
     * @brief Operator Overloading >>
     * @details Memungkinkan objek Date untuk menerima inputan secara langsung
     * 
     * @param input Masukan untuk objek Date
     * @param d Objek date yang akan diisi
     */
	friend istream &operator>>(istream &input, Date &d);
    /**
     * @brief Destructor
     * @details Menghapus objek Date dari memory
     */
    ~Date();
    /**
     * @brief Setter Tanggal
     * @details Mengeset tanggal dari objek Date
     * 
     * @param _tanggal nilai yang akan menjadi nilai tanggal dari objek Date
     */
    void setTanggal(int);
    /**
     * @brief Setter bulan
     * @details Mengeset bulan dari objek Date
     * 
     * @param  _bulan nilai yang akan menjadi nilai bulan dari objek Date
     */
    void setBulan(int);
    /**
     * @brief Setter Tahun
     * @details Mengeset tahun dari objek Date
     * 
     * @param _tahun nilai yang akan menjadi nilai tahun dari objek Date
     */
    void setTahun(int);
    /**
     * @brief Getter Tanggal
     * @details Mengambil nilai tanggal dari objek Date
     * @return nilai tanggal dari objek Date
     */
    int getTanggal();
    /**
     * @brief Getter Bulan
     * @details Mengambil nilai bulan dari objek Date
     * @return nilai bulan dari objek Date
     */
    int getBulan();
    /**
     * @brief Getter Tahun
     * @details Mengambil nilai tahun dari objek Date
     * @return nilai tahun dari objek Date
     */
    int getTahun();

private:
    int tanggal;
    int bulan;
    int tahun;
};
#endif // _DATE_H
