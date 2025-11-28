import express from 'express';
const app = express();

app.set('view engine', 'ejs');
// app.set('views', './views'); if views has a different folder
app.use(express.urlencoded({ extended: false}));

app.get('/', (req, res) => {
  res.send('Home Page');
});

app.get('/about', (req, res) => {
  res.render('about', { title: 'Home Page', message: 'Welcome to the About Page!' });
});

app.get('/form', (req, res) => {
  res.render('form');
});

app.post('/submit',(req, res) => {
  const name=req.body.myname;

  const message=`Hello, ${name}! Your form has been submitted successfully.`;

  res.send(message);
});

app.listen(3000, () => {
  console.log('Server is running on port 3000');
});
