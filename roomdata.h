// x width, y height,
// playerTileX, playerTileY,
// offsetAjustX, offsetAjustY,

// room size // additional tiles // tile x, y, type

const uint8_t PROGMEM room1[] =
{
  12,12,
  26,
  3,4,25,
  4,4,24,
  7,4,21,
  11,1,0,
  11,2,2,
  11,3,26,
  11,0,24,
  0,8,27,
  0,11,25,
  10,5,25,
  9,7,33,
  10,7,33,
  7,8,26,
  9,8,33,
  10,8,33,
  7,9,31,
  8,9,22,
  9,9,22,
  10,9,22,
  6,10,25,
  7,10,22,
  8,10,22,
  9,10,22,
  10,10,22,
  0,9,0,
  0,10,2,
};

const uint8_t PROGMEM room2[] =
{
  24,6,
  40,

  0,2,27,
  0,5,25,

  4,4,7,
  5,4,7,
  9,3,7,
  10,3,7,
  14,1,9,
  15,1,9,
  0,3,0,
  0,4,2,
  3,4,26,
  6,4,25,
  7,4,22,
  8,4,22,
  8,3,26,
  9,4,22,
  10,4,22,
  10,5,22,
  
  11,4,22,
  12,4,24,
  11,3,26,

  13,5,24,

  14,5,2,
  15,5,2,

  16,5,25,

  17,4,25,
  18,4,22,
  19,4,22,
  20,4,22,
  21,4,22,
  22,4,22,

  18,1,31,
  19,1,29,

  19,0,28,

  18,3,3,

  22,0,30,
  22,1,31,

  21,2,21,
  20,0,2,
  21,0,2,
};

const uint8_t PROGMEM room3[] =
{
  12,12,
  28,

  3,5,10,
  2,0,24,
  5,0,25,
  11,1,0,
  11,2,2,
  11,0,24,

  11,3,28,

  10,3,25,

  8,5,24,
  10,7,25,

  8,9,24,

  7,1,23,  
  7,2,23,
  7,3,23,
  7,4,23,
  7,5,23,
  7,6,23,
  7,7,23,
  7,8,23,
  7,9,31,

  1,7,22,
  2,7,24,
  5,3,25,
  6,3,22,

  3,0,2,
  4,0,2,

  2,10,32,
  2,9,6,
};

const uint8_t PROGMEM room4[] =
{
  12,12,
  41,

  10,1,10,

  2,0,2,
  3,0,0,
  2,11,2,
  3,11,2,
  11,2,0,
  11,3,0,
  11,3,2,

  0,11,31,
  1,11,24,
  4,11,25,
  5,11,29,
  0,7,23,
  0,8,23,
  0,9,23,
  0,10,23,
  0,6,30,
  1,6,22,
  2,6,22,
  3,6,22,
  4,6,22,
  5,6,28,
  5,7,27,
  5,10,26,

  6,11,7,
  7,11,7,
  8,11,7,
  9,11,7,
  10,11,7,

  7,9,32,
  10,7,32,

  8,5,32,

  4,4,32,
  5,4,32,
  4,5,32,
  5,5,32,

  2,2,32,
  8,2,32,

  1,5,7,
  2,5,7,
  3,5,7,


};

const uint8_t PROGMEM room5[] =
{
  12,12,
  42,

  4,6,3,
  6,1,10,

  10,2,5,
  0,9,0,
  0,10,2,

  3,11,8,
  4,11,8,
  1,8,32,
  2,8,32,
  3,8,9,
  4,8,9,

  5,8,32,
  6,8,32,
  7,8,32,
  8,8,32,

  10,9,32,
  10,10,32,

  1,7,32,
  2,7,32,
  3,7,32,
  4,7,32,
  5,7,32,
  6,7,32,
  7,7,32,

  9,5,9,
  10,5,9,

  3,4,32,
  4,4,32,
  5,4,32,
  6,4,32,
  7,4,32,
  8,4,32,
  9,4,32,
  10,4,32,

  4,3,32,
  8,3,32,
  9,3,32,
  10,3,32,

  2,5,32,

  5,3,7,
  6,3,7,
  7,3,7,
};

