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

// Function: caseD_14
// Address: 0x1c3bb4 - 0x1c3c04
void caseD_14_0x1c3bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_14_0x1c3bb4");
#endif

    switch (ctx->pc) {
        case 0x1c3bc0u: goto label_1c3bc0;
        case 0x1c3bccu: goto label_1c3bcc;
        case 0x1c3bd8u: goto label_1c3bd8;
        default: break;
    }

    ctx->pc = 0x1c3bb4u;

    // 0x1c3bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3bb8: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3BB8u;
    SET_GPR_U32(ctx, 31, 0x1C3BC0u);
    ctx->pc = 0x1C3BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3BB8u;
    // 0x1c3bbc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3BB8u, 0x1C3BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BC0u;
label_1c3bc0:
    // 0x1c3bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3bc4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3BC4u;
    SET_GPR_U32(ctx, 31, 0x1C3BCCu);
    ctx->pc = 0x1C3BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3BC4u;
    // 0x1c3bc8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3BC4u, 0x1C3BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BCCu;
label_1c3bcc:
    // 0x1c3bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3bd0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3BD0u;
    SET_GPR_U32(ctx, 31, 0x1C3BD8u);
    ctx->pc = 0x1C3BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3BD0u;
    // 0x1c3bd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3BD0u, 0x1C3BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BD8u;
label_1c3bd8:
    // 0x1c3bd8: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1c3bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1c3bdc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3be0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3BE0u;
    {
        const bool branch_taken_0x1c3be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3be0) {
            ctx->pc = 0x1C3C08u;
            return;
        }
    }
    ctx->pc = 0x1C3BE8u;
    // 0x1c3be8: 0x8e030204  lw          $v1, 0x204($s0)
    ctx->pc = 0x1c3be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x1c3bec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3bf0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3BF0u;
    {
        const bool branch_taken_0x1c3bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3BF0u;
        // 0x1c3bf4: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3bf0) {
            ctx->pc = 0x1C3C04u;
            return;
        }
    }
    ctx->pc = 0x1C3BF8u;
    // 0x1c3bf8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1c3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1c3bfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3BFCu;
    {
        const bool branch_taken_0x1c3bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3BFCu;
        // 0x1c3c00: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3bfc) {
            ctx->pc = 0x1C3C08u;
            return;
        }
    }
    ctx->pc = 0x1C3C04u;
}
