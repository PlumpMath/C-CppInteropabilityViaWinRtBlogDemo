#pragma once

#include <vector> 

//Represents the interface which delivers data to the cpp layer
class  IDataSource
{
public:
	virtual std::vector<int> GetData() = 0;
};
