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

// Function: entry_001e43f0
// Address: 0x1e43f0 - 0x1e4434
void entry_001e43f0_0x1e43f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e43f0_0x1e43f0");
#endif

    switch (ctx->pc) {
        case 0x1e4404u: goto label_1e4404;
        case 0x1e4414u: goto label_1e4414;
        default: break;
    }

    ctx->pc = 0x1e43f0u;

label_1e43f0:
    // 0x1e43f0: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1e43f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1e43f4:
    // 0x1e43f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e43f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e43f8:
    // 0x1e43f8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1e43f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1e43fc:
    // 0x1e43fc: 0x320f809  jalr        $t9
label_1e4400:
    if (ctx->pc == 0x1E4400u) {
        ctx->pc = 0x1E4404u;
        goto label_1e4404;
    }
    ctx->pc = 0x1E43FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4404u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E43FCu, 0x1E4404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4404u;
label_1e4404:
    // 0x1e4404: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e4408:
    if (ctx->pc == 0x1E4408u) {
        ctx->pc = 0x1E4408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4404u;
        // 0x1e4408: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E440Cu;
        goto label_1e440c;
    }
    ctx->pc = 0x1E4404u;
    {
        const bool branch_taken_0x1e4404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4404u;
        // 0x1e4408: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4404) {
            ctx->pc = 0x1E4434u;
            return;
        }
    }
    ctx->pc = 0x1E440Cu;
label_1e440c:
    // 0x1e440c: 0xc07a704  jal         func_1E9C10
label_1e4410:
    if (ctx->pc == 0x1E4410u) {
        ctx->pc = 0x1E4410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E440Cu;
        // 0x1e4410: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4414u;
        goto label_1e4414;
    }
    ctx->pc = 0x1E440Cu;
    SET_GPR_U32(ctx, 31, 0x1E4414u);
    ctx->pc = 0x1E4410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E440Cu;
    // 0x1e4410: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E440Cu, 0x1E4414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4414u;
label_1e4414:
    // 0x1e4414: 0x0  nop
    ctx->pc = 0x1e4414u;
    // NOP
label_1e4418:
    // 0x1e4418: 0x0  nop
    ctx->pc = 0x1e4418u;
    // NOP
label_1e441c:
    // 0x1e441c: 0x0  nop
    ctx->pc = 0x1e441cu;
    // NOP
label_1e4420:
    // 0x1e4420: 0x0  nop
    ctx->pc = 0x1e4420u;
    // NOP
label_1e4424:
    // 0x1e4424: 0x0  nop
    ctx->pc = 0x1e4424u;
    // NOP
label_1e4428:
    // 0x1e4428: 0x0  nop
    ctx->pc = 0x1e4428u;
    // NOP
label_1e442c:
    // 0x1e442c: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e4430:
    if (ctx->pc == 0x1E4430u) {
        ctx->pc = 0x1E4434u;
        goto label_fallthrough_0x1e442c;
    }
    ctx->pc = 0x1E442Cu;
    {
        const bool branch_taken_0x1e442c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e442c) {
            ctx->pc = 0x1E4414u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4414;
        }
    }
label_fallthrough_0x1e442c:
    ctx->pc = 0x1E4434u;
}
