import hashlib

class TorfidCoinBlock:
    def __init__(self,previous_block_hash,transaction_list):
        self.previous_block_hash=previous_block_hash
        self.transaction_list=transaction_list

        self.block_data="-".join(transaction_list)+"-"+previous_block_hash
        self.block_hash=hashlib.sha256(self.block_data.encode()).hexdigest()

t1="Ram sends 2 TDC to Sita"
t2="Shyam sends 4.1 TDC to Ram"
t3="Ram sends 8.1 TDC to Hari"
t4="Hari sends 0.3 TDC to Sita"
t5="Laxman sends 1.8 TDC to Ram"
t6="Sita sends 5 TDC to Laxman"

initial_block=TorfidCoinBlock("Initial String",{t1,t2})

print(initial_block.block_data)
print()
print(initial_block.block_hash)
print()

second_block=TorfidCoinBlock(initial_block.block_hash,{t2,t3})
print(second_block.block_data)
print()
print(second_block.block_hash)
print()

third_block=TorfidCoinBlock(second_block.block_hash,{t5,t6})
print(third_block.block_data)
print()
print(third_block.block_hash)
print()