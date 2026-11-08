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

// Function: caseD_10
// Address: 0x1c7164 - 0x1c71b4
void caseD_10_0x1c7164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x1c7164");
#endif

    switch (ctx->pc) {
        case 0x1c7170u: goto label_1c7170;
        case 0x1c717cu: goto label_1c717c;
        case 0x1c7188u: goto label_1c7188;
        default: break;
    }

    ctx->pc = 0x1c7164u;

    // 0x1c7164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7168: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7168u;
    SET_GPR_U32(ctx, 31, 0x1C7170u);
    ctx->pc = 0x1C716Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7168u;
    // 0x1c716c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7168u, 0x1C7170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7170u;
label_1c7170:
    // 0x1c7170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7174: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7174u;
    SET_GPR_U32(ctx, 31, 0x1C717Cu);
    ctx->pc = 0x1C7178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7174u;
    // 0x1c7178: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7174u, 0x1C717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C717Cu;
label_1c717c:
    // 0x1c717c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c717cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7180: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7180u;
    SET_GPR_U32(ctx, 31, 0x1C7188u);
    ctx->pc = 0x1C7184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7180u;
    // 0x1c7184: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7180u, 0x1C7188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7188u;
label_1c7188:
    // 0x1c7188: 0x8e0301ec  lw          $v1, 0x1EC($s0)
    ctx->pc = 0x1c7188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x1c718c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c718cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7190: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C7190u;
    {
        const bool branch_taken_0x1c7190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c7190) {
            ctx->pc = 0x1C71B8u;
            return;
        }
    }
    ctx->pc = 0x1C7198u;
    // 0x1c7198: 0x8e0301f0  lw          $v1, 0x1F0($s0)
    ctx->pc = 0x1c7198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x1c719c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c719cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c71a0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C71A0u;
    {
        const bool branch_taken_0x1c71a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C71A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C71A0u;
        // 0x1c71a4: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c71a0) {
            ctx->pc = 0x1C71B4u;
            return;
        }
    }
    ctx->pc = 0x1C71A8u;
    // 0x1c71a8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1c71a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1c71ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C71ACu;
    {
        const bool branch_taken_0x1c71ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C71B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C71ACu;
        // 0x1c71b0: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c71ac) {
            ctx->pc = 0x1C71B8u;
            return;
        }
    }
    ctx->pc = 0x1C71B4u;
}
