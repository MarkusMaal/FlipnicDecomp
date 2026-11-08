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

// Function: entry_0011f154
// Address: 0x11f154 - 0x11f16c
void entry_0011f154_0x11f154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f154_0x11f154");
#endif

    ctx->pc = 0x11f154u;

    // 0x11f154: 0x55082a  slt         $at, $v0, $s5
    ctx->pc = 0x11f154u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x11f158: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x11F158u;
    {
        const bool branch_taken_0x11f158 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F158u;
        // 0x11f15c: 0x243082b  sltu        $at, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f158) {
            ctx->pc = 0x11F174u;
            return;
        }
    }
    ctx->pc = 0x11F160u;
    // 0x11f160: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x11F160u;
    {
        const bool branch_taken_0x11f160 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F160u;
        // 0x11f164: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f160) {
            ctx->pc = 0x11F16Cu;
            return;
        }
    }
    ctx->pc = 0x11F168u;
    // 0x11f168: 0x72a823  subu        $s5, $v1, $s2
    ctx->pc = 0x11f168u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x11f16cu;
}
