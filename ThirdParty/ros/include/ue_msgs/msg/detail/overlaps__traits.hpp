// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ue_msgs:msg/Overlaps.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__MSG__DETAIL__OVERLAPS__TRAITS_HPP_
#define UE_MSGS__MSG__DETAIL__OVERLAPS__TRAITS_HPP_

#include "ue_msgs/msg/detail/overlaps__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ue_msgs::msg::Overlaps>()
{
  return "ue_msgs::msg::Overlaps";
}

template<>
inline const char * name<ue_msgs::msg::Overlaps>()
{
  return "ue_msgs/msg/Overlaps";
}

template<>
struct has_fixed_size<ue_msgs::msg::Overlaps>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ue_msgs::msg::Overlaps>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ue_msgs::msg::Overlaps>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UE_MSGS__MSG__DETAIL__OVERLAPS__TRAITS_HPP_
