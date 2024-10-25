// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg/Temperature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sensor_msgs/msg/temperature.hpp"


#ifndef SENSOR_MSGS__MSG__DETAIL__TEMPERATURE__TRAITS_HPP_
#define SENSOR_MSGS__MSG__DETAIL__TEMPERATURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sensor_msgs/msg/detail/temperature__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sensor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Temperature & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: variance
  {
    out << "variance: ";
    rosidl_generator_traits::value_to_yaml(msg.variance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Temperature & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "variance: ";
    rosidl_generator_traits::value_to_yaml(msg.variance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Temperature & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sensor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sensor_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sensor_msgs::msg::Temperature & msg,
  std::ostream & out, size_t indentation = 0)
{
  sensor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sensor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sensor_msgs::msg::Temperature & msg)
{
  return sensor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sensor_msgs::msg::Temperature>()
{
  return "sensor_msgs::msg::Temperature";
}

template<>
inline const char * name<sensor_msgs::msg::Temperature>()
{
  return "sensor_msgs/msg/Temperature";
}

template<>
struct has_fixed_size<sensor_msgs::msg::Temperature>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sensor_msgs::msg::Temperature>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sensor_msgs::msg::Temperature>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__DETAIL__TEMPERATURE__TRAITS_HPP_
