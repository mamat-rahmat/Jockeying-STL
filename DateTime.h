#ifndef _DATETIME_H
#define _DATETIME_H

#include <iostream>
#include "Date.h"
#include "Time.h"
using namespace std;

class DateTime{
public:
    /**
     * @relates DateTime
     * @brief Konstruktor tanpa parameter
     * @details Instansiasi Objek dengan nilai awal
     */
    DateTime();

    /**
     * @relates DateTime
     * @brief Konstruktor dengan parameter
     * @details Konstruktor dengan parameter
     * 
     * @param e Tanggal dari Objek DateTime yang akan diinstansikan
     * @param e Waktu dari Objek DateTime yang akan diinstansikan
     */
    DateTime(Date, Time);

    /**
     * @relates DateTime
     * @brief Copy Konstruktor
     * @details Copy Konstruktor
     * 
     * @param DT Objek yang akan diinstansiasikan ke dalam konstruktor
     */
    DateTime(const DateTime& DT);

    /**
     * @relates DateTime
     * @brief Operator Overloading =
     * @details Penginisialisasian Objek
     * 
     * @param d objek DateTime yang akan dimasukkan
     */
    DateTime& operator=(const DateTime& d);

    /**
     * @relates DateTime
     * @brief Operator overloading >
     * @details Membandingkan dua objek DateTime apakah yang kiri lebih besar dari yang kanan
     * 
     * @param d objek DateTime
     * 
     * @return boolean berisi nilai apakah objek DateTime di kiri lebih besar dari yang kanan
     */
	bool operator>(const DateTime& d);

    /**
     * @relates DateTime
     * @brief Operator overloading ==
     * @details Membandingkan dua objek DateTime apakah yang kiri sama dengan yang kanan
     * 
     * @param d objek DateTime
     * 
     * @return boolean berisi nilai apakah objek DateTime di kiri sama dengan yang kanan
     */
    bool operator==(const DateTime& d);

    /**
     * @relates DateTime
     * @brief Operator overloading <<
     * @details Prosedur yang memungkinkan objek event untuk melakukan output secara langsung
     * 
     * @param output stream output
     * @param d DateTime yang akan dioutputkan ke stream
     */
	friend ostream &operator<<(ostream &output,const DateTime &d);

    /**
     * @brief Operator overloading <<
     * @details Prosedur yang memungkinkan objek event untuk menerima input secara langsung
     * 
     * @param input stream input
     * @param d DateTime yang akan diinputkan ke stream
     */
	friend istream &operator>>(istream &input,DateTime &d);

    /**
     * @brief Destruktor
     * @details Destruktor
     */
    ~DateTime();

    /**
     * @brief Setter Date
     * @details Prosedur yang mengeset nilai Time
     * 
     * @param _time Time yang akan dijadikan nilai waktu dari DateTime ini
     */
    void setTime(Time _time);

    /**
     * @brief Setter Date
     * @details Prosedur yang mengeset nilai Date
     * 
     * @param _date Date yang akan dijadikan nilai tanggal dari DateTime ini
     */
    void setDate(Date _date);

    /**
     * @brief Getter Time
     * @details Fungsi yang mengembalikan attribute Time dari event ini
     * @return Date dari DateTime ini
     */
    Time getTime();

    /**
     * @brief Getter Date
     * @details Fungsi yang mengembalikan attribute Date dari event ini
     * @return Time dari DateTime ini
     */
	Date getDate();

private:
    Date date;
    Time btime;
};
#endif // _DATETIME_H

