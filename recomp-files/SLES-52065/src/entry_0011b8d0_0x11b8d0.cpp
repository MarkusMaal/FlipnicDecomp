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

// Function: entry_0011b8d0
// Address: 0x11b8d0 - 0x11b8e8
void entry_0011b8d0_0x11b8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b8d0_0x11b8d0");
#endif

    ctx->pc = 0x11b8d0u;

    // 0x11b8d0: 0x8ea30538  lw          $v1, 0x538($s5)
    ctx->pc = 0x11b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1336)));
    // 0x11b8d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b8d8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B8D8u;
    {
        const bool branch_taken_0x11b8d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8D8u;
        // 0x11b8dc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8d8) {
            ctx->pc = 0x11B8F0u;
            return;
        }
    }
    ctx->pc = 0x11B8E0u;
    // 0x11b8e0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x11B8E0u;
    {
        const bool branch_taken_0x11b8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b8e0) {
            ctx->pc = 0x11BA90u;
            return;
        }
    }
    ctx->pc = 0x11B8E8u;
}
