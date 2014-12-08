#pragma once

#include <collection.h>
namespace WindowsRuntimeComponent
{
	//The wrapper class which exposes the cpp layer into C# and JS.
    public ref class CppLogicWrapper sealed
    {
    public:
		CppLogicWrapper();

		Windows::Foundation::Collections::IVector<int>^ IncrementItems();
    };
}