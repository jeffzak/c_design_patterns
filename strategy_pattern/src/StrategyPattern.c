#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Strategies.h"

typedef struct CustomData
{
	StrategyPtr usedStrategy;
} CustomData;

typedef CustomData* CustomDataPtr;

CustomDataPtr create_custom_data(StrategyPtr strategy)
{
	CustomDataPtr custom_data = malloc(sizeof(CustomData));
	assert(NULL != custom_data);
	custom_data->usedStrategy = strategy;
	return custom_data;
}

int main()
{
	CustomDataPtr custom_data_one = create_custom_data(&stratety_one);
	custom_data_one->usedStrategy();

	CustomDataPtr custom_data_two = create_custom_data(&stratety_two);
	custom_data_two->usedStrategy();
	return 0;
}
