import hashlib

zeroes=4
limit=1000000000

def mine(block_num,transactions,previous_hash):
    for lim in range(limit):
        combined_text=str(block_num)+transactions+previous_hash+str(lim)
        try_hash=hashlib.sha256(combined_text.encode()).hexdigest()
        if try_hash.startswith('0'*zeroes):
            print(f"Found the Hash with the number: {lim}")
            return try_hash
    return -1

hash=mine(14,'787878fadd787','55567837f89ad')
print(hash)