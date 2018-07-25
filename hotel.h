#ifndef HOTEL_H
#define HOTEL_H
#incldue<QString>
#include<QVector>
//hotels{hotel{hotel_oneday}}

class Hotel_OneDay{
private:
  int m_HotelId;
  int m_RoomNum;
  QVector<QString>m_RoomType;
  QVector<int> m_RoomPrice;
  QString m_Name;
  QString m_Star;
  QString m_Description;
  QString m_Remark;
  QString m_Facilities={
  
  }
  QVector<bool>Has_Facilities;
  QString m_Category;
  QVector<QString>m_Requirements;
public:
//get类接口




//set类接口





};
#endif
