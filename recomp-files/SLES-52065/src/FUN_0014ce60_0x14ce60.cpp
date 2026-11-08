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

// Function: FUN_0014ce60
// Address: 0x14ce60 - 0x14cf14
void FUN_0014ce60_0x14ce60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014ce60_0x14ce60");
#endif

    switch (ctx->pc) {
        case 0x14ce60u: goto label_14ce60;
        case 0x14ce64u: goto label_14ce64;
        case 0x14ce68u: goto label_14ce68;
        case 0x14ce6cu: goto label_14ce6c;
        case 0x14ce70u: goto label_14ce70;
        case 0x14ce74u: goto label_14ce74;
        case 0x14ce78u: goto label_14ce78;
        case 0x14ce7cu: goto label_14ce7c;
        case 0x14ce80u: goto label_14ce80;
        case 0x14ce84u: goto label_14ce84;
        case 0x14ce88u: goto label_14ce88;
        case 0x14ce8cu: goto label_14ce8c;
        case 0x14ce90u: goto label_14ce90;
        case 0x14ce94u: goto label_14ce94;
        case 0x14ce98u: goto label_14ce98;
        case 0x14ce9cu: goto label_14ce9c;
        case 0x14cea0u: goto label_14cea0;
        case 0x14cea4u: goto label_14cea4;
        case 0x14cea8u: goto label_14cea8;
        case 0x14ceacu: goto label_14ceac;
        case 0x14ceb0u: goto label_14ceb0;
        case 0x14ceb4u: goto label_14ceb4;
        case 0x14ceb8u: goto label_14ceb8;
        case 0x14cebcu: goto label_14cebc;
        case 0x14cec0u: goto label_14cec0;
        case 0x14cec4u: goto label_14cec4;
        case 0x14cec8u: goto label_14cec8;
        case 0x14ceccu: goto label_14cecc;
        case 0x14ced0u: goto label_14ced0;
        case 0x14ced4u: goto label_14ced4;
        case 0x14ced8u: goto label_14ced8;
        case 0x14cedcu: goto label_14cedc;
        case 0x14cee0u: goto label_14cee0;
        case 0x14cee4u: goto label_14cee4;
        case 0x14cee8u: goto label_14cee8;
        case 0x14ceecu: goto label_14ceec;
        case 0x14cef0u: goto label_14cef0;
        case 0x14cef4u: goto label_14cef4;
        case 0x14cef8u: goto label_14cef8;
        case 0x14cefcu: goto label_14cefc;
        case 0x14cf00u: goto label_14cf00;
        case 0x14cf04u: goto label_14cf04;
        case 0x14cf08u: goto label_14cf08;
        case 0x14cf0cu: goto label_14cf0c;
        case 0x14cf10u: goto label_14cf10;
        default: break;
    }

    ctx->pc = 0x14ce60u;

label_14ce60:
    // 0x14ce60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14ce60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_14ce64:
    // 0x14ce64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ce64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14ce68:
    // 0x14ce68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ce68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ce6c:
    // 0x14ce6c: 0xc4810104  lwc1        $f1, 0x104($a0)
    ctx->pc = 0x14ce6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14ce70:
    // 0x14ce70: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14ce70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14ce74:
    // 0x14ce74: 0x0  nop
    ctx->pc = 0x14ce74u;
    // NOP
label_14ce78:
    // 0x14ce78: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_14ce7c:
    if (ctx->pc == 0x14CE7Cu) {
        ctx->pc = 0x14CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE78u;
        // 0x14ce7c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CE80u;
        goto label_14ce80;
    }
    ctx->pc = 0x14CE78u;
    {
        const bool branch_taken_0x14ce78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CE78u;
        // 0x14ce7c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ce78) {
            ctx->pc = 0x14CEB8u;
            goto label_14ceb8;
        }
    }
    ctx->pc = 0x14CE80u;
label_14ce80:
    // 0x14ce80: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x14ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
label_14ce84:
    // 0x14ce84: 0x8c8200d8  lw          $v0, 0xD8($a0)
    ctx->pc = 0x14ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_14ce88:
    // 0x14ce88: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x14ce88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_14ce8c:
    // 0x14ce8c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_14ce90:
    if (ctx->pc == 0x14CE90u) {
        ctx->pc = 0x14CE94u;
        goto label_14ce94;
    }
    ctx->pc = 0x14CE8Cu;
    {
        const bool branch_taken_0x14ce8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ce8c) {
            ctx->pc = 0x14CEB4u;
            goto label_14ceb4;
        }
    }
    ctx->pc = 0x14CE94u;
