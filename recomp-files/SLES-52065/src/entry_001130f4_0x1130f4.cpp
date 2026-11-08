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

// Function: entry_001130f4
// Address: 0x1130f4 - 0x113100
void entry_001130f4_0x1130f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001130f4_0x1130f4");
#endif

    ctx->pc = 0x1130f4u;

    // 0x1130f4: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1130F4u;
    {
        const bool branch_taken_0x1130f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1130F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130F4u;
        // 0x1130f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1130f4) {
            ctx->pc = 0x113140u;
            return;
        }
    }
    ctx->pc = 0x1130FCu;
    // 0x1130fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1130fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x113100u;
}
