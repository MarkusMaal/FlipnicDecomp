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

// Function: entry_001e832c
// Address: 0x1e832c - 0x1e833c
void entry_001e832c_0x1e832c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e832c_0x1e832c");
#endif

    ctx->pc = 0x1e832cu;

    // 0x1e832c: 0xab4823  subu        $t1, $a1, $t3
    ctx->pc = 0x1e832cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1e8330: 0x125082b  sltu        $at, $t1, $a1
    ctx->pc = 0x1e8330u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1e8334: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E8334u;
    {
        const bool branch_taken_0x1e8334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8334u;
        // 0x1e8338: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8334) {
            ctx->pc = 0x1E838Cu;
            return;
        }
    }
    ctx->pc = 0x1E833Cu;
}
