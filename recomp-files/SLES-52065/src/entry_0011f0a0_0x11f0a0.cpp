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

// Function: entry_0011f0a0
// Address: 0x11f0a0 - 0x11f0d4
void entry_0011f0a0_0x11f0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f0a0_0x11f0a0");
#endif

    switch (ctx->pc) {
        case 0x11f0bcu: goto label_11f0bc;
        default: break;
    }

    ctx->pc = 0x11f0a0u;

    // 0x11f0a0: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x11F0A0u;
    {
        const bool branch_taken_0x11f0a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0A0u;
        // 0x11f0a4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f0a0) {
            ctx->pc = 0x11F0F4u;
            return;
        }
    }
    ctx->pc = 0x11F0A8u;
    // 0x11f0a8: 0x26640084  addiu       $a0, $s3, 0x84
    ctx->pc = 0x11f0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
    // 0x11f0ac: 0x55a823  subu        $s5, $v0, $s5
    ctx->pc = 0x11f0acu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x11f0b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11f0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f0b4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x11F0B4u;
    SET_GPR_U32(ctx, 31, 0x11F0BCu);
    ctx->pc = 0x11F0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F0B4u;
    // 0x11f0b8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x11F0B4u, 0x11F0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F0BCu;
label_11f0bc:
    // 0x11f0bc: 0x2559021  addu        $s2, $s2, $s5
    ctx->pc = 0x11f0bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x11f0c0: 0x256082b  sltu        $at, $s2, $s6
    ctx->pc = 0x11f0c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x11f0c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F0C4u;
    {
        const bool branch_taken_0x11f0c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f0c4) {
            ctx->pc = 0x11F0D4u;
            return;
        }
    }
    ctx->pc = 0x11F0CCu;
    // 0x11f0cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11F0CCu;
    {
        const bool branch_taken_0x11f0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f0cc) {
            ctx->pc = 0x11F0D8u;
            return;
        }
    }
    ctx->pc = 0x11F0D4u;
}
