#pragma once
#include <Windows.h>
#include <chrono>
#include <iostream>
#include <thread>


//low oktav eller bass
void cn(unsigned x) { Beep(65.51, x); }
void csn(unsigned x) { Beep(69.30, x); }
void dn(unsigned x) { Beep(73.42, x); }
void dsn(unsigned x) { Beep(77.78, x); }
void en(unsigned x) { Beep(82.41, x); }
void fn(unsigned x) { Beep(87.31, x); }
void fsn(unsigned x) { Beep(92.50, x); }
void gn(unsigned x) { Beep(98, x); }
void gsn(unsigned x) { Beep(103.83, x); }
void an(unsigned x) { Beep(110, x); }
void asn(unsigned x) { Beep(116.54, x); }
void bn(unsigned x) { Beep(123.47, x); }

//oktav 0
void c0(unsigned x) { Beep(130.81, x); }
void cs0(unsigned x) { Beep(138.59, x); }
void d0(unsigned x) { Beep(146.83, x); }
void ds0(unsigned x) { Beep(155.56, x); }
void e0(unsigned x) { Beep(164.81, x); }
void f0(unsigned x) { Beep(174.61, x); }
void fs0(unsigned x) { Beep(185, x); }
void g0(unsigned x) { Beep(196, x); }
void gs0(unsigned x) { Beep(207.65, x); }
void a0(unsigned x) { Beep(220, x); }
void as0(unsigned x) { Beep(233.08, x); }
void b0(unsigned x) { Beep(246.94, x); }


//oktav 1
void c1(unsigned x) { Beep(261.63, x); }
void cs1(unsigned x) { Beep(277.18, x); }
void d1(unsigned x) { Beep(293.66, x); }
void ds1(unsigned x) { Beep(311.13, x); }
void e1(unsigned x) { Beep(329.63, x); }
void f1(unsigned x) { Beep(349.23, x); }
void fs1(unsigned x) { Beep(369.99, x); }
void g1(unsigned x) { Beep(392, x); }
void gs1(unsigned x) { Beep(415.30, x); }
void a1(unsigned x) { Beep(440, x); }
void as1(unsigned x) { Beep(466.16, x); }
void b1(unsigned x) { Beep(493.88, x); }

//oktav 2
void c2(unsigned x) { Beep(523.25, x); }
void cs2(unsigned x) { Beep(554.37, x); }
void d2(unsigned x) { Beep(587.33, x); }
void ds2(unsigned x) { Beep(622.25, x); }
void e2(unsigned x) { Beep(659.25, x); }
void f2(unsigned x) { Beep(698.46, x); }
void fs2(unsigned x) { Beep(739.99, x); }
void g2(unsigned x) { Beep(783.99, x); }
void gs2(unsigned x) { Beep(830.61, x); }
void a2(unsigned x) { Beep(880, x); }
void as2(unsigned x) { Beep(932.33, x); }
void b2(unsigned x) { Beep(987.77, x); }

//oktav 3
void c3(unsigned x) { Beep(1046.50, x); }
void cs3(unsigned x) { Beep(1108.73, x); }
void d3(unsigned x) { Beep(1174.66, x); }
void ds3(unsigned x) { Beep(1244.51, x); }
void e3(unsigned x) { Beep(1318.51, x); }
void f3(unsigned x) { Beep(1396.91, x); }
void fs3(unsigned x) { Beep(1479.98, x); }
void g3(unsigned x) { Beep(1567.98, x); }
void gs3(unsigned x) { Beep(1661.22, x); }
void a3(unsigned x) { Beep(1760, x); }
void as3(unsigned x) { Beep(1864.66, x); }
void b3(unsigned x) { Beep(1975.53, x); }

