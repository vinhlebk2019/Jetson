// Generated by gencpp from file aev_pkg/system_monitor_msg.msg
// DO NOT EDIT!


#ifndef AEV_PKG_MESSAGE_SYSTEM_MONITOR_MSG_H
#define AEV_PKG_MESSAGE_SYSTEM_MONITOR_MSG_H


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
struct system_monitor_msg_
{
  typedef system_monitor_msg_<ContainerAllocator> Type;

  system_monitor_msg_()
    : errorFlag(false)
    , stopRequestFlag(false)
    , errorInfo(0)  {
    }
  system_monitor_msg_(const ContainerAllocator& _alloc)
    : errorFlag(false)
    , stopRequestFlag(false)
    , errorInfo(0)  {
  (void)_alloc;
    }



   typedef uint8_t _errorFlag_type;
  _errorFlag_type errorFlag;

   typedef uint8_t _stopRequestFlag_type;
  _stopRequestFlag_type stopRequestFlag;

   typedef uint32_t _errorInfo_type;
  _errorInfo_type errorInfo;





  typedef boost::shared_ptr< ::aev_pkg::system_monitor_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::aev_pkg::system_monitor_msg_<ContainerAllocator> const> ConstPtr;

}; // struct system_monitor_msg_

typedef ::aev_pkg::system_monitor_msg_<std::allocator<void> > system_monitor_msg;

typedef boost::shared_ptr< ::aev_pkg::system_monitor_msg > system_monitor_msgPtr;
typedef boost::shared_ptr< ::aev_pkg::system_monitor_msg const> system_monitor_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::aev_pkg::system_monitor_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::aev_pkg::system_monitor_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::aev_pkg::system_monitor_msg_<ContainerAllocator1> & lhs, const ::aev_pkg::system_monitor_msg_<ContainerAllocator2> & rhs)
{
  return lhs.errorFlag == rhs.errorFlag &&
    lhs.stopRequestFlag == rhs.stopRequestFlag &&
    lhs.errorInfo == rhs.errorInfo;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::aev_pkg::system_monitor_msg_<ContainerAllocator1> & lhs, const ::aev_pkg::system_monitor_msg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace aev_pkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::aev_pkg::system_monitor_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::aev_pkg::system_monitor_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aev_pkg::system_monitor_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aev_pkg::system_monitor_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aev_pkg::system_monitor_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aev_pkg::system_monitor_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::aev_pkg::system_monitor_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7fae4553a12c1b5cf670af37bb199a65";
  }

  static const char* value(const ::aev_pkg::system_monitor_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7fae4553a12c1b5cULL;
  static const uint64_t static_value2 = 0xf670af37bb199a65ULL;
};

template<class ContainerAllocator>
struct DataType< ::aev_pkg::system_monitor_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aev_pkg/system_monitor_msg";
  }

  static const char* value(const ::aev_pkg::system_monitor_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::aev_pkg::system_monitor_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool 	errorFlag\n"
"bool 	stopRequestFlag\n"
"uint32 	errorInfo\n"
;
  }

  static const char* value(const ::aev_pkg::system_monitor_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::aev_pkg::system_monitor_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.errorFlag);
      stream.next(m.stopRequestFlag);
      stream.next(m.errorInfo);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct system_monitor_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::aev_pkg::system_monitor_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::aev_pkg::system_monitor_msg_<ContainerAllocator>& v)
  {
    s << indent << "errorFlag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.errorFlag);
    s << indent << "stopRequestFlag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.stopRequestFlag);
    s << indent << "errorInfo: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.errorInfo);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AEV_PKG_MESSAGE_SYSTEM_MONITOR_MSG_H
