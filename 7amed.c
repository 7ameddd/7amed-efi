#include <Uefi.h>
#include <Library/UefiBootServicesTableLib.h>

EFI_STATUS
EFIAPI
UefiMain (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  // هنا الكود بتاعك
  SystemTable->ConOut->OutputString(SystemTable->ConOut, L"Hello 7amed! EFI is running.\r\n");
  
  // لو عايز تعمل حاجة معينة (زي السبوفر أو تجاوز البان) هتكتب كود الـ UEFI هنا

  return EFI_SUCCESS;
}