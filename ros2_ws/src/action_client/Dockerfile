FROM ros:iron
WORKDIR /ros2_ws
COPY . /ros2_ws
RUN apt-get update && apt-get install -y python3-pip
RUN pip3 install --no-cache-dir colcon-common-extensions requests
RUN colcon build
ENTRYPOINT ["ros2", "run", "action_client", "poems_client"]