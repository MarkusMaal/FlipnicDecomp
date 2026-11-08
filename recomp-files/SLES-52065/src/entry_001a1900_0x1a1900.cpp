#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001a1900
// Address: 0x1a1900 - 0x1a1914
void entry_001a1900_0x1a1900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1900_0x1a1900");
#endif

    ctx->pc = 0x1a1900u;

    // 0x1a1900: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x1a1900u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1904: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a1904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a1908: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x1a1908u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a190c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1a190cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1a1910: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1a1910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    ctx->pc = 0x1a1914u;
}
