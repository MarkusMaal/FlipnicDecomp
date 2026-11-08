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

// Function: entry_0013ab3c
// Address: 0x13ab3c - 0x13ab54
void entry_0013ab3c_0x13ab3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ab3c_0x13ab3c");
#endif

    ctx->pc = 0x13ab3cu;

    // 0x13ab3c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x13ab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x13ab40: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x13ab40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13ab44: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x13ab44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x13ab48: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x13ab48u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13ab4c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x13ab4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x13ab50: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x13ab50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    ctx->pc = 0x13ab54u;
}
