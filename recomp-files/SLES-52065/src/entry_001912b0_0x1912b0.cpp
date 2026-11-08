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

// Function: entry_001912b0
// Address: 0x1912b0 - 0x1912e0
void entry_001912b0_0x1912b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001912b0_0x1912b0");
#endif

    switch (ctx->pc) {
        case 0x1912d0u: goto label_1912d0;
        default: break;
    }

    ctx->pc = 0x1912b0u;

label_1912b0:
    // 0x1912b0: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1912b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1912b4:
    // 0x1912b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1912b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1912b8:
    // 0x1912b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1912b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1912bc:
    // 0x1912bc: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1912bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1912c0:
    // 0x1912c0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1912c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1912c4:
    // 0x1912c4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1912c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1912c8:
    // 0x1912c8: 0x320f809  jalr        $t9
label_1912cc:
    if (ctx->pc == 0x1912CCu) {
        ctx->pc = 0x1912D0u;
        goto label_1912d0;
    }
    ctx->pc = 0x1912C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1912D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1912C8u, 0x1912D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1912D0u;
label_1912d0:
    // 0x1912d0: 0x160200f1  bne         $s0, $v0, . + 4 + (0xF1 << 2)
label_1912d4:
    if (ctx->pc == 0x1912D4u) {
        ctx->pc = 0x1912D8u;
        goto label_1912d8;
    }
    ctx->pc = 0x1912D0u;
    {
        const bool branch_taken_0x1912d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1912d0) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x1912D8u;
label_1912d8:
    // 0x1912d8: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_1912dc:
    if (ctx->pc == 0x1912DCu) {
        ctx->pc = 0x1912DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912D8u;
        // 0x1912dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1912E0u;
        goto label_fallthrough_0x1912d8;
    }
    ctx->pc = 0x1912D8u;
    {
        const bool branch_taken_0x1912d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1912DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912D8u;
        // 0x1912dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1912d8) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
label_fallthrough_0x1912d8:
    ctx->pc = 0x1912E0u;
}
