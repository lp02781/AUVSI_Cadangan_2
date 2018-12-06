// Generated by gencpp from file kocheng/mission_status.msg
// DO NOT EDIT!


#ifndef KOCHENG_MESSAGE_MISSION_STATUS_H
#define KOCHENG_MESSAGE_MISSION_STATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace kocheng
{
template <class ContainerAllocator>
struct mission_status_
{
  typedef mission_status_<ContainerAllocator> Type;

  mission_status_()
    : mission_makara()  {
    }
  mission_status_(const ContainerAllocator& _alloc)
    : mission_makara(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _mission_makara_type;
  _mission_makara_type mission_makara;





  typedef boost::shared_ptr< ::kocheng::mission_status_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kocheng::mission_status_<ContainerAllocator> const> ConstPtr;

}; // struct mission_status_

typedef ::kocheng::mission_status_<std::allocator<void> > mission_status;

typedef boost::shared_ptr< ::kocheng::mission_status > mission_statusPtr;
typedef boost::shared_ptr< ::kocheng::mission_status const> mission_statusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kocheng::mission_status_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kocheng::mission_status_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace kocheng

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geographic_msgs': ['/opt/ros/kinetic/share/geographic_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'mavros_msgs': ['/opt/ros/kinetic/share/mavros_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'kocheng': ['/home/amvui/AUVSI/src/kocheng/msg'], 'uuid_msgs': ['/opt/ros/kinetic/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::kocheng::mission_status_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kocheng::mission_status_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kocheng::mission_status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kocheng::mission_status_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kocheng::mission_status_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kocheng::mission_status_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kocheng::mission_status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2e7801e6e1d9e6d8720e1966e071032b";
  }

  static const char* value(const ::kocheng::mission_status_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2e7801e6e1d9e6d8ULL;
  static const uint64_t static_value2 = 0x720e1966e071032bULL;
};

template<class ContainerAllocator>
struct DataType< ::kocheng::mission_status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kocheng/mission_status";
  }

  static const char* value(const ::kocheng::mission_status_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kocheng::mission_status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string mission_makara\n\
";
  }

  static const char* value(const ::kocheng::mission_status_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kocheng::mission_status_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mission_makara);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct mission_status_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kocheng::mission_status_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kocheng::mission_status_<ContainerAllocator>& v)
  {
    s << indent << "mission_makara: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.mission_makara);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KOCHENG_MESSAGE_MISSION_STATUS_H