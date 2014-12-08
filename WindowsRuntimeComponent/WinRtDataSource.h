#pragma once

#include <collection.h>

namespace WindowsRuntimeComponent{

	public delegate Windows::Foundation::Collections::IVector<int>^ DataProviderDelegatet(void);

	//The real data source class which is visible from C#
	public ref class WinRtDataSource sealed
	{
	private:
		WinRtDataSource();

		DataProviderDelegatet^ getList_; //The delegate which points to the C# function
		 static WinRtDataSource^ staticInstance_;
		

	internal:
		//The standard C++ layer calles into this function. This is internal, and not
		//exposed to C#. As you can see this is the method which converts between std and winRt types, so a good app design should
		//only call this method a few times. 
		static std::vector<int> GetData();

	public:
		property DataProviderDelegatet^ ListDelegate
		{
			DataProviderDelegatet^ get(){ return getList_; }
			void set(DataProviderDelegatet^ data) { getList_ = data; }
		}

		static property WinRtDataSource^ statInstance{
			WinRtDataSource^ get(){
				if (WinRtDataSource::staticInstance_ == nullptr){
					staticInstance_ = ref new WinRtDataSource();
				}
				return staticInstance_;
			}
		}
	};
}

