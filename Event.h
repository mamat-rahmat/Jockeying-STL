#ifndef _EVENT_H
#define _EVENT_H

#include <iostream>
#include "Date.h"
#include "Time.h"
#include "DateTime.h"

using namespace std;

class Event{
public:
	/**
	 * @relates Event
	 * @brief Konstruktor tanpa parameter
	 * @details Instansiasi Objek dengan nilai awal
	 */
	Event();

	/**
	 * @relates Event
	 * @brief Kostruktor dengan parameter
	 * @details Kostruktor dengan parameter
	 * 
	 * @param e Waktu dari Event yang akan diinstansikan
	 * @param r Kode dari Event yang akan diinstansikan
	 * @param t ID dari Event yang akan diinstansikan
	 */
	Event(DateTime, char, int);

	/**
	 * @relates Event
	 * @brief Kostruktor dengan parameter
	 * @details Kostruktor dengan parameter
	 * 
	 * @param E Objek yang akan diinstansiasikan ke dalam konstruktor
	 */
	Event(const Event& E);

	/**
	 * @relates Event
	 * @brief operator overloading =
	 * @details Penginisialisasian Objek
	 * 
	 * @param E Event yang akan dimasukkan
	 */
	Event& operator=(const Event& E);

	/**
	 * @relates Event
	 * @brief Destruktor
	 * @details Desktruktor
	 */
	~Event();

	/**
	 * @relates Event
	 * @brief Operator Overloading >>
	 * @details Prosedur yang memungkinkan objek event untuk melakukan output secara langsung
	 * 
	 * @param output stream output
	 * @param e Event yang akan dioutputkan ke stream
	 */
	friend ostream &operator<<(ostream &output,const Event &e);

	/**
	 * @brief Operator Overloading >>
	 * @details Prosedur yang memungkinkan objek event untuk menerima input secara langsung
	 * 
	 * @param input stream input
	 * @param e Event yang akan diinputkan ke stream
	 */
	friend istream &operator>>(istream &input, Event &e);

	/**
	 * @brief Setter waktu
	 * @details Fungsi yang mengeset nilai waktu
	 * 
	 * @param  Waktu yang akan dijadikan nilai waktu terjadinya event ini
	 */
	void setDateTime(DateTime);

	/**
	 * @brief Setter kode
	 * @details Prosedur yang mengeset nilai kode
	 * 
	 * @param Kode yang akan dijadikan nilai kode dari event ini
	 */
	void setKode(char);

	/**
	 * @brief Setter ID
	 * @details Prosedur yang mengeset nilai ID
	 * 
	 * @param ID yang akan dijadikan nilai ID dari event ini
	 */
	void setId(int);

	/**
	 * @brief Getter Waktu
	 * @details Fungsi yang mengembalikan attribute Waktus dari event ini
	 * @return Waktu terjadi event ini
	 */
	DateTime getDateTime();

	/**
	 * @brief Getter Kode
	 * @details Fungsi yang mengembalikan attribute kode dari event ini
	 * @return Kode dari event ini
	 */
	char getKode();

	/**
	 * @brief Getter ID
	 * @details Fungsi yang mengembalikan attribute ID dari event ini
	 * @return ID dari event ini
	 */
	int  getId();
	
private:
	DateTime datetime;
    char kode;
    int id;
};
#endif // _DATE_H
