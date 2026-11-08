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

// Function: entry_0010ea98
// Address: 0x10ea98 - 0x10eae8
void entry_0010ea98_0x10ea98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ea98_0x10ea98");
#endif

    switch (ctx->pc) {
        case 0x10eae4u: goto label_10eae4;
        default: break;
    }

    ctx->pc = 0x10ea98u;

label_10ea98:
    // 0x10ea98: 0x8e240220  lw          $a0, 0x220($s1)
    ctx->pc = 0x10ea98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
label_10ea9c:
    // 0x10ea9c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x10ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_10eaa0:
    // 0x10eaa0: 0x8e230210  lw          $v1, 0x210($s1)
    ctx->pc = 0x10eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10eaa4:
    // 0x10eaa4: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x10eaa4u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_10eaa8:
    // 0x10eaa8: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x10eaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_10eaac:
    // 0x10eaac: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x10eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_10eab0:
    // 0x10eab0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10eab4:
    // 0x10eab4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10eab4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10eab8:
    // 0x10eab8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10eabc:
    // 0x10eabc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10eac0:
    // 0x10eac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10eac4:
    // 0x10eac4: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x10eac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10eac8:
    // 0x10eac8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10eac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10eacc:
    // 0x10eacc: 0x1010  mfhi        $v0
    ctx->pc = 0x10eaccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_10ead0:
    // 0x10ead0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10ead4:
    // 0x10ead4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x10ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_10ead8:
    // 0x10ead8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10ead8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10eadc:
    // 0x10eadc: 0x320f809  jalr        $t9
label_10eae0:
    if (ctx->pc == 0x10EAE0u) {
        ctx->pc = 0x10EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EADCu;
        // 0x10eae0: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EAE4u;
        goto label_10eae4;
    }
    ctx->pc = 0x10EADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10EAE4u);
        ctx->pc = 0x10EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EADCu;
        // 0x10eae0: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EADCu, 0x10EAE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10EAE4u;
label_10eae4:
    // 0x10eae4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10eae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x10eae8u;
}
