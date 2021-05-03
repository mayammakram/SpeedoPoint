#include "HotelFilters.h"
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

HotelFilters::HotelFilters()
{
	starRating = NULL;
	enhancedCleaning = false;
	freeCancellation = false;
	reserveNowPayLater = false;
	hotel = false;
	hotelResort = false;
	privateVacationHome = false;
	villa = false;
	condo = false;
	condominiumResort = false;
	cabin = false;
	apartment = false;
	breakfastIncluded = false;
	lunchIncluded = false;
	dinnerIncluded = false;
	allInclusive = false;
	pool = false;
	petFriendly = false;
	hotTub = false;
	spa = false;
	waterPark = false;
	casino = false;
	oceanView = false;
	parkingIncluded = false;
	kitchen = false;
	freeWifi = false;
	airportShuttle = false;
	airConditioned = false;
	washerAndDryer = false;
	accessibleBathroom = false;
	rollInShower = false;
	inRoomAccessibility = false;
	businessFriendly = false;
	familyFriendly = false;
}