import hashlib

class ShivaCoin:
    def __init__(self,previous_block,transactions):
        self.previous_block=previous_block
        self.transactions=transactions

        self.block_data='-'.join(self.transactions)+self.previous_block
        self.block_hash=hashlib.sha256(self.block_data.encode()).hexdigest()

t1="ShivaRam gives Hari 5.2 SC"
t2="Pujan gives ShivaRam 2 SC"
t3="Dikshyant gives Pujan 9 SC"
t4="Ravi gives Rohit 3.6 SC"
t5="Rona gives Liya 4.2 SC"
t6="Sita gives Shiva 5 SC"

first_block=ShivaCoin("First Block",{t1,t2})
print()
print(first_block.block_data)
print()
print(first_block.block_hash)
print()