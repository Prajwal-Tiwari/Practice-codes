# tcp_simulation.py
file_data = "This is a test file to demonstrate how TCP and UDP work differently while transferring data reliably or unreliably."
chunk_size = 20

# Simulate file split
chunks = [file_data[i:i+chunk_size] for i in range(0, len(file_data), chunk_size)]

print("TCP Simulation: Starting transfer...\n")

received = []

for i, chunk in enumerate(chunks):
    print(f"Sending chunk {i+1}: '{chunk}'")
    
    # Simulate ACK
    ack = True  # In real TCP, if not acked, it resends
    if ack:
        print(f"ACK received for chunk {i+1}")
        received.append(chunk)

print("\nTCP: File Reassembled:")
print("".join(received))
