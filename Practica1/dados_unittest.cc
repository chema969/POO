// dados_unittest.cc: Juan A. Romero
// A sample program demonstrating using Google C++ testing framework.
//


// This sample shows how to write a more complex unit test for a class
// that has multiple member functions.
//
// Usually, it's a good idea to have one test for each method in your
// class.  You don't have to do that exactly, but it helps to keep
// your tests organized.  You may also throw in additional tests as
// needed.

#include "dados.h"
#include "gtest/gtest.h"

// Tests the c'tor.
TEST(Dados, Constructor) {
  Dados d;
  
  EXPECT_EQ(1, d.getDado1());
  EXPECT_EQ(1, d.getDado2());
  EXPECT_EQ(2, d.getSuma());
  
}

// Tests operación lanzamiento
TEST(Dados, Lanzamiento) {
  Dados d;
  for (int i=0; i<100; i++){
  d.lanzamiento();
  EXPECT_GT(d.getDado1(), 0);
  EXPECT_LT(d.getDado1(), 7);
  EXPECT_GT(d.getDado2(), 0);
  EXPECT_LT(d.getDado2(), 7);
}

}

// Tests operación suma
TEST(Dados, Suma) {
  Dados d;
  
  EXPECT_EQ(d.getDado1()+d.getDado2(), d.getSuma());
}

// Tests modificadores
TEST(Dados, Modificadores) {
  Dados d;
  
  EXPECT_FALSE(d.setDado1(9));
  EXPECT_FALSE(d.setDado1(-9));
  EXPECT_FALSE(d.setDado2(9));
  EXPECT_FALSE(d.setDado2(-9));
  d.setDado1(3);
  EXPECT_EQ(3, d.getDado1());
  d.setDado2(2);
  EXPECT_EQ(2, d.getDado2());
  EXPECT_EQ(5, d.getSuma());
}

TEST(Dados, ContarLanzamientos){
  Dados d;
  int i;
  EXPECT_EQ(0,d.getLanzamiento1());
  EXPECT_EQ(0,d.getLanzamiento2());
  for(i=0;i<18;i++){
    d.lanzamiento();
    } 
  EXPECT_EQ(18,d.getLanzamiento1());
  EXPECT_EQ(18,d.getLanzamiento2());
  d.setDado1(4);
  d.setDado1(132);
  EXPECT_EQ(19,d.getLanzamiento1());
  d.setDado2(4);
  d.setDado2(5);
  d.setDado2(13);
  EXPECT_EQ(20,d.getLanzamiento2());
}


TEST(Dados, Media){
  Dados d,q;
  int i;
   d.lanzamiento();
   EXPECT_GT(d.getMedia1(), 0);
   EXPECT_LT(d.getMedia1(), 7);
   EXPECT_GT(d.getMedia2(), 0);
   EXPECT_LT(d.getMedia2(), 7);
   for(i=0;i<=7;i++){
     q.setDado1(i);
     q.setDado2(i);
   }
   q.setDado1(2);
   q.setDado2(2);
   q.setDado1(1);
   q.setDado2(1);
   EXPECT_EQ(q.getMedia1(), q.getMedia2());
   EXPECT_EQ(q.getMedia1(), 3);
  }

TEST(Dados, Ultimos){
 Dados d;
 int i,v1[5],v2[5],*vr;
 vr=new int[5];
 for(i=4;i>=0;i--){
  d.lanzamiento();
  v1[i]=d.getDado1();
  v2[i]=d.getDado2();
 }
 d.getUltimos1(vr);
 for(i=0;i<5;i++){
 EXPECT_EQ(v1[i],vr[i]);
 }
 
 d.getUltimos2(vr);
 for(i=0;i<5;i++){
 EXPECT_EQ(v2[i],vr[i]);
 }
}
