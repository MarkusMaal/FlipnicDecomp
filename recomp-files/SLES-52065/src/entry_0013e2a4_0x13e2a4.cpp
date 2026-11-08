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

// Function: entry_0013e2a4
// Address: 0x13e2a4 - 0x13e2c0
void entry_0013e2a4_0x13e2a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e2a4_0x13e2a4");
#endif

    ctx->pc = 0x13e2a4u;

    // 0x13e2a4: 0x0  nop
    ctx->pc = 0x13e2a4u;
    // NOP
    // 0x13e2a8: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x13e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x13e2ac: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x13e2acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e2b0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13E2B0u;
    {
        const bool branch_taken_0x13e2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e2b0) {
            ctx->pc = 0x13E29Cu;
            return;
        }
    }
    ctx->pc = 0x13E2B8u;
    // 0x13e2b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13E2B8u;
    {
        const bool branch_taken_0x13e2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2B8u;
        // 0x13e2bc: 0x2e820020  sltiu       $v0, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2b8) {
            ctx->pc = 0x13E2D0u;
            return;
        }
    }
    ctx->pc = 0x13E2C0u;
}
