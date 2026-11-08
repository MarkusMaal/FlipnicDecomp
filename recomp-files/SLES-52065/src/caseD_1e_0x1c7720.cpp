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

// Function: caseD_1e
// Address: 0x1c7720 - 0x1c7758
void caseD_1e_0x1c7720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1e_0x1c7720");
#endif

    switch (ctx->pc) {
        case 0x1c772cu: goto label_1c772c;
        case 0x1c7738u: goto label_1c7738;
        case 0x1c7744u: goto label_1c7744;
        default: break;
    }

    ctx->pc = 0x1c7720u;

    // 0x1c7720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7724: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7724u;
    SET_GPR_U32(ctx, 31, 0x1C772Cu);
    ctx->pc = 0x1C7728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7724u;
    // 0x1c7728: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7724u, 0x1C772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C772Cu;
label_1c772c:
    // 0x1c772c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c772cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7730: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7730u;
    SET_GPR_U32(ctx, 31, 0x1C7738u);
    ctx->pc = 0x1C7734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7730u;
    // 0x1c7734: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7730u, 0x1C7738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7738u;
label_1c7738:
    // 0x1c7738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c773c: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C773Cu;
    SET_GPR_U32(ctx, 31, 0x1C7744u);
    ctx->pc = 0x1C7740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C773Cu;
    // 0x1c7740: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C773Cu, 0x1C7744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7744u;
label_1c7744:
    // 0x1c7744: 0x8e03022c  lw          $v1, 0x22C($s0)
    ctx->pc = 0x1c7744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x1c7748: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c7748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c774c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C774Cu;
    {
        const bool branch_taken_0x1c774c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C774Cu;
        // 0x1c7750: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c774c) {
            ctx->pc = 0x1C7758u;
            return;
        }
    }
    ctx->pc = 0x1C7754u;
    // 0x1c7754: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c7754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    ctx->pc = 0x1c7758u;
}
