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

// Function: entry_00195404
// Address: 0x195404 - 0x195424
void entry_00195404_0x195404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195404_0x195404");
#endif

    switch (ctx->pc) {
        case 0x195410u: goto label_195410;
        case 0x19541cu: goto label_19541c;
        default: break;
    }

    ctx->pc = 0x195404u;

    // 0x195404: 0x0  nop
    ctx->pc = 0x195404u;
    // NOP
    // 0x195408: 0xc0463e0  jal         func_118F80
    ctx->pc = 0x195408u;
    SET_GPR_U32(ctx, 31, 0x195410u);
    ctx->pc = 0x19540Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195408u;
    // 0x19540c: 0x8f8486f4  lw          $a0, -0x790C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118F80u, 0x195408u, 0x195410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195410u;
label_195410:
    // 0x195410: 0x8f8486f4  lw          $a0, -0x790C($gp)
    ctx->pc = 0x195410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
    // 0x195414: 0xc046414  jal         func_119050
    ctx->pc = 0x195414u;
    SET_GPR_U32(ctx, 31, 0x19541Cu);
    ctx->pc = 0x195418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195414u;
    // 0x195418: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119050u, 0x195414u, 0x19541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19541Cu;
label_19541c:
    // 0x19541c: 0x10000251  b           . + 4 + (0x251 << 2)
    ctx->pc = 0x19541Cu;
    {
        const bool branch_taken_0x19541c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19541c) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195424u;
}
