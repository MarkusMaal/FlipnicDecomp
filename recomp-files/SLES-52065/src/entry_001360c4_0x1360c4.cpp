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

// Function: entry_001360c4
// Address: 0x1360c4 - 0x1360d8
void entry_001360c4_0x1360c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001360c4_0x1360c4");
#endif

    ctx->pc = 0x1360c4u;

    // 0x1360c4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1360C4u;
    {
        const bool branch_taken_0x1360c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1360C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360C4u;
        // 0x1360c8: 0xc9082b  sltu        $at, $a2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360c4) {
            ctx->pc = 0x1360F4u;
            return;
        }
    }
    ctx->pc = 0x1360CCu;
    // 0x1360cc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1360ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1360d0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1360D0u;
    {
        const bool branch_taken_0x1360d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1360D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360D0u;
        // 0x1360d4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360d0) {
            ctx->pc = 0x1360F4u;
            return;
        }
    }
    ctx->pc = 0x1360D8u;
}
