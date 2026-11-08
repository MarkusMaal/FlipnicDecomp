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

// Function: entry_0019d678
// Address: 0x19d678 - 0x19d6b8
void entry_0019d678_0x19d678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d678_0x19d678");
#endif

    switch (ctx->pc) {
        case 0x19d688u: goto label_19d688;
        default: break;
    }

    ctx->pc = 0x19d678u;

label_19d678:
    // 0x19d678: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19d678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19d67c:
    // 0x19d67c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x19d67cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_19d680:
    // 0x19d680: 0x320f809  jalr        $t9
label_19d684:
    if (ctx->pc == 0x19D684u) {
        ctx->pc = 0x19D688u;
        goto label_19d688;
    }
    ctx->pc = 0x19D680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19D688u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D680u, 0x19D688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D688u;
label_19d688:
    // 0x19d688: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19d688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d68c:
    // 0x19d68c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_19d690:
    if (ctx->pc == 0x19D690u) {
        ctx->pc = 0x19D694u;
        goto label_19d694;
    }
    ctx->pc = 0x19D68Cu;
    {
        const bool branch_taken_0x19d68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19d68c) {
            ctx->pc = 0x19D6B8u;
            return;
        }
    }
    ctx->pc = 0x19D694u;
label_19d694:
    // 0x19d694: 0x8e230878  lw          $v1, 0x878($s1)
    ctx->pc = 0x19d694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_19d698:
    // 0x19d698: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19d69c:
    // 0x19d69c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x19d69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_19d6a0:
    // 0x19d6a0: 0xac600734  sw          $zero, 0x734($v1)
    ctx->pc = 0x19d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1844), GPR_U32(ctx, 0));
label_19d6a4:
    // 0x19d6a4: 0x8e230878  lw          $v1, 0x878($s1)
    ctx->pc = 0x19d6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_19d6a8:
    // 0x19d6a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19d6ac:
    // 0x19d6ac: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x19d6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_19d6b0:
    // 0x19d6b0: 0xac6006b4  sw          $zero, 0x6B4($v1)
    ctx->pc = 0x19d6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1716), GPR_U32(ctx, 0));
label_19d6b4:
    // 0x19d6b4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x19d6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x19d6b8u;
}
