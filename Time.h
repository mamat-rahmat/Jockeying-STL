#ifndef _TIME_H
#define _TIME_H
#include <iostream>
using namespace std;

class Time{
public:
    /**
     * @relates Time
     * @brief Constructor
     * @details Instansiasi nilai objek dengan nilai awal
     */
    Time();
    /**
     * @relates Time
     * @brief ctor param
     * @details Method penginstansiasi objek dengan parameter tertentu
     * 
     * @param _jam parameter input untuk jam
     * @param _menit parameter input untuk menit
     * @param _detik parameter input untuk jam
     */
    Time(int,int,int);
    /**
     * @relates Time
     * @brief brief description
     * @details long description
     * 
     * @param t description
     */
    Time(const Time& t);
    /**
     * @relates Time
     * @brief copy constructor
     * @details Menyalin isi dari objek untuk ditempatkan pada objek lainnya
     * 
     * @param p Objek hasil bentukan
     */
    Time& operator=(const Time& p);
    /**
     * @relates Time
     * @brief Operator perbandingan lebih dari
     * @details Membandingkan dua buah time 
     * 
     * @param p Objek yang akan dibandingkan
     * 
     * @return boolean true atau false
     */
    bool operator>(const Time& p);
    /**
     * @relates Time
     * @brief Operator equality
     * @details Menguji apakah dua buah Time memiliki nilai yang sama
     * 
     * @param p Objek yang akan dibandingkan
     * 
     * @return boolena true atau false
     */
    bool operator==(const Time& p);
    /**
     * @relates Time
     * @brief Operator overloading <<
     * @details mengubah fungsi << untuk memungkinkan output langsung dari tipe Time
     * 
     * @param output out ketika objek Time diprint
     * @param p objek time yang akan diprint
     */
	friend ostream &operator<<(ostream &output,const Time &p);
    /**
     * @brief operator overloading >>
     * @details Memungkinkan objek Time untuk dapat langsung menerima masukan
     * 
     * @param input [nilai yang menjadi masukan
     * @param p objek time yang akan diinisiasi nilainya
     */
	friend istream &operator>>(istream &input, Time &p);
    /**
     * @brief dektruktor
     * @details Penghapusan objek Time dari memory
     */
    ~Time();

    /**
     * @brief Setter Jam
     * @details mengeset jam pada objek time dengan input tertentu
     * 
     * @param _jam parameter masukan untuk jam
     */
    void setJam(int);
    /**
     * @brief Setter Menit
     * @details mengeset jam pada objek time dengan input tertentu
     * 
     * @param _menit parameter masukan untuk menit
     */
    void setMenit(int);
    /**
     * @brief Setter Detik
     * @details mengeset detik pada objek time dengan input tertentu
     * 
     * @param _detik parameter masukan untuk detik
     */
    void setDetik(int);
    /**
     * @brief Getter Jam
     * @details Mengembalikan nilai jam dari objek Time
     * @return nilai jam dari objek Time
     */
    int getJam();
    /**
     * @brief Getter Menit
     * @details Mengembalikan nilai menit dari objek Time
     * @return nilai menit dari objek Time
     */
    int getMenit();
    /**
     * @brief Getter Detik
     * @details Mengembalikan nilai detik dari objek Time
     * @return nilai detik dari objek Time
     */
    int getDetik();

private:
    int jam;
    int menit;
    int detik;
};
#endif // _TIME_H
