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

// Function: entry_001025f0
// Address: 0x1025f0 - 0x10260c
void entry_001025f0_0x1025f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001025f0_0x1025f0");
#endif

    ctx->pc = 0x1025f0u;

    // 0x1025f0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1025f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1025f4: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1025f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1025f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1025f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1025fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1025fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102600: 0x84530008  lh          $s3, 0x8($v0)
    ctx->pc = 0x102600u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x102604: 0x0  nop
    ctx->pc = 0x102604u;
    // NOP
    // 0x102608: 0x8f9485f4  lw          $s4, -0x7A0C($gp)
    ctx->pc = 0x102608u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->pc = 0x10260cu;
}
