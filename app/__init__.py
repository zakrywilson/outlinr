# Import Flask class from flask module
from flask import Flask

# Initialize a Flask server
app = Flask(__name__)

# Import views.py under the app directory
from app import views
