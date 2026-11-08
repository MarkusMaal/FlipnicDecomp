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

// Function: entry_001a90e0
// Address: 0x1a90e0 - 0x1a90f4
void entry_001a90e0_0x1a90e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a90e0_0x1a90e0");
#endif

    ctx->pc = 0x1a90e0u;

    // 0x1a90e0: 0x8e8209c0  lw          $v0, 0x9C0($s4)
    ctx->pc = 0x1a90e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2496)));
    // 0x1a90e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a90e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a90e8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1a90e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1a90ec: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A90ECu;
    {
        const bool branch_taken_0x1a90ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A90F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90ECu;
        // 0x1a90f0: 0xae8209c0  sw          $v0, 0x9C0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90ec) {
            ctx->pc = 0x1A912Cu;
            return;
        }
    }
    ctx->pc = 0x1A90F4u;
}
