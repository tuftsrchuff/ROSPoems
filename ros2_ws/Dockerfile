# Base ROS 2 image
FROM ros:iron

# Set the working directory
WORKDIR /ros2_ws

# Install necessary dependencies for building and running ROS 2
RUN apt-get update && apt-get install -y \
    python3-colcon-common-extensions \
    build-essential \
    python3-pip \
    ros-iron-ros2launch \
    && rm -rf /var/lib/apt/lists/*

RUN pip install requests

# Copy your workspace source code into the container
COPY src/ /ros2_ws/src/

# Install any additional dependencies (e.g., for custom interfaces)
RUN . /opt/ros/iron/setup.sh && \
    rosdep update && \
    rosdep install --from-paths src --ignore-src -r -y

# Build the ROS 2 workspace
RUN . /opt/ros/iron/setup.sh && colcon build

# Source ROS 2 and the workspace by default when the container runs
RUN echo "source /opt/ros/iron/setup.sh" >> ~/.bashrc && \
    echo "source /ros2_ws/install/setup.bash" >> ~/.bashrc

# Launch a shell by default when the container starts
CMD ["/bin/bash"]
