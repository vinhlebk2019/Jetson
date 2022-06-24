// Generated by gencpp from file aev_pkg/mpc_msg.msg
// DO NOT EDIT!


#ifndef AEV_PKG_MESSAGE_MPC_MSG_H
#define AEV_PKG_MESSAGE_MPC_MSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace aev_pkg
{
template <class ContainerAllocator>
struct mpc_msg_
{
  typedef mpc_msg_<ContainerAllocator> Type;

  mpc_msg_()
    : msg_counter(0)
    , SteeringAngle(0.0)  {
    }
  mpc_msg_(const ContainerAllocator& _alloc)
    : msg_counter(0)
    , SteeringAngle(0.0)  {
  (void)_alloc;
    }



   typedef uint32_t _msg_counter_type;
  _msg_counter_type msg_counter;

   typedef float _SteeringAngle_type;
  _SteeringAngle_type SteeringAngle;





  typedef boost::shared_ptr< ::aev_pkg::mpc_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::aev_pkg::mpc_msg_<ContainerAllocator> const> ConstPtr;

}; // struct mpc_msg_

typedef ::aev_pkg::mpc_msg_<std::allocator<void> > mpc_msg;

typedef boost::shared_ptr< ::aev_pkg::mpc_msg > mpc_msgPtr;
typedef boost::shared_ptr< ::aev_pkg::mpc_msg const> mpc_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::aev_pkg::mpc_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::aev_pkg::mpc_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::aev_pkg::mpc_msg_<ContainerAllocator1> & lhs, const ::aev_pkg::mpc_msg_<ContainerAllocator2> & rhs)
{
  return lhs.msg_counter == rhs.msg_counter &&
    lhs.SteeringAngle == rhs.SteeringAngle;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::aev_pkg::mpc_msg_<ContainerAllocator1> & lhs, const ::aev_pkg::mpc_msg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace aev_pkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::aev_pkg::mpc_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::aev_pkg::mpc_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aev_pkg::mpc_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aev_pkg::mpc_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aev_pkg::mpc_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aev_pkg::mpc_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::aev_pkg::mpc_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ab2da2dc4dc2caa0d3e85d831457bbdf";
  }

  static const char* value(const ::aev_pkg::mpc_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xab2da2dc4dc2caa0ULL;
  static const uint64_t static_value2 = 0xd3e85d831457bbdfULL;
};

template<class ContainerAllocator>
struct DataType< ::aev_pkg::mpc_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aev_pkg/mpc_msg";
  }

  static const char* value(const ::aev_pkg::mpc_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::aev_pkg::mpc_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 	msg_counter\n"
"float32 SteeringAngle \n"
;
  }

  static const char* value(const ::aev_pkg::mpc_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::aev_pkg::mpc_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.msg_counter);
      stream.next(m.SteeringAngle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct mpc_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::aev_pkg::mpc_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::aev_pkg::mpc_msg_<ContainerAllocator>& v)
  {
    s << indent << "msg_counter: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.msg_counter);
    s << indent << "SteeringAngle: ";
    Printer<float>::stream(s, indent + "  ", v.SteeringAngle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AEV_PKG_MESSAGE_MPC_MSG_H
