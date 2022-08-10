// Generated by gencpp from file self_msgs_and_srvs/output_point.msg
// DO NOT EDIT!


#ifndef SELF_MSGS_AND_SRVS_MESSAGE_OUTPUT_POINT_H
#define SELF_MSGS_AND_SRVS_MESSAGE_OUTPUT_POINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>

namespace self_msgs_and_srvs
{
template <class ContainerAllocator>
struct output_point_
{
  typedef output_point_<ContainerAllocator> Type;

  output_point_()
    : pos_mu()
    , pos_var()
    , vel_mu()
    , vel_var()
    , acc_mu()
    , acc_var()  {
    }
  output_point_(const ContainerAllocator& _alloc)
    : pos_mu(_alloc)
    , pos_var(_alloc)
    , vel_mu(_alloc)
    , vel_var(_alloc)
    , acc_mu(_alloc)
    , acc_var(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _pos_mu_type;
  _pos_mu_type pos_mu;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _pos_var_type;
  _pos_var_type pos_var;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _vel_mu_type;
  _vel_mu_type vel_mu;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _vel_var_type;
  _vel_var_type vel_var;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _acc_mu_type;
  _acc_mu_type acc_mu;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _acc_var_type;
  _acc_var_type acc_var;





  typedef boost::shared_ptr< ::self_msgs_and_srvs::output_point_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::self_msgs_and_srvs::output_point_<ContainerAllocator> const> ConstPtr;

}; // struct output_point_

typedef ::self_msgs_and_srvs::output_point_<std::allocator<void> > output_point;

typedef boost::shared_ptr< ::self_msgs_and_srvs::output_point > output_pointPtr;
typedef boost::shared_ptr< ::self_msgs_and_srvs::output_point const> output_pointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::self_msgs_and_srvs::output_point_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::self_msgs_and_srvs::output_point_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::self_msgs_and_srvs::output_point_<ContainerAllocator1> & lhs, const ::self_msgs_and_srvs::output_point_<ContainerAllocator2> & rhs)
{
  return lhs.pos_mu == rhs.pos_mu &&
    lhs.pos_var == rhs.pos_var &&
    lhs.vel_mu == rhs.vel_mu &&
    lhs.vel_var == rhs.vel_var &&
    lhs.acc_mu == rhs.acc_mu &&
    lhs.acc_var == rhs.acc_var;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::self_msgs_and_srvs::output_point_<ContainerAllocator1> & lhs, const ::self_msgs_and_srvs::output_point_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace self_msgs_and_srvs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::self_msgs_and_srvs::output_point_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::self_msgs_and_srvs::output_point_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::self_msgs_and_srvs::output_point_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::self_msgs_and_srvs::output_point_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::self_msgs_and_srvs::output_point_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::self_msgs_and_srvs::output_point_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::self_msgs_and_srvs::output_point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5cbc628d4028ac02bd3f45d03121084c";
  }

  static const char* value(const ::self_msgs_and_srvs::output_point_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5cbc628d4028ac02ULL;
  static const uint64_t static_value2 = 0xbd3f45d03121084cULL;
};

template<class ContainerAllocator>
struct DataType< ::self_msgs_and_srvs::output_point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "self_msgs_and_srvs/output_point";
  }

  static const char* value(const ::self_msgs_and_srvs::output_point_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::self_msgs_and_srvs::output_point_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Point pos_mu\n"
"geometry_msgs/Point pos_var\n"
"\n"
"geometry_msgs/Point vel_mu \n"
"geometry_msgs/Point vel_var\n"
"\n"
"# geometry_msgs/Point theta_mu \n"
"# geometry_msgs/Point theta_var\n"
"\n"
"geometry_msgs/Point acc_mu\n"
"geometry_msgs/Point acc_var\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::self_msgs_and_srvs::output_point_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::self_msgs_and_srvs::output_point_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pos_mu);
      stream.next(m.pos_var);
      stream.next(m.vel_mu);
      stream.next(m.vel_var);
      stream.next(m.acc_mu);
      stream.next(m.acc_var);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct output_point_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::self_msgs_and_srvs::output_point_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::self_msgs_and_srvs::output_point_<ContainerAllocator>& v)
  {
    s << indent << "pos_mu: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.pos_mu);
    s << indent << "pos_var: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.pos_var);
    s << indent << "vel_mu: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.vel_mu);
    s << indent << "vel_var: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.vel_var);
    s << indent << "acc_mu: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.acc_mu);
    s << indent << "acc_var: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.acc_var);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SELF_MSGS_AND_SRVS_MESSAGE_OUTPUT_POINT_H
