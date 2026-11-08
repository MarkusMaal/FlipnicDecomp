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

// Function: entry_00201174
// Address: 0x201174 - 0x201190
void entry_00201174_0x201174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201174_0x201174");
#endif

    switch (ctx->pc) {
        case 0x20118cu: goto label_20118c;
        default: break;
    }

    ctx->pc = 0x201174u;

    // 0x201174: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x201174u;
    {
        const bool branch_taken_0x201174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x201178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201174u;
        // 0x201178: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201174) {
            ctx->pc = 0x2011ACu;
            return;
        }
    }
    ctx->pc = 0x20117Cu;
    // 0x20117c: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20117Cu;
    {
        const bool branch_taken_0x20117c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x20117c) {
            ctx->pc = 0x201180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20117Cu;
            // 0x201180: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201190u;
            return;
        }
    }
    ctx->pc = 0x201184u;
    // 0x201184: 0xc07f62a  jal         func_1FD8A8
    ctx->pc = 0x201184u;
    SET_GPR_U32(ctx, 31, 0x20118Cu);
    ctx->pc = 0x201188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201184u;
    // 0x201188: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8A8u, 0x201184u, 0x20118Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20118Cu;
label_20118c:
    // 0x20118c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x20118cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->pc = 0x201190u;
}
