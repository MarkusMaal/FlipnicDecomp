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

// Function: entry_00126ce8
// Address: 0x126ce8 - 0x126d00
void entry_00126ce8_0x126ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126ce8_0x126ce8");
#endif

    ctx->pc = 0x126ce8u;

    // 0x126ce8: 0x8ca300f0  lw          $v1, 0xF0($a1)
    ctx->pc = 0x126ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x126cec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x126cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x126cf0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x126cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x126cf4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x126cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x126cf8: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x126cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x126cfc: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x126cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    ctx->pc = 0x126d00u;
}
