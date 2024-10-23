class Product{
    constructor(name, price) {
        this.name = name;
        this.price = price;
    }
    displayProduct() {
        console.log(`Product: ${this.name}`);
        console.log(`Price: $${this.price.toFixed(2)}`);
    }

    calculateTotal(salesTax) {
        return this.price+(this.price*salesTax);
    }
}

const salesTax = 0.05;

const product1 = new Product("T-Shirt", 19.99);
const product2 = new Product("Pants", 22.50);
const product3 = new Product("Underwear", 100);
product1.displayProduct();
product2.displayProduct();
product3.displayProduct();

const total1 = product1.calculateTotal(salesTax);
const total2 = product2.calculateTotal(salesTax).toFixed(2);
const total3 = product3.calculateTotal(salesTax).toFixed(2);
console.log(`Total price with tax is: $${total1.toFixed(2)} for ${product1.name}`);
console.log(`Total price with tax is: $${total2} for ${product2.name}`);
console.log(`Total price with tax is: $${total3} for ${product3.name}`);