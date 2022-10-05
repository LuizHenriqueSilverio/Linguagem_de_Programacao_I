namespace Hello_World
{
    partial class janela
    {
        /// <summary>
        /// Variável de designer necessária.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Limpar os recursos que estão sendo usados.
        /// </summary>
        /// <param name="disposing">true se for necessário descartar os recursos gerenciados; caso contrário, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Código gerado pelo Windows Form Designer

        /// <summary>
        /// Método necessário para suporte ao Designer - não modifique 
        /// o conteúdo deste método com o editor de código.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.label_nome = new System.Windows.Forms.Label();
            this.txtnome = new System.Windows.Forms.TextBox();
            this.btn_executar = new System.Windows.Forms.Button();
            this.label_idade = new System.Windows.Forms.Label();
            this.txtidade = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(0, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(35, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "label1";
            // 
            // label_nome
            // 
            this.label_nome.AutoSize = true;
            this.label_nome.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F);
            this.label_nome.Location = new System.Drawing.Point(191, 201);
            this.label_nome.Name = "label_nome";
            this.label_nome.Size = new System.Drawing.Size(59, 20);
            this.label_nome.TabIndex = 1;
            this.label_nome.Text = "Nome: ";
            this.label_nome.Click += new System.EventHandler(this.Label2_Click);
            // 
            // txtnome
            // 
            this.txtnome.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F);
            this.txtnome.Location = new System.Drawing.Point(256, 195);
            this.txtnome.Name = "txtnome";
            this.txtnome.Size = new System.Drawing.Size(351, 26);
            this.txtnome.TabIndex = 2;
            this.txtnome.TextChanged += new System.EventHandler(this.TextBox1_TextChanged);
            // 
            // btn_executar
            // 
            this.btn_executar.BackColor = System.Drawing.SystemColors.ControlDark;
            this.btn_executar.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F);
            this.btn_executar.Location = new System.Drawing.Point(359, 300);
            this.btn_executar.Name = "btn_executar";
            this.btn_executar.Size = new System.Drawing.Size(103, 50);
            this.btn_executar.TabIndex = 3;
            this.btn_executar.Text = "Executar";
            this.btn_executar.UseVisualStyleBackColor = false;
            this.btn_executar.Click += new System.EventHandler(this.Btn_executar_Click);
            // 
            // label_idade
            // 
            this.label_idade.AutoSize = true;
            this.label_idade.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F);
            this.label_idade.Location = new System.Drawing.Point(191, 249);
            this.label_idade.Name = "label_idade";
            this.label_idade.Size = new System.Drawing.Size(54, 20);
            this.label_idade.TabIndex = 4;
            this.label_idade.Text = "Idade:";
            this.label_idade.Click += new System.EventHandler(this.Label2_Click_1);
            // 
            // txtidade
            // 
            this.txtidade.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F);
            this.txtidade.Location = new System.Drawing.Point(256, 246);
            this.txtidade.Name = "txtidade";
            this.txtidade.Size = new System.Drawing.Size(351, 26);
            this.txtidade.TabIndex = 5;
            this.txtidade.TextChanged += new System.EventHandler(this.Txt_idade_TextChanged);
            // 
            // janela
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.Control;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.txtidade);
            this.Controls.Add(this.label_idade);
            this.Controls.Add(this.btn_executar);
            this.Controls.Add(this.txtnome);
            this.Controls.Add(this.label_nome);
            this.Controls.Add(this.label1);
            this.Name = "janela";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label_nome;
        private System.Windows.Forms.TextBox txtnome;
        private System.Windows.Forms.Button btn_executar;
        private System.Windows.Forms.Label label_idade;
        private System.Windows.Forms.TextBox txtidade;
    }
}

