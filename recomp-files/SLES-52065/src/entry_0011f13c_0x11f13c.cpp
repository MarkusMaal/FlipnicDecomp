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

// Function: entry_0011f13c
// Address: 0x11f13c - 0x11f154
void entry_0011f13c_0x11f13c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f13c_0x11f13c");
#endif

    ctx->pc = 0x11f13cu;

    // 0x11f13c: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x11F13Cu;
    {
        const bool branch_taken_0x11f13c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F13Cu;
        // 0x11f140: 0x2301821  addu        $v1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f13c) {
            ctx->pc = 0x11F174u;
            return;
        }
    }
    ctx->pc = 0x11F144u;
    // 0x11f144: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x11f144u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11f148: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x11F148u;
    {
        const bool branch_taken_0x11f148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F148u;
        // 0x11f14c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f148) {
            ctx->pc = 0x11F154u;
            return;
        }
    }
    ctx->pc = 0x11F150u;
    // 0x11f150: 0x721023  subu        $v0, $v1, $s2
    ctx->pc = 0x11f150u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x11f154u;
}
