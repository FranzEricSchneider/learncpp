#include <iostream>

struct Advertising
{
    int ads_shown_to_users = 0;
    double percentage_users_click = 0.0;
    double profit_per_click = 0.0;
};

Advertising captureAdData()
{
    Advertising adInfo;
    std::cout << "Enter ads shown to users (int): ";
    std::cin >> adInfo.ads_shown_to_users;
    std::cout << "Enter fraction of users who click (float): ";
    std::cin >> adInfo.percentage_users_click;
    std::cout << "Enter profit per click (float): ";
    std::cin >> adInfo.profit_per_click;
    return adInfo;
}

void printAdvertisingRevenues(Advertising adInfo)
{
    std::cout << "With " << adInfo.ads_shown_to_users << " ads shown where " <<
                 adInfo.percentage_users_click << " fraction of users usually click, and " <<
                 adInfo.profit_per_click << " dollars per click, we predict we will make " <<
                 adInfo.ads_shown_to_users * adInfo.percentage_users_click * adInfo.profit_per_click << " dollars\n";
}

//int main()
//{
//    Advertising adInfo = captureAdData();
//    printAdvertisingRevenues(adInfo);
//    return 0;
//}
