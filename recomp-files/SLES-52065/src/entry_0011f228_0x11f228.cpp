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

// Function: entry_0011f228
// Address: 0x11f228 - 0x11f24c
void entry_0011f228_0x11f228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f228_0x11f228");
#endif

    ctx->pc = 0x11f228u;

    // 0x11f228: 0x282a023  subu        $s4, $s4, $v0
    ctx->pc = 0x11f228u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x11f22c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11F22Cu;
    {
        const bool branch_taken_0x11f22c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F22Cu;
        // 0x11f230: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f22c) {
            ctx->pc = 0x11F250u;
            return;
        }
    }
    ctx->pc = 0x11F234u;
    // 0x11f234: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x11f234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x11f238: 0x242082b  sltu        $at, $s2, $v0
    ctx->pc = 0x11f238u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11f23c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F23Cu;
    {
        const bool branch_taken_0x11f23c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f23c) {
            ctx->pc = 0x11F24Cu;
            return;
        }
    }
    ctx->pc = 0x11F244u;
    // 0x11f244: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11F244u;
    {
        const bool branch_taken_0x11f244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f244) {
            ctx->pc = 0x11F250u;
            return;
        }
    }
    ctx->pc = 0x11F24Cu;
}
