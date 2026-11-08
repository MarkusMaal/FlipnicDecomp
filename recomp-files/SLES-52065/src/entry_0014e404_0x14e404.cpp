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

// Function: entry_0014e404
// Address: 0x14e404 - 0x14e424
void entry_0014e404_0x14e404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e404_0x14e404");
#endif

    switch (ctx->pc) {
        case 0x14e418u: goto label_14e418;
        default: break;
    }

    ctx->pc = 0x14e404u;

label_14e404:
    // 0x14e404: 0x2610fff4  addiu       $s0, $s0, -0xC
    ctx->pc = 0x14e404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
    // 0x14e408: 0x2631fff4  addiu       $s1, $s1, -0xC
    ctx->pc = 0x14e408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
    // 0x14e40c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14e40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e410: 0xc05383c  jal         func_14E0F0
    ctx->pc = 0x14E410u;
    SET_GPR_U32(ctx, 31, 0x14E418u);
    ctx->pc = 0x14E414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E410u;
    // 0x14e414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E0F0u, 0x14E410u, 0x14E418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E418u;
label_14e418:
    // 0x14e418: 0x290082b  sltu        $at, $s4, $s0
    ctx->pc = 0x14e418u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x14e41c: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14E41Cu;
    {
        const bool branch_taken_0x14e41c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e41c) {
            ctx->pc = 0x14E404u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e404;
        }
    }
    ctx->pc = 0x14E424u;
}
