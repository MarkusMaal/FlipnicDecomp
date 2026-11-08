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

// Function: entry_0011929c
// Address: 0x11929c - 0x1192b4
void entry_0011929c_0x11929c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011929c_0x11929c");
#endif

    ctx->pc = 0x11929cu;

    // 0x11929c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11929cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1192a0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1192a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1192a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1192a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1192a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1192a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1192ac: 0x84530008  lh          $s3, 0x8($v0)
    ctx->pc = 0x1192acu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1192b0: 0x0  nop
    ctx->pc = 0x1192b0u;
    // NOP
    ctx->pc = 0x1192b4u;
}
