
student = {
    'name': 'Amit',
    'roll': 101,
    'class': '5th',
    'phone': '9876543210',
    'email': 'amit@example.com'
}

# Access values
print("Name:", student['name'])
print("Roll:", student['roll'])

# Add a new key-value pair
student['address'] = 'Delhi'
print("After adding address:", student)

# Update a value
student['phone'] = '9123456789'
print("After updating phone:", student)

# Remove a key-value pair
student.pop('email')
print("After removing email:", student)

# Check if a key exists
if 'class' in student:
    print("Class is present in student info.")

# Get all keys and values
print("Keys:", list(student.keys()))
print("Values:", list(student.values()))