const uint8_t PROGMEM room6[] =
{
  6,24,
  27,

  2,0,2,
  3,0,2,

  1,0,24,
  4,0,25,

  2,2,25,
  3,2,24,

  1,6,8,

  1,7,24,
  4,7,25,

  1,10,8,
  2,10,8,
  3,10,8,

  1,11,22,
  2,11,22,
  3,11,24,

  4,14,25,

  1,17,8,
  3,17,8,

  1,18,24,
  3,18,21,

  2,21,21,

  1,22,8,
  4,22,8,

  1,23,24,
  4,23,25,

  2,23,2,
  3,23,2,
};

const uint8_t PROGMEM room7[] =
{
24,24,
177,

7,14,1,

6,14,10,

20,0,2,
21,0,2,

19,0,24,
22,0,25,

0,2,2,
0,3,2,

0,1,27,
0,4,30,

18,3,22,
19,3,22,
20,3,22,
21,3,22,
22,3,22,

10,3,26,
11,3,7,
12,3,7,
13,3,30,
14,3,28,
15,3,7,
16,3,7,
17,3,30,

10,4,31,
11,4,22,
12,4,22,
13,4,22,
14,4,22,
15,4,22,
16,4,22,
17,4,22,
18,4,29,

7,1,23,
7,2,23,
7,3,23,
7,4,23,
7,5,23,
7,6,23,
7,7,31,

8,7,22,
9,7,22,
10,7,22,
11,7,22,
12,7,22,
13,7,22,
14,7,22,
15,7,22,
16,7,22,
17,7,22,
18,7,22,
19,7,22,
20,7,29,

20,6,26,

10,6,3,


22,10,30,
21,10,8,
20,10,8,
19,10,8,

15,8,9,
16,8,9,
17,8,9,

18,10,28,
17,10,22,
16,10,22,
15,10,30,

12,8,23,
12,9,23,
12,10,23,
12,11,23,
12,12,23,
12,13,23,
12,14,23,
12,15,23,
12,16,23,
12,17,23,
12,18,23,
12,19,23,

15,11,23,
15,12,23,
15,13,23,
15,14,23,
15,15,23,
15,16,23,

14,13,8,
14,14,25,

13,17,8,
13,18,24,


18,13,22,
19,13,22,
20,13,22,
21,13,22,
22,13,22,

17,13,30,

17,14,23,
17,15,23,
17,16,23,

17,17,29,
16,17,22,
15,17,31,

18,11,31,
19,11,22,
20,11,22,
21,11,22,
22,11,22,

20,16,26,
20,17,23,
20,18,23,
20,19,23,

20,20,29,

13,20,22,
14,20,22,
15,20,22,
16,20,22,
17,20,22,
18,20,22,
19,20,22,

12,20,31,

22,22,7,

21,22,26,

17,22,26,

19,21,9,
15,21,9,


9,13,23,
9,14,23,
9,15,31,
10,15,22,
11,15,22,
9,16,9,

9,20,26,
9,21,23,
9,22,23,

6,21,22,
7,21,22,
8,21,22,

7,15,21,

5,18,26,
5,19,23,
5,20,23,
5,21,23,
5,22,23,

4,12,22,
5,12,22,
6,12,22,
7,12,22,
8,12,22,
9,12,22,
10,12,22,
11,12,22,

3,12,30,

5,13,9,
3,20,29,
2,20,25,
1,16,24,

4,22,30,
3,22,7,
2,22,26,

3,13,23,
3,14,23,
3,15,23,
3,16,23,
3,17,23,
3,18,23,
3,19,23,

1,4,24,

4,3,24,
3,3,25,

4,4,9,
3,4,9,

4,7,24,
3,7,25,

4,8,9,
3,8,9,

7,10,25,
8,10,22,
9,10,24,

7,20,3,

7,11,3,

};