//oktav 4
void c4(unsigned x) { Beep(2093, x); }
void cs4(unsigned x) { Beep(2217.46, x); }
void d4(unsigned x) { Beep(2349.32, x); }
void ds4(unsigned x) { Beep(2489.02, x); }
void e4(unsigned x) { Beep(2637.02, x); }
void f4(unsigned x) { Beep(2793.83, x); }
void fs4(unsigned x) { Beep(2959.96, x); }
void g4(unsigned x) { Beep(3135.96, x); }
void gs4(unsigned x) { Beep(3222.4, x); }
void a4(unsigned x) { Beep(3520, x); }
void as4(unsigned x) { Beep(3729.31, x); }
void b4(unsigned x) { Beep(3951.07, x); }

void sleep(unsigned milliseconds)
{
	std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}

void zeldamain()
{
	as1(1500);
	f1(300);
	f1(300);
	as1(300);
	gs1(150);
	fs1(150);
	gs1(2100);
	as1(1500);
	fs1(300);
	fs1(300);
	as1(300);
	a1(150);
	g1(150);
	a1(2100);


	f0(300);
	f0(150);
	asn(150);
	f0(300);
	f0(150);
	asn(150);
	f0(300);
	f0(150);
	asn(150);
	f0(150);
	asn(150);
	f0(150);
	asn(150);
	f0(300);
	f0(150);
	asn(150);
	f0(300);
	f0(150);
	asn(150);
	f0(300);
	f0(150);
	asn(150);
	f0(150);
	asn(150);
	f0(150);
	asn(150);


	as1(600);
	f1(900);
	as1(300);
	as1(150);
	c2(150);
	d2(150);
	ds2(150);
	f2(150);
	as1(300);
	as1(150);
	c2(150);
	d2(150);
	ds2(150);
	f2(1200);

	as1(600);
	f1(900);
	as1(300);
	as1(150);
	c2(150);
	d2(150);
	ds2(150);
	f2(150);
	as1(300);
	as1(150);
	c2(150);
	d2(150);
	ds2(150);
	f2(1200);

	//Main 1
	as1(600);
	f1(900);
	as1(300);
	as1(150);
	c2(150);
	d2(150);
	ds2(150);
	f2(1200);
	f2(300);
	f2(300);
	f2(200);
	fs2(200);
	gs2(200);
	as2(1500);
	as2(300);
	as2(200);
	gs2(200);
	fs2(200);
	gs2(450);
	fs2(150);
	f2(1200);
	f2(600);
	ds2(300);
	ds2(150);
	f2(150);
	fs2(1200);
	f2(300);
	ds2(300);
	cs2(300);
	cs2(150);
	ds2(150);
	f2(1200);
	ds2(300);
	cs2(300);
	c2(300);
	c2(150);
	d2(150);
	e2(1200);
	g2(600);
	f2(300);
	f1(150);
	f1(150);
	f1(300);
	f1(150);
	f1(150);
	f1(300);
	f1(150);
	f1(150);
	f1(300);
	f1(300);

	//Main 2
	as1(600);
	f1(900);
	as1(300);
	as1(150);
	c2(150);
	d2(150);
	ds2(150);
	f2(1200);
	f2(300);
	f2(300);
	f2(200);
	fs2(200);
	gs2(200);
	as2(1500);
	cs3(600);
	c3(600);
	a2(1200);
	f2(600);
	e0(200);
	as0(200);
	cs1(200);
	e1(200);
	as1(200);
	cs2(200);
	e2(600);
	as2(600);
	a2(600);
	f2(1200);
	f2(600);
	e0(200);
	as0(200);
	cs1(200);
	e1(200);
	as1(200);
	cs2(200);
	e2(600);
	as2(600);
	a2(600);
	f2(1200);
	d2(600);
	ds2(1800);
	fs2(600);
	f2(600);
	cs2(1200);
	as1(600);
	c2(300);
	c2(150);
	d2(150);
	e2(1200);
	g2(600);
	f2(300);
	f1(150);
	f1(150);
	f1(300);
	f1(150);
	f1(150);
	f1(300);
	f1(150);
	f1(150);
	f1(300);
	f1(300);
}
