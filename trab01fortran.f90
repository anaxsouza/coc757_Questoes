Program multMatrix
    implicit none

    ! Declaration of variables
    integer :: n
    real*8, dimension(16383) :: x
    real*8, dimension(16383) :: b
    real*8, dimension(16383,16383) :: A
    real :: start,finish,subtr
    integer :: i, j, k

    ! Main
    n = 16383
    open(10,file='filefortran.txt')
    call random_seed()
    do k = 1, n,381
        do i = 1, k
            call random_number(x(i))
            do j = 1, k
                call random_number(A(i,j))
                !write(10,*) A(i,j)
            end do
        end do


        call cpu_time(start)
        do j = 1, k
            do i = 1, k
                b(j) = b(j) + A(i,j) * x(i)

            end do
        end do
        call cpu_time(finish)
        subtr = finish-start


        write(10,*)k,";",subtr


        ! print the values
        !do i = 1, n
            !print*, "valor de n = ", i
            !print*, (x(i))

        !end do

    end do



End Program
