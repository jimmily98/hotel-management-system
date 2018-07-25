#ifndef HOTEL_H
#define HOTEL_H
#incldue<QString>
#include<QVector>
//hotels{hotel{hotel_oneday}}

class room{
private:
  int m_RoomId;
  int m_RoomNum;
  QString m_RoomType;
  QString m_Facilities={
  
  }
  QVector<bool>Has_Facilities;//是否上述的设施
public:
  Room();
//get类接口




//set类接口





};

class Hotel{
private:
  QString m_HotelId;
  QString m_Name;
  QString m_Star;
  QString m_Category;
  QVector<Room> m_Rooms;
  QVector<int> m_RoomPrice;
  QString m_RoomDescription;
  QString m_Remark;
  QVector<QString>m_Requirements;
public:
  Hotel();
  //get类函数
  
  
  //set类函数
  
  
};
#endif

class Hotels{
private:
  QVector<Hotel> m_Hotels;
  
public:
  
  
  
};
