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

// Function: entry_001d8a50
// Address: 0x1d8a50 - 0x1d8a60
void entry_001d8a50_0x1d8a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8a50_0x1d8a50");
#endif

    ctx->pc = 0x1d8a50u;

    // 0x1d8a50: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d8a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d8a54: 0x90860006  lbu         $a2, 0x6($a0)
    ctx->pc = 0x1d8a54u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1d8a58: 0x8c440548  lw          $a0, 0x548($v0)
    ctx->pc = 0x1d8a58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370548u));
    // 0x1d8a5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d8a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1d8a60u;
}
