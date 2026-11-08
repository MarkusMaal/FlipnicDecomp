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

// Function: entry_001a9b4c
// Address: 0x1a9b4c - 0x1a9b94
void entry_001a9b4c_0x1a9b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9b4c_0x1a9b4c");
#endif

    switch (ctx->pc) {
        case 0x1a9b7cu: goto label_1a9b7c;
        default: break;
    }

    ctx->pc = 0x1a9b4cu;

label_1a9b4c:
    // 0x1a9b4c: 0x0  nop
    ctx->pc = 0x1a9b4cu;
    // NOP
label_1a9b50:
    // 0x1a9b50: 0x2b3a021  addu        $s4, $s5, $s3
    ctx->pc = 0x1a9b50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_1a9b54:
    // 0x1a9b54: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x1a9b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1a9b58:
    // 0x1a9b58: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a9b5c:
    // 0x1a9b5c: 0x8c630680  lw          $v1, 0x680($v1)
    ctx->pc = 0x1a9b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1664)));
label_1a9b60:
    // 0x1a9b60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a9b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a9b64:
    // 0x1a9b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9b68:
    // 0x1a9b68: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a9b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a9b6c:
    // 0x1a9b6c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a9b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a9b70:
    // 0x1a9b70: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1a9b70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1a9b74:
    // 0x1a9b74: 0x320f809  jalr        $t9
label_1a9b78:
    if (ctx->pc == 0x1A9B78u) {
        ctx->pc = 0x1A9B7Cu;
        goto label_1a9b7c;
    }
    ctx->pc = 0x1A9B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A9B7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9B74u, 0x1A9B7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9B7Cu;
label_1a9b7c:
    // 0x1a9b7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a9b80:
    if (ctx->pc == 0x1A9B80u) {
        ctx->pc = 0x1A9B84u;
        goto label_1a9b84;
    }
    ctx->pc = 0x1A9B7Cu;
    {
        const bool branch_taken_0x1a9b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9b7c) {
            ctx->pc = 0x1A9B94u;
            return;
        }
    }
    ctx->pc = 0x1A9B84u;
label_1a9b84:
    // 0x1a9b84: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a9b84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a9b88:
    // 0x1a9b88: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1a9b88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_1a9b8c:
    // 0x1a9b8c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1a9b90:
    if (ctx->pc == 0x1A9B90u) {
        ctx->pc = 0x1A9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B8Cu;
        // 0x1a9b90: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9B94u;
        goto label_fallthrough_0x1a9b8c;
    }
    ctx->pc = 0x1A9B8Cu;
    {
        const bool branch_taken_0x1a9b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B8Cu;
        // 0x1a9b90: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b8c) {
            ctx->pc = 0x1A9B4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9b4c;
        }
    }
label_fallthrough_0x1a9b8c:
    ctx->pc = 0x1A9B94u;
}
