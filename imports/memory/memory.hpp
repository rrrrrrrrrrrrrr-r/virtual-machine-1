#pragma once
struct cell{
union{
  unsigned short raw;
  struct{
    unsigned char b1:1;
    unsigned char b1a:1;
    unsigned char b2:1;
    unsigned char b2a:1;
    unsigned char b3:1;
    unsigned char b3a:1;
    unsigned char b4:1;
    unsigned char b4a:1;
    unsigned char b5:1;
    unsigned char b5a:1;
    unsigned char b6:1;
    unsigned char b6a:1;
    unsigned char b7:1;
    unsigned char b7a:1;
    unsigned char b8:1;
    unsigned char b8a:1;
  };
};
};
inline cell mem[4096];
