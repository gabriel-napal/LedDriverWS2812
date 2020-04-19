/*
 * pseudoRandom.h
 *
 *  Created on: Apr 15, 2020
 *      Author: Gabriel
 */

#ifndef PSEUDORANDOM_H_
#define PSEUDORANDOM_H_


#define PRNG_A 22
#define PRNG_C 11
#define PRNG_M 99


unsigned int wyhash16() ;
unsigned int rand_range16(const unsigned int s);
unsigned int pseudoRandom ( unsigned int maxNumber);



#endif /* PSEUDORANDOM_H_ */