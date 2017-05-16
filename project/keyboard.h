#define CHAR_0 0x3f
#define CHAR_1 0x6
#define CHAR_2 0x5b
#define CHAR_3 0x4f
#define CHAR_4 0x66
#define CHAR_5 0x6d
#define CHAR_6 0x7d
#define CHAR_7 0x7
#define CHAR_8 0x7f
#define CHAR_9 0x6f 
#define CHAR_A 0x77
#define CHAR_b 0x7c
#define CHAR_C 0x39
#define CHAR_d 0x5e
#define CHAR_E 0x79
#define CHAR_F 0x71

uint8_t map_input_to_arduino(char input) {
  switch(input) {
    case '0':
      return CHAR_0;
    case '1':
      return CHAR_1;
    case '2':
      return CHAR_2;
    case '3':
      return CHAR_3;
    case '4':
      return CHAR_4;
    case '5':
      return CHAR_5;
    case '6':
      return CHAR_6;
    case '7':
      return CHAR_7;
    case '8':
      return CHAR_8;
    case '9':
      return CHAR_9;
    case 'A':
      return CHAR_A;
    case 'b':
    case 'B':
      return CHAR_b;
    case 'C':
      return CHAR_C;
    case 'd':
    case 'D':
      return CHAR_d;
    case 'E':
      return CHAR_E;
    case 'F':
      return CHAR_F;
  }

  return 0;
}
