/*
 * Strategies.h
 *
 *  Created on: Dec 30, 2014
 *      Author: zawadluk
 */

#ifndef STRATEGIES_H_
#define STRATEGIES_H_

#include <stdint.h>

typedef uint8_t (*StrategyPtr) ();

uint8_t stratety_one();

uint8_t stratety_two();

uint8_t strategy_three();

#endif /* STRATEGIES_H_ */
