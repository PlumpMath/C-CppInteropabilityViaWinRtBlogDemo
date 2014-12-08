#include "CppLogic.h"

std::vector<int> CppLogic::IncrementItems(){
	if (dataSource != nullptr){
		auto data = dataSource->GetData();

		for (auto& item : data){
			item++;
		}

		return data;
	}
	else
	{
		throw std::exception("Datasource is not set");
	}
}