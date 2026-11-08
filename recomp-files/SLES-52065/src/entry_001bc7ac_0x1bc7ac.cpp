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

// Function: entry_001bc7ac
// Address: 0x1bc7ac - 0x1bc7d8
void entry_001bc7ac_0x1bc7ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc7ac_0x1bc7ac");
#endif

    switch (ctx->pc) {
        case 0x1bc7c0u: goto label_1bc7c0;
        default: break;
    }

    ctx->pc = 0x1bc7acu;

    // 0x1bc7ac: 0x0  nop
    ctx->pc = 0x1bc7acu;
    // NOP
    // 0x1bc7b0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bc7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bc7b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc7b8: 0xc047988  jal         func_11E620
    ctx->pc = 0x1BC7B8u;
    SET_GPR_U32(ctx, 31, 0x1BC7C0u);
    ctx->pc = 0x1BC7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC7B8u;
    // 0x1bc7bc: 0x24a511b0  addiu       $a1, $a1, 0x11B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E620u, 0x1BC7B8u, 0x1BC7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC7C0u;
label_1bc7c0:
    // 0x1bc7c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bc7c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc7c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bc7c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc7c8: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1bc7c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1bc7cc: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x1BC7CCu;
    {
        const bool branch_taken_0x1bc7cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC7CCu;
        // 0x1bc7d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc7cc) {
            ctx->pc = 0x1BC870u;
            return;
        }
    }
    ctx->pc = 0x1BC7D4u;
    // 0x1bc7d4: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x1bc7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->pc = 0x1bc7d8u;
}
