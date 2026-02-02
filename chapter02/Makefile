CC = gcc
CFLAGS = -W -Wall
OBJS = intary_dynamic.o
TARGET = intary_dynamic

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# .c 파일로 .o 파일을 만드는 규칙을 일반화
.c.o:
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET)