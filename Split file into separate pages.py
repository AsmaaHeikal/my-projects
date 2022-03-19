import os
from PyPDF2 import PdfFileReader, PdfFileWriter


def split_pdf(path):
    file= os.path.splitext(os.path.basename(path))[0]
    pdf=PdfFileReader(path)
    for page in range(pdf.getNumPages()):
        pdfwrite = PdfFileWriter()
        pdfwrite.addPage(pdf.getPage(page))
        filepagename = f"{file}_{page+1}.pdf"
        with open(filepagename, 'wb') as out:
            pdfwrite.write(out)


f=input("enter the file name you want to split it : ")
split_pdf(f)
print("DONE")


