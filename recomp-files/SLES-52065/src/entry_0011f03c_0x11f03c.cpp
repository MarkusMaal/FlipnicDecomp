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

// Function: entry_0011f03c
// Address: 0x11f03c - 0x11f054
void entry_0011f03c_0x11f03c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f03c_0x11f03c");
#endif

    ctx->pc = 0x11f03cu;

    // 0x11f03c: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x11F03Cu;
    {
        const bool branch_taken_0x11f03c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F03Cu;
        // 0x11f040: 0x230b021  addu        $s6, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f03c) {
            ctx->pc = 0x11F0E0u;
            return;
        }
    }
    ctx->pc = 0x11F044u;
    // 0x11f044: 0x256082b  sltu        $at, $s2, $s6
    ctx->pc = 0x11f044u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x11f048: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x11F048u;
    {
        const bool branch_taken_0x11f048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F048u;
        // 0x11f04c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f048) {
            ctx->pc = 0x11F054u;
            return;
        }
    }
    ctx->pc = 0x11F050u;
    // 0x11f050: 0x2d21023  subu        $v0, $s6, $s2
    ctx->pc = 0x11f050u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    ctx->pc = 0x11f054u;
}
