# Use a counter for high performance frequency counting
from collections import Counter

class OutlinrNLP():
  # Initialize with a string as data
  def __init__(self, data=''):
   self.data = data 

  # Override what gets printed when casted to a string
  def __repr__(self):
    return "%s" % str(self.data)

  # Perform a parse on the data input
  def parse(self):
    # Find frequency for the input text
    lowercased = self.data.lower()
    self.counter = Counter(lowercased.split()) 

  # Returns a list with the word and frequencies of each item in the counter
  def get_data(self):
    return [ freq for freq in self.counter.iteritems() ]
