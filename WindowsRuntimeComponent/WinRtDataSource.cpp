#include "pch.h"
#include "WinRtDataSource.h"

using namespace WindowsRuntimeComponent;

WinRtDataSource^ WinRtDataSource::staticInstance_;

WinRtDataSource::WinRtDataSource()
{
}

std::vector<int> WinRtDataSource::GetData(){
	std::vector<int> retVal;
	
	if (statInstance->getList_ != nullptr){
		auto items = statInstance->getList_->Invoke();

		for (auto item : items){
			retVal.push_back(item);
		}

		return retVal;
	}
	else {
		throw ref new Platform::NullReferenceException("Delegate to the datesource for the CppLogicWrapper is not set");
	}
}
