from setuptools import find_packages
from setuptools import setup

setup(
    name='lane_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('lane_msgs', 'lane_msgs.*')),
)
