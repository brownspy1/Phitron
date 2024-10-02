import secrets

# Generate a token with 10000000 bytes, converted to a hexadecimal string
token = secrets.token_hex(100000000)


bruh = 30
print(token)
