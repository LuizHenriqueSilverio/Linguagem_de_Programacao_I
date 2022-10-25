namespace sistemacadastro
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.panel1 = new System.Windows.Forms.Panel();
            this.panel2 = new System.Windows.Forms.Panel();
            this.panel3 = new System.Windows.Forms.Panel();
            this.panel4 = new System.Windows.Forms.Panel();
            this.panel5 = new System.Windows.Forms.Panel();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.Cadastrar = new System.Windows.Forms.Button();
            this.panel1.SuspendLayout();
            this.panel2.SuspendLayout();
            this.panel5.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // panel1
            // 
            this.panel1.BackColor = System.Drawing.Color.Red;
            this.panel1.Controls.Add(this.Cadastrar);
            this.panel1.Location = new System.Drawing.Point(-2, -3);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(179, 595);
            this.panel1.TabIndex = 0;
            // 
            // panel2
            // 
            this.panel2.BackColor = System.Drawing.Color.Red;
            this.panel2.Controls.Add(this.panel4);
            this.panel2.Controls.Add(this.panel3);
            this.panel2.Location = new System.Drawing.Point(176, -3);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(837, 69);
            this.panel2.TabIndex = 1;
            // 
            // panel3
            // 
            this.panel3.Location = new System.Drawing.Point(93, 66);
            this.panel3.Name = "panel3";
            this.panel3.Size = new System.Drawing.Size(246, 164);
            this.panel3.TabIndex = 2;
            // 
            // panel4
            // 
            this.panel4.Location = new System.Drawing.Point(34, 66);
            this.panel4.Name = "panel4";
            this.panel4.Size = new System.Drawing.Size(246, 118);
            this.panel4.TabIndex = 2;
            // 
            // panel5
            // 
            this.panel5.BackColor = System.Drawing.Color.Red;
            this.panel5.Controls.Add(this.pictureBox1);
            this.panel5.Location = new System.Drawing.Point(210, 63);
            this.panel5.Name = "panel5";
            this.panel5.Size = new System.Drawing.Size(265, 130);
            this.panel5.TabIndex = 2;
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox1.Image")));
            this.pictureBox1.Location = new System.Drawing.Point(0, 0);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(265, 130);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.pictureBox1.TabIndex = 3;
            this.pictureBox1.TabStop = false;
            this.pictureBox1.Click += new System.EventHandler(this.pictureBox1_Click);
            // 
            // Cadastrar
            // 
            this.Cadastrar.BackColor = System.Drawing.Color.Red;
            this.Cadastrar.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point);
            this.Cadastrar.ForeColor = System.Drawing.SystemColors.ControlLight;
            this.Cadastrar.Image = ((System.Drawing.Image)(resources.GetObject("Cadastrar.Image")));
            this.Cadastrar.ImageAlign = System.Drawing.ContentAlignment.TopLeft;
            this.Cadastrar.Location = new System.Drawing.Point(3, 94);
            this.Cadastrar.Name = "Cadastrar";
            this.Cadastrar.Size = new System.Drawing.Size(173, 68);
            this.Cadastrar.TabIndex = 3;
            this.Cadastrar.Text = "Cadastrar";
            this.Cadastrar.TextAlign = System.Drawing.ContentAlignment.MiddleRight;
            this.Cadastrar.UseVisualStyleBackColor = false;
            this.Cadastrar.Click += new System.EventHandler(this.Cadastrar_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1013, 585);
            this.Controls.Add(this.panel5);
            this.Controls.Add(this.panel2);
            this.Controls.Add(this.panel1);
            this.DoubleBuffered = true;
            this.Name = "Form1";
            this.Text = "Form1";
            this.panel1.ResumeLayout(false);
            this.panel2.ResumeLayout(false);
            this.panel5.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private Panel panel1;
        private Panel panel2;
        private Panel panel4;
        private Panel panel3;
        private Panel panel5;
        private PictureBox pictureBox1;
        private Button Cadastrar;
    }
}