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

// Function: entry_00119774
// Address: 0x119774 - 0x1197c0
void entry_00119774_0x119774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119774_0x119774");
#endif

    switch (ctx->pc) {
        case 0x119798u: goto label_119798;
        default: break;
    }

    ctx->pc = 0x119774u;

label_119774:
    // 0x119774: 0x86110000  lh          $s1, 0x0($s0)
    ctx->pc = 0x119774u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_119778:
    // 0x119778: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x119778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_11977c:
    // 0x11977c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x11977cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_119780:
    // 0x119780: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_119784:
    // 0x119784: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119788:
    // 0x119788: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11978c:
    // 0x11978c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x11978cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_119790:
    // 0x119790: 0x320f809  jalr        $t9
label_119794:
    if (ctx->pc == 0x119794u) {
        ctx->pc = 0x119794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119790u;
        // 0x119794: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119798u;
        goto label_119798;
    }
    ctx->pc = 0x119790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119798u);
        ctx->pc = 0x119794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119790u;
        // 0x119794: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119790u, 0x119798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119798u;
label_119798:
    // 0x119798: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x119798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_11979c:
    // 0x11979c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11979cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1197a0:
    // 0x1197a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1197a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1197a4:
    // 0x1197a4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1197a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1197a8:
    // 0x1197a8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1197a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1197ac:
    // 0x1197ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1197acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1197b0:
    // 0x1197b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1197b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1197b4:
    // 0x1197b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1197b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1197b8:
    // 0x1197b8: 0x3e00008  jr          $ra
label_1197bc:
    if (ctx->pc == 0x1197BCu) {
        ctx->pc = 0x1197BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197B8u;
        // 0x1197bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1197C0u;
        goto label_fallthrough_0x1197b8;
    }
    ctx->pc = 0x1197B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1197BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197B8u;
        // 0x1197bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1197B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1197b8:
    ctx->pc = 0x1197C0u;
}
