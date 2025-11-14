from flask import Flask, request, render_template
import pymysql
db=None
cur=None
app=Flask(__name__)
@app.route('/lm35_service')
def lm35_service():
    #접속정보
    db=pymysql.connect(host='192.168.143.40',user='root',password='qwqwqw12',db='mysql',charset='utf8')
    cur=db.cursor()
    #실행할 sql문
    sql="select datatime, temp from temperature order by datatime asc limit 50"
    cur.execute(sql)
    result=cur.fetchall()
    return render_template('lm35_service.html',result=result)
if __name__ == '__main__':
    app.run(debug=True,port=80,host='0.0.0.0')