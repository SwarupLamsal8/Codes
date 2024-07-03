import requests
from PyPDF2 import PdfReader
import io

def download_pdf(url, output_path):
    response = requests.get(url)
    if response.status_code == 200:
        with open(output_path, 'wb') as file:
            file.write(response.content)
        print(f"PDF downloaded successfully: {output_path}")
    else:
        print(f"Failed to download PDF. Status code: {response.status_code}")

def read_pdf(file_path):
    with open(file_path, 'rb') as file:
        reader = PdfReader(file)
        text = ""
        for page in reader.pages:
            text += page.extract_text()
        return text

# Example usage:
pdf_url = "https://drive.google.com/file/d/1DLS6TTkpLXp0v02-zPltKDmNpjil0se3/view?usp=sharing"  # Replace with the actual URL of the PDF
output_file = "D:\PDF Scraper\sample.pdf"

download_pdf(pdf_url, output_file)
pdf_text = read_pdf(output_file)
print("PDF content:")
print(pdf_text)
