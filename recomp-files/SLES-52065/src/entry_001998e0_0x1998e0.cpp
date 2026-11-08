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

// Function: entry_001998e0
// Address: 0x1998e0 - 0x199910
void entry_001998e0_0x1998e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001998e0_0x1998e0");
#endif

    ctx->pc = 0x1998e0u;

label_1998e0:
    // 0x1998e0: 0x8e830934  lw          $v1, 0x934($s4)
    ctx->pc = 0x1998e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2356)));
label_1998e4:
    // 0x1998e4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1998e8:
    if (ctx->pc == 0x1998E8u) {
        ctx->pc = 0x1998ECu;
        goto label_1998ec;
    }
    ctx->pc = 0x1998E4u;
    {
        const bool branch_taken_0x1998e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1998e4) {
            ctx->pc = 0x199910u;
            return;
        }
    }
    ctx->pc = 0x1998ECu;
label_1998ec:
    // 0x1998ec: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1998ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1998f0:
    // 0x1998f0: 0x8c623ddc  lw          $v0, 0x3DDC($v1)
    ctx->pc = 0x1998f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15836)));
label_1998f4:
    // 0x1998f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1998f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1998f8:
    // 0x1998f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1998f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1998fc:
    // 0x1998fc: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x1998fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_199900:
    // 0x199900: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x199900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_199904:
    // 0x199904: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x199904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_199908:
    // 0x199908: 0x320f809  jalr        $t9
label_19990c:
    if (ctx->pc == 0x19990Cu) {
        ctx->pc = 0x199910u;
        goto label_fallthrough_0x199908;
    }
    ctx->pc = 0x199908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x199910u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199908u, 0x199910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x199908:
    ctx->pc = 0x199910u;
}
