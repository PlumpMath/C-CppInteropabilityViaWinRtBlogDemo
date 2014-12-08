// Class1.cpp
#include "pch.h"
#include "CppLogicWrapper.h"
#include "CppLogic.h"
#include "DataSource.h"

using namespace WindowsRuntimeComponent;
using namespace Platform;

CppLogicWrapper::CppLogicWrapper()
{

}

Windows::Foundation::Collections::IVector<int>^ CppLogicWrapper::IncrementItems(){
	
	auto retVal = ref new Platform::Collections::Vector<int>();		
	CppLogic cppLogic(std::make_unique<DataSource>());
	auto values = cppLogic.IncrementItems();

	for (auto item: values)
	{
		retVal->Append(item);
	}

	return retVal;
}