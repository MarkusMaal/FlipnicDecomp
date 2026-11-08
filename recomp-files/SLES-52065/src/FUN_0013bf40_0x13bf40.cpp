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

// Function: FUN_0013bf40
// Address: 0x13bf40 - 0x13c024
void FUN_0013bf40_0x13bf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013bf40_0x13bf40");
#endif

    switch (ctx->pc) {
        case 0x13bf7cu: goto label_13bf7c;
        case 0x13bf94u: goto label_13bf94;
        case 0x13bfa8u: goto label_13bfa8;
        case 0x13bfb4u: goto label_13bfb4;
        case 0x13bfbcu: goto label_13bfbc;
        case 0x13bfd8u: goto label_13bfd8;
        case 0x13bff0u: goto label_13bff0;
        case 0x13c008u: goto label_13c008;
        default: break;
    }

    ctx->pc = 0x13bf40u;

    // 0x13bf40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13bf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13bf44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13bf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13bf48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13bf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13bf4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13bf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13bf50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13bf50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bf54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13bf54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13bf58: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x13BF58u;
    {
        const bool branch_taken_0x13bf58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF58u;
        // 0x13bf5c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf58) {
            ctx->pc = 0x13C008u;
            goto label_13c008;
        }
    }
    ctx->pc = 0x13BF60u;
    // 0x13bf60: 0x12400024  beqz        $s2, . + 4 + (0x24 << 2)
    ctx->pc = 0x13BF60u;
    {
        const bool branch_taken_0x13bf60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF60u;
        // 0x13bf64: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf60) {
            ctx->pc = 0x13BFF4u;
            goto label_13bff4;
        }
    }
    ctx->pc = 0x13BF68u;
    // 0x13bf68: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x13bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13bf6c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x13BF6Cu;
    {
        const bool branch_taken_0x13bf6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF6Cu;
        // 0x13bf70: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf6c) {
            ctx->pc = 0x13BFC0u;
            goto label_13bfc0;
        }
    }
    ctx->pc = 0x13BF74u;
    // 0x13bf74: 0xc04f00c  jal         func_13C030
    ctx->pc = 0x13BF74u;
    SET_GPR_U32(ctx, 31, 0x13BF7Cu);
    ctx->pc = 0x13BF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BF74u;
    // 0x13bf78: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C030u, 0x13BF74u, 0x13BF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BF7Cu;
label_13bf7c:
    // 0x13bf7c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13bf7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13bf80: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x13bf80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13bf84: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BF84u;
    {
        const bool branch_taken_0x13bf84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF84u;
        // 0x13bf88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf84) {
            ctx->pc = 0x13BF94u;
            goto label_13bf94;
        }
    }
    ctx->pc = 0x13BF8Cu;
    // 0x13bf8c: 0xc04ee7c  jal         func_13B9F0
    ctx->pc = 0x13BF8Cu;
    SET_GPR_U32(ctx, 31, 0x13BF94u);
    ctx->pc = 0x13B9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B9F0u, 0x13BF8Cu, 0x13BF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BF94u;
label_13bf94:
    // 0x13bf94: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x13bf94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13bf98: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BF98u;
    {
        const bool branch_taken_0x13bf98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BF98u;
        // 0x13bf9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bf98) {
            ctx->pc = 0x13BFACu;
            goto label_13bfac;
        }
    }
    ctx->pc = 0x13BFA0u;
    // 0x13bfa0: 0xc04ee7c  jal         func_13B9F0
    ctx->pc = 0x13BFA0u;
    SET_GPR_U32(ctx, 31, 0x13BFA8u);
    ctx->pc = 0x13BFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BFA0u;
    // 0x13bfa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B9F0u, 0x13BFA0u, 0x13BFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BFA8u;
label_13bfa8:
    // 0x13bfa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13bfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13bfac:
    // 0x13bfac: 0xc04eedc  jal         func_13BB70
    ctx->pc = 0x13BFACu;
    SET_GPR_U32(ctx, 31, 0x13BFB4u);
    ctx->pc = 0x13BB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB70u, 0x13BFACu, 0x13BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BFB4u;
label_13bfb4:
    // 0x13bfb4: 0xc04eed8  jal         func_13BB60
    ctx->pc = 0x13BFB4u;
    SET_GPR_U32(ctx, 31, 0x13BFBCu);
    ctx->pc = 0x13BFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BFB4u;
    // 0x13bfb8: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB60u, 0x13BFB4u, 0x13BFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BFBCu;
label_13bfbc:
    // 0x13bfbc: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x13bfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_13bfc0:
    // 0x13bfc0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BFC0u;
    {
        const bool branch_taken_0x13bfc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bfc0) {
            ctx->pc = 0x13BFD8u;
            goto label_13bfd8;
        }
    }
    ctx->pc = 0x13BFC8u;
    // 0x13bfc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BFC8u;
    {
        const bool branch_taken_0x13bfc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BFC8u;
        // 0x13bfcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bfc8) {
            ctx->pc = 0x13BFD8u;
            goto label_13bfd8;
        }
    }
    ctx->pc = 0x13BFD0u;
    // 0x13bfd0: 0xc04efbc  jal         func_13BEF0
    ctx->pc = 0x13BFD0u;
    SET_GPR_U32(ctx, 31, 0x13BFD8u);
    ctx->pc = 0x13BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BEF0u, 0x13BFD0u, 0x13BFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BFD8u;
label_13bfd8:
    // 0x13bfd8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x13BFD8u;
    {
        const bool branch_taken_0x13bfd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bfd8) {
            ctx->pc = 0x13BFF0u;
            goto label_13bff0;
        }
    }
    ctx->pc = 0x13BFE0u;
    // 0x13bfe0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BFE0u;
    {
        const bool branch_taken_0x13bfe0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BFE0u;
        // 0x13bfe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bfe0) {
            ctx->pc = 0x13BFF0u;
            goto label_13bff0;
        }
    }
    ctx->pc = 0x13BFE8u;
    // 0x13bfe8: 0xc04f010  jal         func_13C040
    ctx->pc = 0x13BFE8u;
    SET_GPR_U32(ctx, 31, 0x13BFF0u);
    ctx->pc = 0x13BFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BFE8u;
    // 0x13bfec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C040u, 0x13BFE8u, 0x13BFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BFF0u;
label_13bff0:
    // 0x13bff0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x13bff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_13bff4:
    // 0x13bff4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13bff4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13bff8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BFF8u;
    {
        const bool branch_taken_0x13bff8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BFF8u;
        // 0x13bffc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bff8) {
            ctx->pc = 0x13C00Cu;
            goto label_13c00c;
        }
    }
    ctx->pc = 0x13C000u;
    // 0x13c000: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13C000u;
    SET_GPR_U32(ctx, 31, 0x13C008u);
    ctx->pc = 0x13C004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C000u;
    // 0x13c004: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13C000u, 0x13C008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C008u;
label_13c008:
    // 0x13c008: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x13c008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13c00c:
    // 0x13c00c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13c00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c010: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13c010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c01c: 0x3e00008  jr          $ra
    ctx->pc = 0x13C01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C01Cu;
        // 0x13c020: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C024u;
}
