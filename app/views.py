# Import app variable from __init__.py
from app import app

# Import render_template to utilize Jinja2 templates
from flask import render_template

# Import request for handling POST request
from flask import request

# Import a json library for parsing json
import json

# Default landing page
@app.route('/')
def root():
  return render_template("index.html")

# HTTP POST endpoint to receive data
@app.route('/submit', methods=['POST'])
def submit():
  # Receive request message from frontend
  recv = request.json["input"]
  # Build response
  response = { "response": recv }
  return json.dumps(response)
