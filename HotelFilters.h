#ifndef HOTELFILTERS_H
#define HOTELFILTERS_H
#include "Filters.h"
#include <algorithm>
#include <any>
#include <array>
#include <atomic>
#include <barrier>
#include <bit>
#include <cassert>
#include <cctype>
#include <cfloat>
#include <climits>
#include <clocale>
#include <compare>
#include <concepts>
#include <coroutine>
#include <cmath>
#include <complex>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <exception>
#include <execution>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <latch>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <memory_resource>
#include <mutex>
#include <new>
#include <numbers>
#include <numeric>
#include <optional>
#include <queue>
#include <random>
#include <ranges>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <set>
#include <stack>
#include <span>
#include <stdexcept>
#include <string>
#include <tuple>
#include <typeindex>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <variant>
#include <vector>
#include <version>

using namespace std;

class HotelFilters :
    public Filters
{
public:
    HotelFilters();
protected:
    //Star Rating
    int starRating;
    //Cleaning and Safety Practices
    bool enhancedCleaning;
    //Payment Type
    bool freeCancellation;
    bool reserveNowPayLater;
    //Property Type
    bool hotel;
    bool hotelResort;
    bool privateVacationHome;
    bool villa;
    bool condo;
    bool condominiumResort;
    bool cabin;
    bool apartment;
    //Meal plans available
    bool breakfastIncluded;
    bool lunchIncluded;
    bool dinnerIncluded;
    bool allInclusive;
    //Amenities
    bool pool;
    bool petFriendly;
    bool hotTub;
    bool spa;
    bool waterPark;
    bool casino;
    bool oceanView;
    bool parkingIncluded;
    bool kitchen;
    bool freeWifi;
    bool airportShuttle;
    bool airConditioned;
    bool washerAndDryer;
    //Accessibility
    bool accessibleBathroom;
    bool rollInShower;
    bool inRoomAccessibility;
    //Trip Type
    bool businessFriendly;
    bool familyFriendly;
};

#endif