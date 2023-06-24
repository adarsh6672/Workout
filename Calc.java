package chumma;

import java.awt.Color;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.File;

import javax.sound.sampled.AudioInputStream;
import javax.sound.sampled.AudioSystem;
import javax.sound.sampled.Clip;
import javax.swing.BorderFactory;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.SwingConstants;
public class Calc implements ActionListener {
	
	boolean isOperatorClicked=false;
	
	
	JFrame jf;
	JLabel displaylabel;
	String oldValue;
	String res;
	int operation;
	
	JButton sevenbutton,eightbutton,ninebutton,sixbutton,fivebutton,fourbutton,onebutton,twobutton,threebutton,dotbutton,equalbutton,zerobutton;
	JButton plusbutton,minusbutton,mulbutton,divbutton,clearbutton;
	public Calc()
	{
		jf=new JFrame("Calculator");
		jf.setLayout(null);
		jf.setSize(460, 600);
		jf.setLocation(300, 150);
		
		
		displaylabel=new JLabel("",SwingConstants.RIGHT);	
		displaylabel.setBorder(BorderFactory.createLineBorder(Color.black, 5));
		displaylabel.setForeground(Color.black);
		displaylabel.setBounds(130, 30, 300, 80);
		displaylabel.setBackground(Color.yellow);
		displaylabel.setFont(new Font("Serif", Font.PLAIN, 40));
		displaylabel.setOpaque(true);
		jf.add(displaylabel);
		
		
		sevenbutton=new JButton("7");
		sevenbutton.setBounds(30, 130, 80, 80);
		sevenbutton.setFont(new Font("Arial",Font.PLAIN, 40));
		sevenbutton.addActionListener(this);
		jf.add(sevenbutton);
		
		eightbutton=new JButton("8");
		eightbutton.setBounds(130, 130, 80, 80);
		eightbutton.setFont(new Font("Arial",Font.PLAIN, 40));
		eightbutton.addActionListener(this);
		jf.add(eightbutton);
		
		ninebutton=new JButton("9");
		ninebutton.setBounds(230, 130, 80, 80);
		ninebutton.setFont(new Font("Arial",Font.PLAIN, 40));
		ninebutton.addActionListener(this);
		jf.add(ninebutton);
		
		
		
		
		 fourbutton=new JButton("4");
		fourbutton.setBounds(30, 230, 80, 80);
		fourbutton.setFont(new Font("Arial",Font.PLAIN, 40));
		fourbutton.addActionListener(this);
		jf.add(fourbutton);
		
		 fivebutton=new JButton("5");
		fivebutton.setBounds(130, 230, 80, 80);
		fivebutton.setFont(new Font("Arial",Font.PLAIN, 40));
		fivebutton.addActionListener(this);
		jf.add(fivebutton);
		
		 sixbutton=new JButton("6");
		sixbutton.setBounds(230, 230, 80, 80);
		sixbutton.setFont(new Font("Arial",Font.PLAIN, 40));
		sixbutton.addActionListener(this);
		jf.add(sixbutton);
		
		
		

		 onebutton=new JButton("1");
		onebutton.setBounds(30, 330, 80, 80);
		onebutton.setFont(new Font("Arial",Font.PLAIN, 40));
		onebutton.addActionListener(this);
		jf.add(onebutton);
		
		 twobutton=new JButton("2");
		twobutton.setBounds(130, 330, 80, 80);
		twobutton.setFont(new Font("Arial",Font.PLAIN, 40));
		twobutton.addActionListener(this);
		jf.add(twobutton);
		
		 threebutton=new JButton("3");
		threebutton.setBounds(230, 330, 80, 80);
		threebutton.setFont(new Font("Arial",Font.PLAIN, 40));
		threebutton.addActionListener(this);
		jf.add(threebutton);
		
		

		 dotbutton=new JButton(".");
		dotbutton.setBounds(30, 430, 80, 80);
		dotbutton.setFont(new Font("Arial",Font.PLAIN, 40));
		dotbutton.addActionListener(this);
		jf.add(dotbutton);
		
		 zerobutton=new JButton("0");
		 zerobutton.addActionListener(this);
		zerobutton.setBounds(130, 430, 80, 80);
		zerobutton.setFont(new Font("Arial",Font.PLAIN, 40));
		jf.add(zerobutton);
		
		 equalbutton=new JButton("=");
		equalbutton.setBounds(230, 430, 80, 80);
		equalbutton.setBackground(Color.green);
		equalbutton.setFont(new Font("Arial",Font.PLAIN, 40));
		equalbutton.addActionListener(this);
		jf.add(equalbutton);
		
		
		 plusbutton=new JButton("+");
		plusbutton.setBounds(350, 130, 80, 80);
		plusbutton.setFont(new Font("Arial",Font.PLAIN, 40));
		plusbutton.addActionListener(this);
		jf.add(plusbutton);
		
		 minusbutton=new JButton("-");
		minusbutton.setBounds(350, 230, 80, 80);
		minusbutton.setFont(new Font("Arial",Font.PLAIN, 40));
		minusbutton.addActionListener(this);
		jf.add(minusbutton);
		
		 mulbutton=new JButton("X");
		mulbutton.setBounds(350, 330, 80, 80);
		mulbutton.setFont(new Font("Arial",Font.PLAIN, 40));
		mulbutton.addActionListener(this);
		jf.add(mulbutton);
		
		 divbutton=new JButton("/");
		divbutton.setBounds(350, 430, 80, 80);
		divbutton.setFont(new Font("Arial",Font.PLAIN, 40));
		divbutton.addActionListener(this);
		jf.add(divbutton);
		
		
		clearbutton=new JButton("C");
		clearbutton.setBounds(30, 30, 80, 80);
		clearbutton.setBackground(Color.red);
		clearbutton.setFont(new Font("Arial",Font.PLAIN, 40));
		clearbutton.addActionListener(this);
		jf.add(clearbutton);
		
		
		jf.setVisible(true);
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	public static void main(String a[])
	{
		new Calc();
	}
	@Override
	public void actionPerformed(ActionEvent e) 
	{
		playSound("/home/adarsh/Downloads/1.wav");
		float result=0;
		if(e.getSource()==sevenbutton)
		{
			if(isOperatorClicked)
			{
				displaylabel.setText("7");
				isOperatorClicked=false;
			}
			else
			{
				displaylabel.setText(displaylabel.getText()+"7");
			}
			
		}
		else if(e.getSource()==eightbutton)
		{
			if(isOperatorClicked)
			{
				displaylabel.setText("8");
				isOperatorClicked=false;
			}
			else
			{
				displaylabel.setText(displaylabel.getText()+"8");
			}
		}
		else if(e.getSource()==ninebutton)
		{
			if(isOperatorClicked)
			{
				displaylabel.setText("9");
				isOperatorClicked=false;
			}
			else
			{
				displaylabel.setText(displaylabel.getText()+"9");
			}
		}
		else if(e.getSource()==fourbutton)
		{
			if(isOperatorClicked)
			{
				displaylabel.setText("4");
				isOperatorClicked=false;
			}
			else
			{
				displaylabel.setText(displaylabel.getText()+"4");
			}
		}
		else if(e.getSource()==fivebutton)
		{
			if(isOperatorClicked)
			{
				displaylabel.setText("5");
				isOperatorClicked=false;
			}
			else
			{
				displaylabel.setText(displaylabel.getText()+"5");
			}
		}
		else if(e.getSource()==sixbutton)
		{
			if(isOperatorClicked)
			{
				displaylabel.setText("6");
				isOperatorClicked=false;
			}
			else
			{
				displaylabel.setText(displaylabel.getText()+"6");
			}
		}
		else if(e.getSource()==onebutton)
		{
			if(isOperatorClicked)
			{
				displaylabel.setText("1");
				isOperatorClicked=false;
			}
			else
			{
				displaylabel.setText(displaylabel.getText()+"1");
			}
		}
		else if(e.getSource()==twobutton)
		{
			if(isOperatorClicked)
			{
				displaylabel.setText("2");
				isOperatorClicked=false;
			}
			else
			{
				displaylabel.setText(displaylabel.getText()+"2");
			}
		}
		else if(e.getSource()==threebutton)
		{
			if(isOperatorClicked)
			{
				displaylabel.setText("3");
				isOperatorClicked=false;
			}
			else
			{
				displaylabel.setText(displaylabel.getText()+"3");
			}		}
		else if(e.getSource()==zerobutton)
		{
			if(isOperatorClicked)
			{
				displaylabel.setText("0");
				isOperatorClicked=false;
			}
			else
			{
				displaylabel.setText(displaylabel.getText()+"0");
			}
		}
		else if(e.getSource()==dotbutton)
		{
			if(isOperatorClicked)
			{
				displaylabel.setText(".");
				isOperatorClicked=false;
			}
			else
			{
				displaylabel.setText(displaylabel.getText()+".");
			}
		}
		else if(e.getSource()==clearbutton)
		{
			displaylabel.setText("");
		}
		
		
		else if(e.getSource()==equalbutton)
		{
			isOperatorClicked=true;
			String newValue=displaylabel.getText();
			
			float oldValueF=Float.parseFloat(oldValue);
			float newValueF=Float.parseFloat(newValue);
			
			if(operation==1)
			{
				result=oldValueF+newValueF;
				res=Float.toString(result);
				displaylabel.setText(res);
			}
			else if(operation==2){
				result=oldValueF-newValueF;
				res=Float.toString(result);
				displaylabel.setText(res);
			}
			else if(operation==3){
				result=oldValueF*newValueF;
				res=String.valueOf(result);
				displaylabel.setText(res);
			}
			else if(operation==4) {
				result=oldValueF/newValueF;
				res=Float.toString(result);
				displaylabel.setText(res);
			}
				else {
				displaylabel.setText("wrong attempt");
				
			}
			oldValueF=result;
		}
		else if(e.getSource()==plusbutton)
		{
			isOperatorClicked=true;
			oldValue=displaylabel.getText();
			operation=1;

			
		}
		else if(e.getSource()==minusbutton)
		{
			isOperatorClicked=true;
			oldValue=displaylabel.getText();
			operation=2;
			
		}
		else if(e.getSource()==mulbutton)
		{
			isOperatorClicked=true;
			oldValue=displaylabel.getText();
			operation=3;
		}
		else if(e.getSource()==divbutton)
		{
			isOperatorClicked=true;
			oldValue=displaylabel.getText();
			operation=4;
		}
	}

	public void playSound(String soundName)
	 {
	   try 
	   {
	    AudioInputStream audioInputStream = AudioSystem.getAudioInputStream(new File(soundName).getAbsoluteFile( ));
	    Clip clip = AudioSystem.getClip( );
	    clip.open(audioInputStream);
	    clip.start( );
	   }
	   catch(Exception ex)
	   {
	     System.out.println("Error with playing sound.");
	     ex.printStackTrace( );
	   }
	 }
}
