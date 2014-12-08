#pragma once

#include "IDataSource.h"
#include <memory>

//Represents the portable cpp library which uses only standard C++ and can be compiled across different platforms 
class CppLogic
{
	//Interface to platform specific stuff
	std::unique_ptr<IDataSource> dataSource;

public:
	CppLogic(std::unique_ptr<IDataSource> dataSource_) : dataSource(std::move(dataSource_)){};
	
	//Represents one functions which needs data from the datasource
	std::vector<int> IncrementItems();
};

