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

// Function: caseD_0
// Address: 0x1a6938 - 0x1a6970
void caseD_0_0x1a6938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1a6938");
#endif

    switch (ctx->pc) {
        case 0x1a6938u: goto label_1a6938;
        case 0x1a693cu: goto label_1a693c;
        case 0x1a6940u: goto label_1a6940;
        case 0x1a6944u: goto label_1a6944;
        case 0x1a6948u: goto label_1a6948;
        case 0x1a694cu: goto label_1a694c;
        case 0x1a6950u: goto label_1a6950;
        case 0x1a6954u: goto label_1a6954;
        case 0x1a6958u: goto label_1a6958;
        case 0x1a695cu: goto label_1a695c;
        case 0x1a6960u: goto label_1a6960;
        case 0x1a6964u: goto label_1a6964;
        case 0x1a6968u: goto label_1a6968;
        case 0x1a696cu: goto label_1a696c;
        default: break;
    }

    ctx->pc = 0x1a6938u;

label_1a6938:
    // 0x1a6938: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a693c:
    // 0x1a693c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a693cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6940:
    // 0x1a6940: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a6940u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a6944:
    // 0x1a6944: 0x320f809  jalr        $t9
label_1a6948:
    if (ctx->pc == 0x1A6948u) {
        ctx->pc = 0x1A6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6944u;
        // 0x1a6948: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A694Cu;
        goto label_1a694c;
    }
    ctx->pc = 0x1A6944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A694Cu);
        ctx->pc = 0x1A6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6944u;
        // 0x1a6948: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6944u, 0x1A694Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A694Cu;
label_1a694c:
    // 0x1a694c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a694cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6950:
    // 0x1a6950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a6950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6954:
    // 0x1a6954: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6958:
    // 0x1a6958: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a6958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a695c:
    // 0x1a695c: 0x320f809  jalr        $t9
label_1a6960:
    if (ctx->pc == 0x1A6960u) {
        ctx->pc = 0x1A6960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A695Cu;
        // 0x1a6960: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6964u;
        goto label_1a6964;
    }
    ctx->pc = 0x1A695Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6964u);
        ctx->pc = 0x1A6960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A695Cu;
        // 0x1a6960: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A695Cu, 0x1A6964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6964u;
label_1a6964:
    // 0x1a6964: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a6964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a6968:
    // 0x1a6968: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a696c:
    // 0x1a696c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a696cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1a6970u;
}
