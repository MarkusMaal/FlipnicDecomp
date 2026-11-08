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

// Function: entry_0010e704
// Address: 0x10e704 - 0x10e74c
void entry_0010e704_0x10e704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e704_0x10e704");
#endif

    switch (ctx->pc) {
        case 0x10e744u: goto label_10e744;
        default: break;
    }

    ctx->pc = 0x10e704u;

label_10e704:
    // 0x10e704: 0x8e240210  lw          $a0, 0x210($s1)
    ctx->pc = 0x10e704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_10e708:
    // 0x10e708: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x10e708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_10e70c:
    // 0x10e70c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x10e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10e710:
    // 0x10e710: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x10e710u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_10e714:
    // 0x10e714: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x10e714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_10e718:
    // 0x10e718: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x10e718u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10e71c:
    // 0x10e71c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10e720:
    // 0x10e720: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10e720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10e724:
    // 0x10e724: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x10e724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10e728:
    // 0x10e728: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10e728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10e72c:
    // 0x10e72c: 0x1010  mfhi        $v0
    ctx->pc = 0x10e72cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_10e730:
    // 0x10e730: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10e730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10e734:
    // 0x10e734: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x10e734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_10e738:
    // 0x10e738: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10e738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10e73c:
    // 0x10e73c: 0x320f809  jalr        $t9
label_10e740:
    if (ctx->pc == 0x10E740u) {
        ctx->pc = 0x10E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E73Cu;
        // 0x10e740: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E744u;
        goto label_10e744;
    }
    ctx->pc = 0x10E73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10E744u);
        ctx->pc = 0x10E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E73Cu;
        // 0x10e740: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E73Cu, 0x10E744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E744u;
label_10e744:
    // 0x10e744: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x10e744u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_10e748:
    // 0x10e748: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10e748u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x10e74cu;
}
