using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Microsoft.Office.Interop.Word;

using System.IO;
using System.Runtime.InteropServices;
//using iTextSharp.text;
//using iTextSharp.text.pdf;

namespace Winform_doc_to_pdf
{
    
    public partial class Form1 : Form
    {
        Document wordDoc { get; set; }
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //Document doc = new Document(PageSize.LETTER, 10, 10, 42, 35);
            //PdfWriter wri = PdfWriter.GetInstance(doc, new FileStream("test.pdf", FileMode.Create));
            //doc.Open();
            //Paragraph elements = new Paragraph();
            Converter();
        }

        public void Converter()
        {
            Microsoft.Office.Interop.Word.Application app = new Microsoft.Office.Interop.Word.Application();
            wordDoc = app.Documents.Open(@"D:\Final Projet Book\pp.docx");
            wordDoc.ExportAsFixedFormat(@"D:\Final Projet Book\pp.pdf", WdExportFormat.wdExportFormatPDF);
            wordDoc.Close(WdSaveOptions.wdDoNotSaveChanges);
            app.Quit();
            Marshal.ReleaseComObject(wordDoc);
            Marshal.ReleaseComObject(app);
        }
    }
}
