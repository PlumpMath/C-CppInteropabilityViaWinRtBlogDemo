using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StoreApp
{
    /// <summary>
    /// Represents a C# library which passes it's data to a pure C++ library. 
    /// </summary>
    class CsLibrary
    {
        /// <summary>
        /// This method delivers the data
        /// </summary>
        /// <returns></returns>
        public List<int> GetList()
        {
            return new List<int> { 1, 2, 3, 4, 5 };            
        }

    }
}
