#pragma once
#include <string>

namespace space_age {
class space_age {
 private:
  int64_t age;

 public:
  space_age() = default;
  explicit space_age(int64_t p_age) { age = p_age; }
  int64_t seconds() const;
  constexpr double on_earth() const noexcept { return age / 31557600.0; }
  constexpr double on_mercury() const noexcept {
    return age / (31557600.0 * 0.2408467);
  }
  constexpr double on_venus() const noexcept {
    return age / (31557600.0 * 0.61519726);
  }
  constexpr double on_mars() const noexcept {
    return age / (31557600.0 * 1.8808158);
  }
  constexpr double on_jupiter() const noexcept {
    return age / (31557600.0 * 11.862615);
  }
  constexpr double on_saturn() const noexcept {
    return age / (31557600.0 * 29.447498);
  }
  constexpr double on_uranus() const noexcept {
    return age / (31557600.0 * 84.016846);
  }
  constexpr double on_neptune() const noexcept {
    return age / (31557600.0 * 164.79132);
  }
};
}  // namespace space_age
