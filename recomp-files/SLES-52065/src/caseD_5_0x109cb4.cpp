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

// Function: caseD_5
// Address: 0x109cb4 - 0x109cec
void caseD_5_0x109cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x109cb4");
#endif

    switch (ctx->pc) {
        case 0x109cb4u: goto label_109cb4;
        case 0x109cb8u: goto label_109cb8;
        case 0x109cbcu: goto label_109cbc;
        case 0x109cc0u: goto label_109cc0;
        case 0x109cc4u: goto label_109cc4;
        case 0x109cc8u: goto label_109cc8;
        case 0x109cccu: goto label_109ccc;
        case 0x109cd0u: goto label_109cd0;
        case 0x109cd4u: goto label_109cd4;
        case 0x109cd8u: goto label_109cd8;
        case 0x109cdcu: goto label_109cdc;
        case 0x109ce0u: goto label_109ce0;
        case 0x109ce4u: goto label_109ce4;
        case 0x109ce8u: goto label_109ce8;
        default: break;
    }

    ctx->pc = 0x109cb4u;

label_109cb4:
    // 0x109cb4: 0x86250004  lh          $a1, 0x4($s1)
    ctx->pc = 0x109cb4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_109cb8:
    // 0x109cb8: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109cbc:
    // 0x109cbc: 0xc057040  jal         func_15C100
label_109cc0:
    if (ctx->pc == 0x109CC0u) {
        ctx->pc = 0x109CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CBCu;
        // 0x109cc0: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109CC4u;
        goto label_109cc4;
    }
    ctx->pc = 0x109CBCu;
    SET_GPR_U32(ctx, 31, 0x109CC4u);
    ctx->pc = 0x109CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CBCu;
    // 0x109cc0: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x109CBCu, 0x109CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CC4u;
label_109cc4:
    // 0x109cc4: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x109cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109cc8:
    // 0x109cc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_109ccc:
    // 0x109ccc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_109cd0:
    // 0x109cd0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x109cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_109cd4:
    // 0x109cd4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x109cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_109cd8:
    // 0x109cd8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x109cd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_109cdc:
    // 0x109cdc: 0x320f809  jalr        $t9
label_109ce0:
    if (ctx->pc == 0x109CE0u) {
        ctx->pc = 0x109CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CDCu;
        // 0x109ce0: 0x86250006  lh          $a1, 0x6($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109CE4u;
        goto label_109ce4;
    }
    ctx->pc = 0x109CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109CE4u);
        ctx->pc = 0x109CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CDCu;
        // 0x109ce0: 0x86250006  lh          $a1, 0x6($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109CDCu, 0x109CE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109CE4u;
label_109ce4:
    // 0x109ce4: 0x10000142  b           . + 4 + (0x142 << 2)
label_109ce8:
    if (ctx->pc == 0x109CE8u) {
        ctx->pc = 0x109CECu;
        goto label_fallthrough_0x109ce4;
    }
    ctx->pc = 0x109CE4u;
    {
        const bool branch_taken_0x109ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109ce4) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
label_fallthrough_0x109ce4:
    ctx->pc = 0x109CECu;
}
