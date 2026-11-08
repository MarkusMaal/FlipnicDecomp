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

// Function: entry_001699d4
// Address: 0x1699d4 - 0x1699e4
void entry_001699d4_0x1699d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001699d4_0x1699d4");
#endif

    ctx->pc = 0x1699d4u;

    // 0x1699d4: 0x14a60003  bne         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1699D4u;
    {
        const bool branch_taken_0x1699d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1699D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699D4u;
        // 0x1699d8: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699d4) {
            ctx->pc = 0x1699E4u;
            return;
        }
    }
    ctx->pc = 0x1699DCu;
    // 0x1699dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1699DCu;
    {
        const bool branch_taken_0x1699dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1699E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699DCu;
        // 0x1699e0: 0xa0870223  sb          $a3, 0x223($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 547), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699dc) {
            ctx->pc = 0x1699F4u;
            return;
        }
    }
    ctx->pc = 0x1699E4u;
}
