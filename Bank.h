#ifndef _BANK_H
#define _BANK_H

#include <deque>
#include <vector>
#include "Event.h"
#include "DateTime.h"

class Bank{
public:
	/**
	 * @brief Constructor
	 * @details Inisiasi objek bank dengan nilai awal
	 */
    Bank();
    /**
     * @brief Constructor parameter
     * @details Inisiasi objek bank dengan nilai sesuai masukan dari pengguna
     * 
     * @param datetime Nilai masukan tanggal dan waktu dari pengguna
     * @param _N Jumlah teller/baris antrian yang akan dibuka
     */
	Bank(DateTime, int);
	/**
	 * @brief [brief description]
	 * @details [long description]
	 * 
	 * @param  [description]
	 */
	Bank(const Bank&);
	/**
	 * @brief Operator overloading=
	 * @details Menghasilkan objek bank baru dengan nilai yang sama dengan objek bank lama
	 * 
	 * @param bank Objek hasil operasi=
	 */
	Bank& operator=(const Bank&);
	/**
	 * @brief Destructor
	 * @details Menghapus objek bank dari memory
	 */
	~Bank();

	/**
	 * @brief setN
	 * @details Mengatur jumlah barisan antrian yang boleh dibuka
	 * 
	 * @param jumlah barisan antrian sesuai dengan keinginan pengguna
	 */
	void setN(int);
	/**
	 * @brief setDateTime
	 * @details Mengatur datetime dari sebuah objek bank
	 * 
	 * @param  masukan memiliki format tanggal-bulan-tahun;jam-menit-detik
	 */
	void setTMax(DateTime);
	/**
	 * @brief setQueue
	 * @details Mengatur antrian ke i dengan queue tertentu
	 * 
	 * @param queue Queue masukan
	 * @param i nomor antrian yang akan di set
	 */
	void setQueue(deque<int> , int);
	/**
	 * @brief getN
	 * @details Menghitung banyaknya antrian yang dibuka
	 * @return integer jumlah antrian yang dibuka
	 */
	int getN();
	/**
	 * @brief getDateTime
	 * @details Mendapatkan DateTime dari objek Bank
	 * @return DateTime dari objek bank akan menjadi kembalian
	 */
	DateTime getTMax();
	/**
	 * @brief getQueue
	 * @details Mendapatkan queue dengan urutan tertentu
	 * 
	 * @param  i urutan queue ke-i yang akan dijadikan kembalian
	 * @return Queue ke-i
	 */
	deque<int> getQueue(int);
	/**
	 * @brief Jockeying
	 * @details Mengatur susunan antrian agar dapat menerapkan fungsi Jockeyin yakni tidak ada antrian yang memiliki selisih lebih dari 2
	 * 
	 * @param  i Pengecekan pada antrian ke-i
	 * @return mengembalikan nilai -1 atau queue tujuan
	 */
    int Jockeying(int);
    /**
     * @brief Arrival
     * @details Menempatkan pengantri baru pada barisan antrian tertentu
     * 
     * @param  kode pengantri
     */
    void Arrival(int);
    /**
     * @brief Departure
     * @details Mengeluarkan pengantri dari barisan antrian
     * 
     * @param  kode pengantri yang akan dikeluarkan
     */
    void Departure(int);
    /**
     * @brief Print
     * @details Menampilkan seluruh antrian dari objek bank
     */
    void Print();
    /**
	 * @brief Sweep
	 * @details Membersihkn antrian yang ada secara berurutan satu persatu tiap antrian
	 */
    void Sweep();
    
    static int i;
private:
    int N;
    DateTime TMax;
    vector<deque<int> > T;
};
#endif // _BANK_H