label_14ce94:
    // 0x14ce94: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x14ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_14ce98:
    // 0x14ce98: 0x8c4402b4  lw          $a0, 0x2B4($v0)
    ctx->pc = 0x14ce98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_14ce9c:
    // 0x14ce9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14ce9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14cea0:
    // 0x14cea0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x14cea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_14cea4:
    // 0x14cea4: 0x320f809  jalr        $t9
label_14cea8:
    if (ctx->pc == 0x14CEA8u) {
        ctx->pc = 0x14CEACu;
        goto label_14ceac;
    }
    ctx->pc = 0x14CEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14CEACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CEA4u, 0x14CEACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CEACu;
label_14ceac:
    // 0x14ceac: 0x10000017  b           . + 4 + (0x17 << 2)
label_14ceb0:
    if (ctx->pc == 0x14CEB0u) {
        ctx->pc = 0x14CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CEACu;
        // 0x14ceb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CEB4u;
        goto label_14ceb4;
    }
    ctx->pc = 0x14CEACu;
    {
        const bool branch_taken_0x14ceac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CEACu;
        // 0x14ceb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ceac) {
            ctx->pc = 0x14CF0Cu;
            goto label_14cf0c;
        }
    }
    ctx->pc = 0x14CEB4u;
label_14ceb4:
    // 0x14ceb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14ceb8:
    // 0x14ceb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ceb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14cebc:
    // 0x14cebc: 0x0  nop
    ctx->pc = 0x14cebcu;
    // NOP
label_14cec0:
    // 0x14cec0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14cec0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14cec4:
    // 0x14cec4: 0x0  nop
    ctx->pc = 0x14cec4u;
    // NOP
label_14cec8:
    // 0x14cec8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_14cecc:
    if (ctx->pc == 0x14CECCu) {
        ctx->pc = 0x14CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CEC8u;
        // 0x14cecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CED0u;
        goto label_14ced0;
    }
    ctx->pc = 0x14CEC8u;
    {
        const bool branch_taken_0x14cec8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CEC8u;
        // 0x14cecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cec8) {
            ctx->pc = 0x14CF08u;
            goto label_14cf08;
        }
    }
    ctx->pc = 0x14CED0u;
label_14ced0:
    // 0x14ced0: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x14ced0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
label_14ced4:
    // 0x14ced4: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x14ced4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_14ced8:
    // 0x14ced8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x14ced8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_14cedc:
    // 0x14cedc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_14cee0:
    if (ctx->pc == 0x14CEE0u) {
        ctx->pc = 0x14CEE4u;
        goto label_14cee4;
    }
    ctx->pc = 0x14CEDCu;
    {
        const bool branch_taken_0x14cedc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cedc) {
            ctx->pc = 0x14CF04u;
            goto label_14cf04;
        }
    }
    ctx->pc = 0x14CEE4u;
label_14cee4:
    // 0x14cee4: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x14cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_14cee8:
    // 0x14cee8: 0x8c4402b8  lw          $a0, 0x2B8($v0)
    ctx->pc = 0x14cee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 696)));
label_14ceec:
    // 0x14ceec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14ceecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14cef0:
    // 0x14cef0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x14cef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_14cef4:
    // 0x14cef4: 0x320f809  jalr        $t9
label_14cef8:
    if (ctx->pc == 0x14CEF8u) {
        ctx->pc = 0x14CEFCu;
        goto label_14cefc;
    }
    ctx->pc = 0x14CEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14CEFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CEF4u, 0x14CEFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14CEFCu;
label_14cefc:
    // 0x14cefc: 0x10000002  b           . + 4 + (0x2 << 2)
label_14cf00:
    if (ctx->pc == 0x14CF00u) {
        ctx->pc = 0x14CF04u;
        goto label_14cf04;
    }
    ctx->pc = 0x14CEFCu;
    {
        const bool branch_taken_0x14cefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cefc) {
            ctx->pc = 0x14CF08u;
            goto label_14cf08;
        }
    }
    ctx->pc = 0x14CF04u;
label_14cf04:
    // 0x14cf04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14cf04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14cf08:
    // 0x14cf08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14cf08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14cf0c:
    // 0x14cf0c: 0x3e00008  jr          $ra
label_14cf10:
    if (ctx->pc == 0x14CF10u) {
        ctx->pc = 0x14CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF0Cu;
        // 0x14cf10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14CF14u;
        goto label_fallthrough_0x14cf0c;
    }
    ctx->pc = 0x14CF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF0Cu;
        // 0x14cf10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14cf0c:
    ctx->pc = 0x14CF14u;
}
