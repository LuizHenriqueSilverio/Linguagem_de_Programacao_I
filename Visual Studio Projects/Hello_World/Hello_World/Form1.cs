using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Hello_World
{
    public partial class janela : Form
    {
        public janela()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void Label2_Click(object sender, EventArgs e)
        {

        }

        private void TextBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void Btn_executar_Click(object sender, EventArgs e)
        {
            string nome;
            int idade;
            nome = txtnome.Text;
            try {
                idade = Convert.ToInt32(txtidade.Text);
            }
            catch (System.FormatException) { 
                idade = 0;
                MessageBox.Show("Por favor insira a idade em números!");
            }
            MessageBox.Show("Olá, " + nome + "! Sua idade em dias: " + (idade * 365));
        }

        private void Label2_Click_1(object sender, EventArgs e)
        {

        }

        private void Txt_idade_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
