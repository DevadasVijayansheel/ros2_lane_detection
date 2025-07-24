# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lane_msgs:msg/LaneInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneInfo(type):
    """Metaclass of message 'LaneInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lane_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lane_msgs.msg.LaneInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_info

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from geometry_msgs.msg import Polygon
            if Polygon.__class__._TYPE_SUPPORT is None:
                Polygon.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LaneInfo(metaclass=Metaclass_LaneInfo):
    """Message class 'LaneInfo'."""

    __slots__ = [
        '_left_lane',
        '_right_lane',
        '_center_line',
        '_lane_width',
        '_lane_type',
        '_lane_angle',
        '_curvature_radius',
        '_stamp',
    ]

    _fields_and_field_types = {
        'left_lane': 'geometry_msgs/Polygon',
        'right_lane': 'geometry_msgs/Polygon',
        'center_line': 'geometry_msgs/Polygon',
        'lane_width': 'float',
        'lane_type': 'string',
        'lane_angle': 'float',
        'curvature_radius': 'float',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Polygon'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Polygon'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Polygon'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Polygon
        self.left_lane = kwargs.get('left_lane', Polygon())
        from geometry_msgs.msg import Polygon
        self.right_lane = kwargs.get('right_lane', Polygon())
        from geometry_msgs.msg import Polygon
        self.center_line = kwargs.get('center_line', Polygon())
        self.lane_width = kwargs.get('lane_width', float())
        self.lane_type = kwargs.get('lane_type', str())
        self.lane_angle = kwargs.get('lane_angle', float())
        self.curvature_radius = kwargs.get('curvature_radius', float())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.left_lane != other.left_lane:
            return False
        if self.right_lane != other.right_lane:
            return False
        if self.center_line != other.center_line:
            return False
        if self.lane_width != other.lane_width:
            return False
        if self.lane_type != other.lane_type:
            return False
        if self.lane_angle != other.lane_angle:
            return False
        if self.curvature_radius != other.curvature_radius:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def left_lane(self):
        """Message field 'left_lane'."""
        return self._left_lane

    @left_lane.setter
    def left_lane(self, value):
        if __debug__:
            from geometry_msgs.msg import Polygon
            assert \
                isinstance(value, Polygon), \
                "The 'left_lane' field must be a sub message of type 'Polygon'"
        self._left_lane = value

    @builtins.property
    def right_lane(self):
        """Message field 'right_lane'."""
        return self._right_lane

    @right_lane.setter
    def right_lane(self, value):
        if __debug__:
            from geometry_msgs.msg import Polygon
            assert \
                isinstance(value, Polygon), \
                "The 'right_lane' field must be a sub message of type 'Polygon'"
        self._right_lane = value

    @builtins.property
    def center_line(self):
        """Message field 'center_line'."""
        return self._center_line

    @center_line.setter
    def center_line(self, value):
        if __debug__:
            from geometry_msgs.msg import Polygon
            assert \
                isinstance(value, Polygon), \
                "The 'center_line' field must be a sub message of type 'Polygon'"
        self._center_line = value

    @builtins.property
    def lane_width(self):
        """Message field 'lane_width'."""
        return self._lane_width

    @lane_width.setter
    def lane_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lane_width' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lane_width' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lane_width = value

    @builtins.property
    def lane_type(self):
        """Message field 'lane_type'."""
        return self._lane_type

    @lane_type.setter
    def lane_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lane_type' field must be of type 'str'"
        self._lane_type = value

    @builtins.property
    def lane_angle(self):
        """Message field 'lane_angle'."""
        return self._lane_angle

    @lane_angle.setter
    def lane_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lane_angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lane_angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lane_angle = value

    @builtins.property
    def curvature_radius(self):
        """Message field 'curvature_radius'."""
        return self._curvature_radius

    @curvature_radius.setter
    def curvature_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'curvature_radius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'curvature_radius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._curvature_radius = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value
