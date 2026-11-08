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

// Function: FUN_0017b770
// Address: 0x17b770 - 0x17b7e8
void FUN_0017b770_0x17b770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017b770_0x17b770");
#endif

    switch (ctx->pc) {
        case 0x17b770u: goto label_17b770;
        case 0x17b774u: goto label_17b774;
        case 0x17b778u: goto label_17b778;
        case 0x17b77cu: goto label_17b77c;
        case 0x17b780u: goto label_17b780;
        case 0x17b784u: goto label_17b784;
        case 0x17b788u: goto label_17b788;
        case 0x17b78cu: goto label_17b78c;
        case 0x17b790u: goto label_17b790;
        case 0x17b794u: goto label_17b794;
        case 0x17b798u: goto label_17b798;
        case 0x17b79cu: goto label_17b79c;
        case 0x17b7a0u: goto label_17b7a0;
        case 0x17b7a4u: goto label_17b7a4;
        case 0x17b7a8u: goto label_17b7a8;
        case 0x17b7acu: goto label_17b7ac;
        case 0x17b7b0u: goto label_17b7b0;
        case 0x17b7b4u: goto label_17b7b4;
        case 0x17b7b8u: goto label_17b7b8;
        case 0x17b7bcu: goto label_17b7bc;
        case 0x17b7c0u: goto label_17b7c0;
        case 0x17b7c4u: goto label_17b7c4;
        case 0x17b7c8u: goto label_17b7c8;
        case 0x17b7ccu: goto label_17b7cc;
        case 0x17b7d0u: goto label_17b7d0;
        case 0x17b7d4u: goto label_17b7d4;
        case 0x17b7d8u: goto label_17b7d8;
        case 0x17b7dcu: goto label_17b7dc;
        case 0x17b7e0u: goto label_17b7e0;
        case 0x17b7e4u: goto label_17b7e4;
        default: break;
    }

    ctx->pc = 0x17b770u;

label_17b770:
    // 0x17b770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17b774:
    // 0x17b774: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17b774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17b778:
    // 0x17b778: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17b77c:
    // 0x17b77c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17b77cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17b780:
    // 0x17b780: 0xc0563cc  jal         func_158F30
label_17b784:
    if (ctx->pc == 0x17B784u) {
        ctx->pc = 0x17B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B780u;
        // 0x17b784: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B788u;
        goto label_17b788;
    }
    ctx->pc = 0x17B780u;
    SET_GPR_U32(ctx, 31, 0x17B788u);
    ctx->pc = 0x17B784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B780u;
    // 0x17b784: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x17B780u, 0x17B788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B788u;
label_17b788:
    // 0x17b788: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17b788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17b78c:
    // 0x17b78c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b790:
    // 0x17b790: 0xc05ee1c  jal         func_17B870
label_17b794:
    if (ctx->pc == 0x17B794u) {
        ctx->pc = 0x17B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B790u;
        // 0x17b794: 0xa22001d0  sb          $zero, 0x1D0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 464), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B798u;
        goto label_17b798;
    }
    ctx->pc = 0x17B790u;
    SET_GPR_U32(ctx, 31, 0x17B798u);
    ctx->pc = 0x17B794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B790u;
    // 0x17b794: 0xa22001d0  sb          $zero, 0x1D0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 464), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B870u, 0x17B790u, 0x17B798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B798u;
label_17b798:
    // 0x17b798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17b798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17b79c:
    // 0x17b79c: 0xc05ee30  jal         func_17B8C0
label_17b7a0:
    if (ctx->pc == 0x17B7A0u) {
        ctx->pc = 0x17B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B79Cu;
        // 0x17b7a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B7A4u;
        goto label_17b7a4;
    }
    ctx->pc = 0x17B79Cu;
    SET_GPR_U32(ctx, 31, 0x17B7A4u);
    ctx->pc = 0x17B7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B79Cu;
    // 0x17b7a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B8C0u, 0x17B79Cu, 0x17B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B7A4u;
label_17b7a4:
    // 0x17b7a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17b7a8:
    // 0x17b7a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17b7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17b7ac:
    // 0x17b7ac: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x17b7acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_17b7b0:
    // 0x17b7b0: 0x80500022  lb          $s0, 0x22($v0)
    ctx->pc = 0x17b7b0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
label_17b7b4:
    // 0x17b7b4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x17b7b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_17b7b8:
    // 0x17b7b8: 0x320f809  jalr        $t9
label_17b7bc:
    if (ctx->pc == 0x17B7BCu) {
        ctx->pc = 0x17B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7B8u;
        // 0x17b7bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B7C0u;
        goto label_17b7c0;
    }
    ctx->pc = 0x17B7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17B7C0u);
        ctx->pc = 0x17B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7B8u;
        // 0x17b7bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B7B8u, 0x17B7C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B7C0u;
label_17b7c0:
    // 0x17b7c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_17b7c4:
    // 0x17b7c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17b7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17b7c8:
    // 0x17b7c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17b7c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17b7cc:
    // 0x17b7cc: 0xc0425a4  jal         func_109690
label_17b7d0:
    if (ctx->pc == 0x17B7D0u) {
        ctx->pc = 0x17B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7CCu;
        // 0x17b7d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B7D4u;
        goto label_17b7d4;
    }
    ctx->pc = 0x17B7CCu;
    SET_GPR_U32(ctx, 31, 0x17B7D4u);
    ctx->pc = 0x17B7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B7CCu;
    // 0x17b7d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17B7CCu, 0x17B7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B7D4u;
label_17b7d4:
    // 0x17b7d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17b7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17b7d8:
    // 0x17b7d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b7d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17b7dc:
    // 0x17b7dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b7dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17b7e0:
    // 0x17b7e0: 0x3e00008  jr          $ra
label_17b7e4:
    if (ctx->pc == 0x17B7E4u) {
        ctx->pc = 0x17B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7E0u;
        // 0x17b7e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B7E8u;
        goto label_fallthrough_0x17b7e0;
    }
    ctx->pc = 0x17B7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7E0u;
        // 0x17b7e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17b7e0:
    ctx->pc = 0x17B7E8u;
}
