#include "../Ch2/sales_data.h"

int main()
{
    Sales_data total;
    if (std::cin >> total.bookNo >> total.units_sold >> total.revenue)
    {
        Sales_data trans;
        // 读入并处理剩余交易记录
        while (std::cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
        {
            if (trans.bookNo == total.bookNo)
            {
                total.AddData(trans);
            }
            else
            {
                total.Print();
                total = trans;
            }
            
        }
        total.Print();
    }
    else
    {
        std::cout << "No data?!" << std::endl;
        return -1; 
    }
    
    return 0;
}