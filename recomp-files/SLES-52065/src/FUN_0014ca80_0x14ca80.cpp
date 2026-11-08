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

// Function: FUN_0014ca80
// Address: 0x14ca80 - 0x14cafc
void FUN_0014ca80_0x14ca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014ca80_0x14ca80");
#endif

    switch (ctx->pc) {
        case 0x14ca80u: goto label_14ca80;
        case 0x14ca84u: goto label_14ca84;
        case 0x14ca88u: goto label_14ca88;
        case 0x14ca8cu: goto label_14ca8c;
        case 0x14ca90u: goto label_14ca90;
        case 0x14ca94u: goto label_14ca94;
        case 0x14ca98u: goto label_14ca98;
        case 0x14ca9cu: goto label_14ca9c;
        case 0x14caa0u: goto label_14caa0;
        case 0x14caa4u: goto label_14caa4;
        case 0x14caa8u: goto label_14caa8;
        case 0x14caacu: goto label_14caac;
        case 0x14cab0u: goto label_14cab0;
        case 0x14cab4u: goto label_14cab4;
        case 0x14cab8u: goto label_14cab8;
        case 0x14cabcu: goto label_14cabc;
        case 0x14cac0u: goto label_14cac0;
        case 0x14cac4u: goto label_14cac4;
        case 0x14cac8u: goto label_14cac8;
        case 0x14caccu: goto label_14cacc;
        case 0x14cad0u: goto label_14cad0;
        case 0x14cad4u: goto label_14cad4;
        case 0x14cad8u: goto label_14cad8;
        case 0x14cadcu: goto label_14cadc;
        case 0x14cae0u: goto label_14cae0;
        case 0x14cae4u: goto label_14cae4;
        case 0x14cae8u: goto label_14cae8;
        case 0x14caecu: goto label_14caec;
        case 0x14caf0u: goto label_14caf0;
        case 0x14caf4u: goto label_14caf4;
        case 0x14caf8u: goto label_14caf8;
        default: break;
    }

    ctx->pc = 0x14ca80u;

label_14ca80:
    // 0x14ca80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14ca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_14ca84:
    // 0x14ca84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_14ca88:
    // 0x14ca88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14ca88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_14ca8c:
    // 0x14ca8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14ca8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14ca90:
    // 0x14ca90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14ca90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14ca94:
    // 0x14ca94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14ca94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14ca98:
    // 0x14ca98: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x14ca98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_14ca9c:
    // 0x14ca9c: 0x8ca400b0  lw          $a0, 0xB0($a1)
    ctx->pc = 0x14ca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
label_14caa0:
    // 0x14caa0: 0xc052130  jal         func_1484C0
label_14caa4:
    if (ctx->pc == 0x14CAA4u) {
        ctx->pc = 0x14CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CAA0u;
        // 0x14caa4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CAA8u;
        goto label_14caa8;
    }
    ctx->pc = 0x14CAA0u;
    SET_GPR_U32(ctx, 31, 0x14CAA8u);
    ctx->pc = 0x14CAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CAA0u;
    // 0x14caa4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1484C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1484C0u, 0x14CAA0u, 0x14CAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CAA8u;
label_14caa8:
    // 0x14caa8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x14caa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_14caac:
    // 0x14caac: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x14caacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_14cab0:
    // 0x14cab0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14cab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14cab4:
    // 0x14cab4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x14cab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_14cab8:
    // 0x14cab8: 0x320f809  jalr        $t9
label_14cabc:
    if (ctx->pc == 0x14CABCu) {
        ctx->pc = 0x14CAC0u;
        goto label_14cac0;
    }
    ctx->pc = 0x14CAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14CAC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CAB8u, 0x14CAC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CAC0u;
label_14cac0:
    // 0x14cac0: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x14cac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_14cac4:
    // 0x14cac4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x14cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14cac8:
    // 0x14cac8: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x14cac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14cacc:
    // 0x14cacc: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x14caccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14cad0:
    // 0x14cad0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x14cad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14cad4:
    // 0x14cad4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x14cad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14cad8:
    // 0x14cad8: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x14cad8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_14cadc:
    // 0x14cadc: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x14cadcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_14cae0:
    // 0x14cae0: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x14cae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_14cae4:
    // 0x14cae4: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x14cae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_14cae8:
    // 0x14cae8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14cae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14caec:
    // 0x14caec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14caecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14caf0:
    // 0x14caf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14caf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14caf4:
    // 0x14caf4: 0x3e00008  jr          $ra
label_14caf8:
    if (ctx->pc == 0x14CAF8u) {
        ctx->pc = 0x14CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CAF4u;
        // 0x14caf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CAFCu;
        goto label_fallthrough_0x14caf4;
    }
    ctx->pc = 0x14CAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CAF4u;
        // 0x14caf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14caf4:
    ctx->pc = 0x14CAFCu;
}
