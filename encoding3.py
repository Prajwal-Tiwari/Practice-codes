import tasting
msg = input("Put text you want to deliver:")
encoded_msg = tasting.encode(msg)
decoded_msg = tasting.decode(encoded_msg)
print(decoded_msg)


