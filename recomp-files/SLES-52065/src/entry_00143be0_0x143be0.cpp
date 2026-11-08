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

// Function: entry_00143be0
// Address: 0x143be0 - 0x143bf4
void entry_00143be0_0x143be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143be0_0x143be0");
#endif

    ctx->pc = 0x143be0u;

    // 0x143be0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x143BE0u;
    {
        const bool branch_taken_0x143be0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x143BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BE0u;
        // 0x143be4: 0x293082b  sltu        $at, $s4, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143be0) {
            ctx->pc = 0x143C10u;
            return;
        }
    }
    ctx->pc = 0x143BE8u;
    // 0x143be8: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x143be8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143bec: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x143BECu;
    {
        const bool branch_taken_0x143bec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x143BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BECu;
        // 0x143bf0: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143bec) {
            ctx->pc = 0x143C10u;
            return;
        }
    }
    ctx->pc = 0x143BF4u;
}
