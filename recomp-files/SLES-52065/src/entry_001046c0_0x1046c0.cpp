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

// Function: entry_001046c0
// Address: 0x1046c0 - 0x1046e4
void entry_001046c0_0x1046c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001046c0_0x1046c0");
#endif

    switch (ctx->pc) {
        case 0x1046c8u: goto label_1046c8;
        case 0x1046d8u: goto label_1046d8;
        default: break;
    }

    ctx->pc = 0x1046c0u;

    // 0x1046c0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1046C0u;
    SET_GPR_U32(ctx, 31, 0x1046C8u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1046C0u, 0x1046C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1046C8u;
label_1046c8:
    // 0x1046c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1046C8u;
    {
        const bool branch_taken_0x1046c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1046CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046C8u;
        // 0x1046cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1046c8) {
            ctx->pc = 0x1046E4u;
            return;
        }
    }
    ctx->pc = 0x1046D0u;
    // 0x1046d0: 0xc056360  jal         func_158D80
    ctx->pc = 0x1046D0u;
    SET_GPR_U32(ctx, 31, 0x1046D8u);
    ctx->pc = 0x1046D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1046D0u;
    // 0x1046d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1046D0u, 0x1046D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1046D8u;
label_1046d8:
    // 0x1046d8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1046d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1046dc: 0x24427c30  addiu       $v0, $v0, 0x7C30
    ctx->pc = 0x1046dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31792));
    // 0x1046e0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1046e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1046e4u;
}
