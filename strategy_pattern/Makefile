INCLUDE_DIRS= ./include
SRC_DIR= ./src

CC=gcc

CFLAGS= -Wall -g -I $(INCLUDE_DIRS)

FLAGS=

TARGET=strategy_pattern_example

OBJS= $(SRC_DIR)/Strategies.o \
		$(SRC_DIR)/StrategyPattern.o


all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $@

$(SRC_DIR)/%.o: %.c
	$(CC) -c $(CFLAGS) $<

clean:
	rm $(OBJS) $(TARGET)