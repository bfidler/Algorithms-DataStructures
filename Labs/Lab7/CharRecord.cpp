//Brayden Fidler
#include "CharRecord.h"


//Default Constructor
CharRecord::CharRecord() : charStr(""), count(0)
{}


//Constructor
CharRecord::CharRecord(string cs, int c) : charStr(cs), count(c)
{}


//Returns the string of the CharRecord
string CharRecord::getCharString() const
{
  return charStr;
}


//Returns the count of CharRecord
int CharRecord::getCount() const
{
  return count;
}


//Greater than operator for CharRecord
bool CharRecord::operator > (const CharRecord & other)
{
  if (this->count != other.count)
    return (this->count > other.count);
  else
    return (this->charStr > other.charStr);
}


//Less than operator for CharRecord
bool CharRecord::operator < (const CharRecord & other)
{  
  if (this->count != other.count)
    return (this->count < other.count);
  else
    return (this->charStr < other.charStr);
}

