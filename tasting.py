msg = "Hello Bruh..."
def encode(msg):
    b = ""
    for i in range(len(msg)-1,-1,-1):
        if (msg[i] == " "):
            b = b+"_"
            continue
        b = b+msg[i]
    return b
def decode(msg):
    b = ""
    for i in range(len(msg)-1, -1, -1):
        if (msg[i] == "_"):
            b = b+" "
            continue
        b = b+msg[i]
    return b
