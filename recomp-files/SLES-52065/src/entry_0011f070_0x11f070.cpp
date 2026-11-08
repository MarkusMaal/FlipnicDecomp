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

// Function: entry_0011f070
// Address: 0x11f070 - 0x11f098
void entry_0011f070_0x11f070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f070_0x11f070");
#endif

    switch (ctx->pc) {
        case 0x11f080u: goto label_11f080;
        default: break;
    }

    ctx->pc = 0x11f070u;

    // 0x11f070: 0x26640084  addiu       $a0, $s3, 0x84
    ctx->pc = 0x11f070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
    // 0x11f074: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11f074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f078: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x11F078u;
    SET_GPR_U32(ctx, 31, 0x11F080u);
    ctx->pc = 0x11F07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F078u;
    // 0x11f07c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x11F078u, 0x11F080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F080u;
label_11f080:
    // 0x11f080: 0x2559021  addu        $s2, $s2, $s5
    ctx->pc = 0x11f080u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x11f084: 0x256082b  sltu        $at, $s2, $s6
    ctx->pc = 0x11f084u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x11f088: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F088u;
    {
        const bool branch_taken_0x11f088 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f088) {
            ctx->pc = 0x11F098u;
            return;
        }
    }
    ctx->pc = 0x11F090u;
    // 0x11f090: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11F090u;
    {
        const bool branch_taken_0x11f090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F090u;
        // 0x11f094: 0x2ea10010  sltiu       $at, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f090) {
            ctx->pc = 0x11F0A0u;
            return;
        }
    }
    ctx->pc = 0x11F098u;
}
