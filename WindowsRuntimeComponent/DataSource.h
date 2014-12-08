#pragma once

#include "IDataSource.h"
#include "WinRtDataSource.h"

//The data source implementation. 
//As you can see its interface is still standard C++, so the standard C++ layer can use it
class DataSource: public IDataSource
{
public:
	DataSource();
	~DataSource();

	//The implementation calles into a C++/Cx class
	std::vector<int> GetData(){
		return WindowsRuntimeComponent::WinRtDataSource::GetData();
	}
};

