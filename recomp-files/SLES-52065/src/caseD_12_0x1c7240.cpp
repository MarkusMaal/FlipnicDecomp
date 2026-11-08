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

// Function: caseD_12
// Address: 0x1c7240 - 0x1c7290
void caseD_12_0x1c7240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_12_0x1c7240");
#endif

    switch (ctx->pc) {
        case 0x1c724cu: goto label_1c724c;
        case 0x1c7258u: goto label_1c7258;
        case 0x1c7264u: goto label_1c7264;
        default: break;
    }

    ctx->pc = 0x1c7240u;

    // 0x1c7240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7244: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7244u;
    SET_GPR_U32(ctx, 31, 0x1C724Cu);
    ctx->pc = 0x1C7248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7244u;
    // 0x1c7248: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7244u, 0x1C724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C724Cu;
label_1c724c:
    // 0x1c724c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c724cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7250: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7250u;
    SET_GPR_U32(ctx, 31, 0x1C7258u);
    ctx->pc = 0x1C7254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7250u;
    // 0x1c7254: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7250u, 0x1C7258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7258u;
label_1c7258:
    // 0x1c7258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c725c: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C725Cu;
    SET_GPR_U32(ctx, 31, 0x1C7264u);
    ctx->pc = 0x1C7260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C725Cu;
    // 0x1c7260: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C725Cu, 0x1C7264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7264u;
label_1c7264:
    // 0x1c7264: 0x8e03023c  lw          $v1, 0x23C($s0)
    ctx->pc = 0x1c7264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x1c7268: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c7268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c726c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C726Cu;
    {
        const bool branch_taken_0x1c726c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c726c) {
            ctx->pc = 0x1C7294u;
            return;
        }
    }
    ctx->pc = 0x1C7274u;
    // 0x1c7274: 0x8e030240  lw          $v1, 0x240($s0)
    ctx->pc = 0x1c7274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x1c7278: 0x240203c4  addiu       $v0, $zero, 0x3C4
    ctx->pc = 0x1c7278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x1c727c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C727Cu;
    {
        const bool branch_taken_0x1c727c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C727Cu;
        // 0x1c7280: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c727c) {
            ctx->pc = 0x1C7290u;
            return;
        }
    }
    ctx->pc = 0x1C7284u;
    // 0x1c7284: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1c7284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1c7288: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7288u;
    {
        const bool branch_taken_0x1c7288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7288u;
        // 0x1c728c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7288) {
            ctx->pc = 0x1C7294u;
            return;
        }
    }
    ctx->pc = 0x1C7290u;
}
