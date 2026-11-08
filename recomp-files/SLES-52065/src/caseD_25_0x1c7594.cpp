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

// Function: caseD_25
// Address: 0x1c7594 - 0x1c75cc
void caseD_25_0x1c7594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_25_0x1c7594");
#endif

    switch (ctx->pc) {
        case 0x1c75a0u: goto label_1c75a0;
        case 0x1c75acu: goto label_1c75ac;
        case 0x1c75b8u: goto label_1c75b8;
        default: break;
    }

    ctx->pc = 0x1c7594u;

    // 0x1c7594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7598: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7598u;
    SET_GPR_U32(ctx, 31, 0x1C75A0u);
    ctx->pc = 0x1C759Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7598u;
    // 0x1c759c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7598u, 0x1C75A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75A0u;
label_1c75a0:
    // 0x1c75a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c75a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75a4: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C75A4u;
    SET_GPR_U32(ctx, 31, 0x1C75ACu);
    ctx->pc = 0x1C75A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C75A4u;
    // 0x1c75a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C75A4u, 0x1C75ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75ACu;
label_1c75ac:
    // 0x1c75ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c75acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75b0: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C75B0u;
    SET_GPR_U32(ctx, 31, 0x1C75B8u);
    ctx->pc = 0x1C75B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C75B0u;
    // 0x1c75b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C75B0u, 0x1C75B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75B8u;
label_1c75b8:
    // 0x1c75b8: 0x8e03020c  lw          $v1, 0x20C($s0)
    ctx->pc = 0x1c75b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x1c75bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c75bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c75c0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C75C0u;
    {
        const bool branch_taken_0x1c75c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C75C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75C0u;
        // 0x1c75c4: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75c0) {
            ctx->pc = 0x1C75CCu;
            return;
        }
    }
    ctx->pc = 0x1C75C8u;
    // 0x1c75c8: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1c75c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    ctx->pc = 0x1c75ccu;
}
