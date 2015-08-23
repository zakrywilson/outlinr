# Import app variable from __init__.py
from app import app

# Set debug to true so that the server restarts every time it
# notices a change
app.run(host='0.0.0.0', debug=True)
