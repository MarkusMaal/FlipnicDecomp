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

// Function: entry_001661a8
// Address: 0x1661a8 - 0x1661c8
void entry_001661a8_0x1661a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001661a8_0x1661a8");
#endif

    switch (ctx->pc) {
        case 0x1661bcu: goto label_1661bc;
        default: break;
    }

    ctx->pc = 0x1661a8u;

    // 0x1661a8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1661A8u;
    {
        const bool branch_taken_0x1661a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1661a8) {
            ctx->pc = 0x1661C8u;
            return;
        }
    }
    ctx->pc = 0x1661B0u;
    // 0x1661b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1661b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1661b4: 0xc042118  jal         func_108460
    ctx->pc = 0x1661B4u;
    SET_GPR_U32(ctx, 31, 0x1661BCu);
    ctx->pc = 0x1661B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1661B4u;
    // 0x1661b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1661B4u, 0x1661BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1661BCu;
label_1661bc:
    // 0x1661bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1661bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1661c0: 0xc0597d8  jal         func_165F60
    ctx->pc = 0x1661C0u;
    SET_GPR_U32(ctx, 31, 0x1661C8u);
    ctx->pc = 0x1661C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1661C0u;
    // 0x1661c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165F60u, 0x1661C0u, 0x1661C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1661C8u;
}
