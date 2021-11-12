#pragma once

#include <cstdint>
#include <string>

namespace dgt {
class Year {
private:
  uint32_t m_year{1970};

public:
  Year() = default;
  explicit Year(uint32_t value);
  // TODO: add format as parameter
  std::string ToString();
};

class Month {
private:
  uint8_t m_month{1};

public:
  Month() = default;
  explicit Month(uint8_t value);
  // TODO: add format as parameter
  std::string ToString();
};

class Day {
private:
  uint8_t m_day{1};

public:
  Day() = default;
  explicit Day(uint8_t value);
  // TODO: add format as parameter
  std::string ToString();
};

class Date {
private:
  Day m_day;
  Month m_month;
  Year m_year;

public:
  Date() = default;
  explicit Date(Year year, Month month, Day day);
  // TODO: add format as parameter
  std::string ToString();
};
} // namespace dgt
