// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ue_msgs:action/SimShutDown.idl
// generated code does not contain a copyright notice

#ifndef UE_MSGS__ACTION__DETAIL__SIM_SHUT_DOWN__STRUCT_HPP_
#define UE_MSGS__ACTION__DETAIL__SIM_SHUT_DOWN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ue_msgs__action__SimShutDown_Goal __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__action__SimShutDown_Goal __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SimShutDown_Goal_
{
  using Type = SimShutDown_Goal_<ContainerAllocator>;

  explicit SimShutDown_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SimShutDown_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::action::SimShutDown_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::action::SimShutDown_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::action::SimShutDown_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::action::SimShutDown_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::action::SimShutDown_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::action::SimShutDown_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::action::SimShutDown_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::action::SimShutDown_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::action::SimShutDown_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::action::SimShutDown_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__action__SimShutDown_Goal
    std::shared_ptr<ue_msgs::action::SimShutDown_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__action__SimShutDown_Goal
    std::shared_ptr<ue_msgs::action::SimShutDown_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimShutDown_Goal_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimShutDown_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimShutDown_Goal_

// alias to use template instance with default allocator
using SimShutDown_Goal =
  ue_msgs::action::SimShutDown_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ue_msgs


#ifndef _WIN32
# define DEPRECATED__ue_msgs__action__SimShutDown_Result __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__action__SimShutDown_Result __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SimShutDown_Result_
{
  using Type = SimShutDown_Result_<ContainerAllocator>;

  explicit SimShutDown_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SimShutDown_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::action::SimShutDown_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::action::SimShutDown_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::action::SimShutDown_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::action::SimShutDown_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::action::SimShutDown_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::action::SimShutDown_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::action::SimShutDown_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::action::SimShutDown_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::action::SimShutDown_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::action::SimShutDown_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__action__SimShutDown_Result
    std::shared_ptr<ue_msgs::action::SimShutDown_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__action__SimShutDown_Result
    std::shared_ptr<ue_msgs::action::SimShutDown_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimShutDown_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimShutDown_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimShutDown_Result_

// alias to use template instance with default allocator
using SimShutDown_Result =
  ue_msgs::action::SimShutDown_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ue_msgs


#ifndef _WIN32
# define DEPRECATED__ue_msgs__action__SimShutDown_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__action__SimShutDown_Feedback __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SimShutDown_Feedback_
{
  using Type = SimShutDown_Feedback_<ContainerAllocator>;

  explicit SimShutDown_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->done = false;
    }
  }

  explicit SimShutDown_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->done = false;
    }
  }

  // field types and members
  using _done_type =
    bool;
  _done_type done;

  // setters for named parameter idiom
  Type & set__done(
    const bool & _arg)
  {
    this->done = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::action::SimShutDown_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::action::SimShutDown_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::action::SimShutDown_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::action::SimShutDown_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::action::SimShutDown_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::action::SimShutDown_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::action::SimShutDown_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::action::SimShutDown_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::action::SimShutDown_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::action::SimShutDown_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__action__SimShutDown_Feedback
    std::shared_ptr<ue_msgs::action::SimShutDown_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__action__SimShutDown_Feedback
    std::shared_ptr<ue_msgs::action::SimShutDown_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimShutDown_Feedback_ & other) const
  {
    if (this->done != other.done) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimShutDown_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimShutDown_Feedback_

// alias to use template instance with default allocator
using SimShutDown_Feedback =
  ue_msgs::action::SimShutDown_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ue_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "ue_msgs/action/detail/sim_shut_down__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ue_msgs__action__SimShutDown_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__action__SimShutDown_SendGoal_Request __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SimShutDown_SendGoal_Request_
{
  using Type = SimShutDown_SendGoal_Request_<ContainerAllocator>;

  explicit SimShutDown_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit SimShutDown_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    ue_msgs::action::SimShutDown_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const ue_msgs::action::SimShutDown_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::action::SimShutDown_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::action::SimShutDown_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::action::SimShutDown_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::action::SimShutDown_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::action::SimShutDown_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::action::SimShutDown_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::action::SimShutDown_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::action::SimShutDown_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::action::SimShutDown_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::action::SimShutDown_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__action__SimShutDown_SendGoal_Request
    std::shared_ptr<ue_msgs::action::SimShutDown_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__action__SimShutDown_SendGoal_Request
    std::shared_ptr<ue_msgs::action::SimShutDown_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimShutDown_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimShutDown_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimShutDown_SendGoal_Request_

// alias to use template instance with default allocator
using SimShutDown_SendGoal_Request =
  ue_msgs::action::SimShutDown_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ue_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ue_msgs__action__SimShutDown_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__action__SimShutDown_SendGoal_Response __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SimShutDown_SendGoal_Response_
{
  using Type = SimShutDown_SendGoal_Response_<ContainerAllocator>;

  explicit SimShutDown_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit SimShutDown_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::action::SimShutDown_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::action::SimShutDown_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::action::SimShutDown_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::action::SimShutDown_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::action::SimShutDown_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::action::SimShutDown_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::action::SimShutDown_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::action::SimShutDown_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::action::SimShutDown_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::action::SimShutDown_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__action__SimShutDown_SendGoal_Response
    std::shared_ptr<ue_msgs::action::SimShutDown_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__action__SimShutDown_SendGoal_Response
    std::shared_ptr<ue_msgs::action::SimShutDown_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimShutDown_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimShutDown_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimShutDown_SendGoal_Response_

// alias to use template instance with default allocator
using SimShutDown_SendGoal_Response =
  ue_msgs::action::SimShutDown_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ue_msgs

namespace ue_msgs
{

namespace action
{

struct SimShutDown_SendGoal
{
  using Request = ue_msgs::action::SimShutDown_SendGoal_Request;
  using Response = ue_msgs::action::SimShutDown_SendGoal_Response;
};

}  // namespace action

}  // namespace ue_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ue_msgs__action__SimShutDown_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__action__SimShutDown_GetResult_Request __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SimShutDown_GetResult_Request_
{
  using Type = SimShutDown_GetResult_Request_<ContainerAllocator>;

  explicit SimShutDown_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit SimShutDown_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::action::SimShutDown_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::action::SimShutDown_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::action::SimShutDown_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::action::SimShutDown_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::action::SimShutDown_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::action::SimShutDown_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::action::SimShutDown_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::action::SimShutDown_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::action::SimShutDown_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::action::SimShutDown_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__action__SimShutDown_GetResult_Request
    std::shared_ptr<ue_msgs::action::SimShutDown_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__action__SimShutDown_GetResult_Request
    std::shared_ptr<ue_msgs::action::SimShutDown_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimShutDown_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimShutDown_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimShutDown_GetResult_Request_

// alias to use template instance with default allocator
using SimShutDown_GetResult_Request =
  ue_msgs::action::SimShutDown_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ue_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "ue_msgs/action/detail/sim_shut_down__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ue_msgs__action__SimShutDown_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__action__SimShutDown_GetResult_Response __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SimShutDown_GetResult_Response_
{
  using Type = SimShutDown_GetResult_Response_<ContainerAllocator>;

  explicit SimShutDown_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit SimShutDown_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    ue_msgs::action::SimShutDown_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const ue_msgs::action::SimShutDown_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::action::SimShutDown_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::action::SimShutDown_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::action::SimShutDown_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::action::SimShutDown_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::action::SimShutDown_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::action::SimShutDown_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::action::SimShutDown_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::action::SimShutDown_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::action::SimShutDown_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::action::SimShutDown_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__action__SimShutDown_GetResult_Response
    std::shared_ptr<ue_msgs::action::SimShutDown_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__action__SimShutDown_GetResult_Response
    std::shared_ptr<ue_msgs::action::SimShutDown_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimShutDown_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimShutDown_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimShutDown_GetResult_Response_

// alias to use template instance with default allocator
using SimShutDown_GetResult_Response =
  ue_msgs::action::SimShutDown_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ue_msgs

namespace ue_msgs
{

namespace action
{

struct SimShutDown_GetResult
{
  using Request = ue_msgs::action::SimShutDown_GetResult_Request;
  using Response = ue_msgs::action::SimShutDown_GetResult_Response;
};

}  // namespace action

}  // namespace ue_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "ue_msgs/action/detail/sim_shut_down__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ue_msgs__action__SimShutDown_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__ue_msgs__action__SimShutDown_FeedbackMessage __declspec(deprecated)
#endif

namespace ue_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SimShutDown_FeedbackMessage_
{
  using Type = SimShutDown_FeedbackMessage_<ContainerAllocator>;

  explicit SimShutDown_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit SimShutDown_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    ue_msgs::action::SimShutDown_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const ue_msgs::action::SimShutDown_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ue_msgs::action::SimShutDown_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const ue_msgs::action::SimShutDown_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ue_msgs::action::SimShutDown_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ue_msgs::action::SimShutDown_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ue_msgs::action::SimShutDown_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::action::SimShutDown_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ue_msgs::action::SimShutDown_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ue_msgs::action::SimShutDown_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ue_msgs::action::SimShutDown_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ue_msgs::action::SimShutDown_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ue_msgs__action__SimShutDown_FeedbackMessage
    std::shared_ptr<ue_msgs::action::SimShutDown_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ue_msgs__action__SimShutDown_FeedbackMessage
    std::shared_ptr<ue_msgs::action::SimShutDown_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SimShutDown_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const SimShutDown_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SimShutDown_FeedbackMessage_

// alias to use template instance with default allocator
using SimShutDown_FeedbackMessage =
  ue_msgs::action::SimShutDown_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace ue_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace ue_msgs
{

namespace action
{

struct SimShutDown
{
  /// The goal message defined in the action definition.
  using Goal = ue_msgs::action::SimShutDown_Goal;
  /// The result message defined in the action definition.
  using Result = ue_msgs::action::SimShutDown_Result;
  /// The feedback message defined in the action definition.
  using Feedback = ue_msgs::action::SimShutDown_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = ue_msgs::action::SimShutDown_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = ue_msgs::action::SimShutDown_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = ue_msgs::action::SimShutDown_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct SimShutDown SimShutDown;

}  // namespace action

}  // namespace ue_msgs

#endif  // UE_MSGS__ACTION__DETAIL__SIM_SHUT_DOWN__STRUCT_HPP_
