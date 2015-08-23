# Import app variable from __init__.py
from app import app

# Default landing page
@app.route('/')
def root():
  return "Outlinr Home"
