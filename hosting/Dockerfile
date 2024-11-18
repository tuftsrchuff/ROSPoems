FROM python:3.8-slim

# Install Flask
WORKDIR /hosting
COPY requirements.txt /hosting/
RUN pip install -r requirements.txt

# Add your application code
COPY . /hosting

# Expose the port Flask will run on
EXPOSE 5000

# CMD ["python3", "/hosting/api.py", "--host=0.0.0.0"]
ENTRYPOINT ["python", "/hosting/api.py", "--host=0.0.0.0", "--port=5000"]
