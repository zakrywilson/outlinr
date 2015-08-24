# Import app variable from __init__.py
from app import app

# Import OutlinrNLP to do parsing
from nlp.outlinr import OutlinrNLP

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

  # Create a new instance of the NLP engine
  nlp = OutlinrNLP(recv)
  nlp.parse()

  # Holder for our return data
  data = {}

  # Put the tuple from the NLP engine into a dictionary
  for word, freq in nlp.get_data():
    data[word] = freq

  return json.dumps(data)
