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

// Function: caseD_18
// Address: 0x109d98 - 0x109dcc
void caseD_18_0x109d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_18_0x109d98");
#endif

    switch (ctx->pc) {
        case 0x109d98u: goto label_109d98;
        case 0x109d9cu: goto label_109d9c;
        case 0x109da0u: goto label_109da0;
        case 0x109da4u: goto label_109da4;
        case 0x109da8u: goto label_109da8;
        case 0x109dacu: goto label_109dac;
        case 0x109db0u: goto label_109db0;
        case 0x109db4u: goto label_109db4;
        case 0x109db8u: goto label_109db8;
        case 0x109dbcu: goto label_109dbc;
        case 0x109dc0u: goto label_109dc0;
        case 0x109dc4u: goto label_109dc4;
        case 0x109dc8u: goto label_109dc8;
        default: break;
    }

    ctx->pc = 0x109d98u;

label_109d98:
    // 0x109d98: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x109d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_109d9c:
    // 0x109d9c: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x109d9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_109da0:
    // 0x109da0: 0x8c623ddc  lw          $v0, 0x3DDC($v1)
    ctx->pc = 0x109da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15836)));
label_109da4:
    // 0x109da4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x109da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_109da8:
    // 0x109da8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_109dac:
    // 0x109dac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_109db0:
    // 0x109db0: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x109db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_109db4:
    // 0x109db4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x109db4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_109db8:
    // 0x109db8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x109db8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_109dbc:
    // 0x109dbc: 0x320f809  jalr        $t9
label_109dc0:
    if (ctx->pc == 0x109DC0u) {
        ctx->pc = 0x109DC4u;
        goto label_109dc4;
    }
    ctx->pc = 0x109DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x109DC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109DBCu, 0x109DC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109DC4u;
label_109dc4:
    // 0x109dc4: 0x1000010a  b           . + 4 + (0x10A << 2)
label_109dc8:
    if (ctx->pc == 0x109DC8u) {
        ctx->pc = 0x109DCCu;
        goto label_fallthrough_0x109dc4;
    }
    ctx->pc = 0x109DC4u;
    {
        const bool branch_taken_0x109dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109dc4) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
label_fallthrough_0x109dc4:
    ctx->pc = 0x109DCCu;
}
