# SELECT sell_date, 
#     count(DISTINCT product) as num_sold,
#     GROUP_CONCAT(DISTINCT product ORDER BY product) AS products
# FROM Activities 
# GROUP BY sell_date 
# ORDER BY sell_date;


select sell_date,
    count(distinct product) as num_sold,
    group_concat(distinct product order by product) as products
from activities
group by sell_date
order by sell_date;
