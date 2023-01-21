#variables
CC = gcc
CFLAGS = -Wall -Wextra
TARGET =  
SOURCES = $(wildcard $(TARGET)*.c)
OBJECTS = $(wildcard $(TARGET)*.o)
HEADERS = $(wildcard $(TARGET)*.h)


#rules
$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET)


%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJECTS) $(TARGET)
