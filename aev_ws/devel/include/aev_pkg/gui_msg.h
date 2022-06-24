// Generated by gencpp from file aev_pkg/gui_msg.msg
// DO NOT EDIT!


#ifndef AEV_PKG_MESSAGE_GUI_MSG_H
#define AEV_PKG_MESSAGE_GUI_MSG_H


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
struct gui_msg_
{
  typedef gui_msg_<ContainerAllocator> Type;

  gui_msg_()
    : msg_counter(0)
    , userReqStart(false)
    , userReqAutoRun(false)
    , userReqStop(false)
    , clearError(false)
    , speedSetpoint(0)
    , turnSignal(0)
    , horn(false)
    , frontLight(false)
    , steeringLeftRight(0)  {
    }
  gui_msg_(const ContainerAllocator& _alloc)
    : msg_counter(0)
    , userReqStart(false)
    , userReqAutoRun(false)
    , userReqStop(false)
    , clearError(false)
    , speedSetpoint(0)
    , turnSignal(0)
    , horn(false)
    , frontLight(false)
    , steeringLeftRight(0)  {
  (void)_alloc;
    }



   typedef uint32_t _msg_counter_type;
  _msg_counter_type msg_counter;

   typedef uint8_t _userReqStart_type;
  _userReqStart_type userReqStart;

   typedef uint8_t _userReqAutoRun_type;
  _userReqAutoRun_type userReqAutoRun;

   typedef uint8_t _userReqStop_type;
  _userReqStop_type userReqStop;

   typedef uint8_t _clearError_type;
  _clearError_type clearError;

   typedef int16_t _speedSetpoint_type;
  _speedSetpoint_type speedSetpoint;

   typedef uint8_t _turnSignal_type;
  _turnSignal_type turnSignal;

   typedef uint8_t _horn_type;
  _horn_type horn;

   typedef uint8_t _frontLight_type;
  _frontLight_type frontLight;

   typedef uint8_t _steeringLeftRight_type;
  _steeringLeftRight_type steeringLeftRight;





  typedef boost::shared_ptr< ::aev_pkg::gui_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::aev_pkg::gui_msg_<ContainerAllocator> const> ConstPtr;

}; // struct gui_msg_

typedef ::aev_pkg::gui_msg_<std::allocator<void> > gui_msg;

typedef boost::shared_ptr< ::aev_pkg::gui_msg > gui_msgPtr;
typedef boost::shared_ptr< ::aev_pkg::gui_msg const> gui_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::aev_pkg::gui_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::aev_pkg::gui_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::aev_pkg::gui_msg_<ContainerAllocator1> & lhs, const ::aev_pkg::gui_msg_<ContainerAllocator2> & rhs)
{
  return lhs.msg_counter == rhs.msg_counter &&
    lhs.userReqStart == rhs.userReqStart &&
    lhs.userReqAutoRun == rhs.userReqAutoRun &&
    lhs.userReqStop == rhs.userReqStop &&
    lhs.clearError == rhs.clearError &&
    lhs.speedSetpoint == rhs.speedSetpoint &&
    lhs.turnSignal == rhs.turnSignal &&
    lhs.horn == rhs.horn &&
    lhs.frontLight == rhs.frontLight &&
    lhs.steeringLeftRight == rhs.steeringLeftRight;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::aev_pkg::gui_msg_<ContainerAllocator1> & lhs, const ::aev_pkg::gui_msg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace aev_pkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::aev_pkg::gui_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::aev_pkg::gui_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aev_pkg::gui_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aev_pkg::gui_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aev_pkg::gui_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aev_pkg::gui_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::aev_pkg::gui_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0288aa76c680cc5123702f434a849fe7";
  }

  static const char* value(const ::aev_pkg::gui_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0288aa76c680cc51ULL;
  static const uint64_t static_value2 = 0x23702f434a849fe7ULL;
};

template<class ContainerAllocator>
struct DataType< ::aev_pkg::gui_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aev_pkg/gui_msg";
  }

  static const char* value(const ::aev_pkg::gui_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::aev_pkg::gui_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 	msg_counter\n"
"bool 	userReqStart\n"
"bool 	userReqAutoRun\n"
"bool 	userReqStop\n"
"bool 	clearError\n"
"int16 	speedSetpoint\n"
"uint8 	turnSignal\n"
"bool 	horn\n"
"bool 	frontLight\n"
"uint8 steeringLeftRight\n"
;
  }

  static const char* value(const ::aev_pkg::gui_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::aev_pkg::gui_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.msg_counter);
      stream.next(m.userReqStart);
      stream.next(m.userReqAutoRun);
      stream.next(m.userReqStop);
      stream.next(m.clearError);
      stream.next(m.speedSetpoint);
      stream.next(m.turnSignal);
      stream.next(m.horn);
      stream.next(m.frontLight);
      stream.next(m.steeringLeftRight);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct gui_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::aev_pkg::gui_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::aev_pkg::gui_msg_<ContainerAllocator>& v)
  {
    s << indent << "msg_counter: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.msg_counter);
    s << indent << "userReqStart: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.userReqStart);
    s << indent << "userReqAutoRun: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.userReqAutoRun);
    s << indent << "userReqStop: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.userReqStop);
    s << indent << "clearError: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.clearError);
    s << indent << "speedSetpoint: ";
    Printer<int16_t>::stream(s, indent + "  ", v.speedSetpoint);
    s << indent << "turnSignal: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.turnSignal);
    s << indent << "horn: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.horn);
    s << indent << "frontLight: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.frontLight);
    s << indent << "steeringLeftRight: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.steeringLeftRight);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AEV_PKG_MESSAGE_GUI_MSG_H
