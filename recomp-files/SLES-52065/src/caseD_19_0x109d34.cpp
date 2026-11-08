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

// Function: caseD_19
// Address: 0x109d34 - 0x109d6c
void caseD_19_0x109d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_19_0x109d34");
#endif

    switch (ctx->pc) {
        case 0x109d34u: goto label_109d34;
        case 0x109d38u: goto label_109d38;
        case 0x109d3cu: goto label_109d3c;
        case 0x109d40u: goto label_109d40;
        case 0x109d44u: goto label_109d44;
        case 0x109d48u: goto label_109d48;
        case 0x109d4cu: goto label_109d4c;
        case 0x109d50u: goto label_109d50;
        case 0x109d54u: goto label_109d54;
        case 0x109d58u: goto label_109d58;
        case 0x109d5cu: goto label_109d5c;
        case 0x109d60u: goto label_109d60;
        case 0x109d64u: goto label_109d64;
        case 0x109d68u: goto label_109d68;
        default: break;
    }

    ctx->pc = 0x109d34u;

label_109d34:
    // 0x109d34: 0x86250004  lh          $a1, 0x4($s1)
    ctx->pc = 0x109d34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_109d38:
    // 0x109d38: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109d3c:
    // 0x109d3c: 0xc057040  jal         func_15C100
label_109d40:
    if (ctx->pc == 0x109D40u) {
        ctx->pc = 0x109D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D3Cu;
        // 0x109d40: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x109D44u;
        goto label_109d44;
    }
    ctx->pc = 0x109D3Cu;
    SET_GPR_U32(ctx, 31, 0x109D44u);
    ctx->pc = 0x109D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D3Cu;
    // 0x109d40: 0x86260002  lh          $a2, 0x2($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x109D3Cu, 0x109D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D44u;
label_109d44:
    // 0x109d44: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x109d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109d48:
    // 0x109d48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_109d4c:
    // 0x109d4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_109d50:
    // 0x109d50: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x109d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_109d54:
    // 0x109d54: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x109d54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_109d58:
    // 0x109d58: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x109d58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_109d5c:
    // 0x109d5c: 0x320f809  jalr        $t9
label_109d60:
    if (ctx->pc == 0x109D60u) {
        ctx->pc = 0x109D64u;
        goto label_109d64;
    }
    ctx->pc = 0x109D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109D64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109D5Cu, 0x109D64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109D64u;
label_109d64:
    // 0x109d64: 0x10000122  b           . + 4 + (0x122 << 2)
label_109d68:
    if (ctx->pc == 0x109D68u) {
        ctx->pc = 0x109D6Cu;
        goto label_fallthrough_0x109d64;
    }
    ctx->pc = 0x109D64u;
    {
        const bool branch_taken_0x109d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109d64) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
label_fallthrough_0x109d64:
    ctx->pc = 0x109D6Cu;
}