const uint8_t PROGMEM room8[] =
{
  12,6,
  6,

  5,2,10,

  2,2,4,

  8,5,2,
  9,5,2,

  2,3,32,

  2,1,10,
};

const uint8_t PROGMEM room9[] =
{
  24,6,
  25,

  0,0,26,
  3,0,25,

  1,3,33,
  1,4,33,

  4,1,33,
  4,4,33,

  23,2,2,
  23,3,2,

  23,1,27,
  23,4,26,

  1,0,2,
  2,0,2,

  16,4,33,
  17,4,33,
  18,4,33,
  19,4,33,

  9,3,33,
  10,3,33,
  11,3,33,
  12,3,33,
  13,3,33,

  18,3,3,
  12,2,3,
  13,4,3,

  12,1,10,
};

const uint8_t PROGMEM room10[] =
{
  24,24,
  138,

  4,23,24,

  9,23,25,
  11,23,24,
  14,23,25,

  10,22,3,
  19,14,3,
  10,16,3,

  5,1,10,
  12,2,10,
  19,3,10,
  //

  12,6,11,

  18,22,8,

  22,23,2,
  21,23,2,
  1,23,2,
  2,23,2,

  23,23,27,
  20,23,24,
  0,23,27,
  3,23,25,

  19,16,23,
  19,17,23,
  19,18,23,
  19,19,23,
  19,20,23,
  19,21,23,
  19,22,23,

  19,15,22,

  22,19,25,
  22,20,9,

  20,15,24,
  18,15,25,

  18,16,9,
  20,16,9,

  16,13,9,
  17,13,9,
  18,13,9,
  19,13,9,
  20,13,9,
  21,13,9,
  22,13,9,

///

  16,12,22,
  17,12,22,
  18,12,22,
  19,12,22,
  20,12,22,
  21,12,22,
  22,12,22,

  15,12,30,

  15,13,23,
  15,14,23,
  15,15,23,
  15,16,23,
  15,17,23,
  15,18,23,
  15,19,23,

  15,20,29,

  16,19,24,
  16,20,9,

  14,20,25,
  14,17,25,

  11,17,33,
  11,20,33,

  12,23,8,
  13,23,8,

  ///

  5,23,7,
  6,23,7,
  7,23,7,
  8,23,7,

  1,20,33,
  2,20,33,
  3,20,33,
  4,20,33,
  5,20,33,
  6,20,33,
  7,20,33,
  8,20,33,
  9,20,33,
  10,20,33,

  1,19,7,
  2,19,7,
  3,19,7,
  4,19,7,
  5,19,7,
  6,19,7,
  7,19,7,
  8,19,7,

  9,17,33,
  10,17,33,
  9,18,33,
  10,18,33,
  9,19,33,
  10,19,33,


  /////

  4,15,32,

  9,14,32,
  10,14,32,
  11,14,32,
  12,14,32,
  13,14,32,
  14,14,32,

  9,11,32,
  9,12,32,
  9,13,32,

  6,9,32,
  6,10,32,

  6,11,32,
  7,11,32,
  8,11,32,

  1,11,32,
  2,11,32,
  3,11,32,
  1,10,32,

  3,8,32,
  4,8,32,
  5,8,32,
  6,8,32,
  7,8,32,
  9,8,32,
  10,8,32,
  11,8,32,
  12,8,32,
  13,8,32,
  14,8,32,
  15,8,32,
  16,8,32,
  17,8,32,
  18,8,32,
  19,8,32,
  21,8,32,
  22,8,32,

  11,11,33,
  12,11,33,
  13,11,33,

  5,4,32,
  6,4,32,

  11,4,32,
  12,4,32,

  17,4,32,
  18,4,32,

  4,23,24,
};

const uint8_t * const rooms[] = { 
  room1,
  room2,
  room3,
  room4,
  room5,
  room6,
  room7,
  room8,
  room9,
  room10
};
