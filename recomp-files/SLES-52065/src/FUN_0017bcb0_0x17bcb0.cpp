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

// Function: FUN_0017bcb0
// Address: 0x17bcb0 - 0x17bd48
void FUN_0017bcb0_0x17bcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017bcb0_0x17bcb0");
#endif

    switch (ctx->pc) {
        case 0x17bcb0u: goto label_17bcb0;
        case 0x17bcb4u: goto label_17bcb4;
        case 0x17bcb8u: goto label_17bcb8;
        case 0x17bcbcu: goto label_17bcbc;
        case 0x17bcc0u: goto label_17bcc0;
        case 0x17bcc4u: goto label_17bcc4;
        case 0x17bcc8u: goto label_17bcc8;
        case 0x17bcccu: goto label_17bccc;
        case 0x17bcd0u: goto label_17bcd0;
        case 0x17bcd4u: goto label_17bcd4;
        case 0x17bcd8u: goto label_17bcd8;
        case 0x17bcdcu: goto label_17bcdc;
        case 0x17bce0u: goto label_17bce0;
        case 0x17bce4u: goto label_17bce4;
        case 0x17bce8u: goto label_17bce8;
        case 0x17bcecu: goto label_17bcec;
        case 0x17bcf0u: goto label_17bcf0;
        case 0x17bcf4u: goto label_17bcf4;
        case 0x17bcf8u: goto label_17bcf8;
        case 0x17bcfcu: goto label_17bcfc;
        case 0x17bd00u: goto label_17bd00;
        case 0x17bd04u: goto label_17bd04;
        case 0x17bd08u: goto label_17bd08;
        case 0x17bd0cu: goto label_17bd0c;
        case 0x17bd10u: goto label_17bd10;
        case 0x17bd14u: goto label_17bd14;
        case 0x17bd18u: goto label_17bd18;
        case 0x17bd1cu: goto label_17bd1c;
        case 0x17bd20u: goto label_17bd20;
        case 0x17bd24u: goto label_17bd24;
        case 0x17bd28u: goto label_17bd28;
        case 0x17bd2cu: goto label_17bd2c;
        case 0x17bd30u: goto label_17bd30;
        case 0x17bd34u: goto label_17bd34;
        case 0x17bd38u: goto label_17bd38;
        case 0x17bd3cu: goto label_17bd3c;
        case 0x17bd40u: goto label_17bd40;
        case 0x17bd44u: goto label_17bd44;
        default: break;
    }

    ctx->pc = 0x17bcb0u;

label_17bcb0:
    // 0x17bcb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17bcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17bcb4:
    // 0x17bcb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17bcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17bcb8:
    // 0x17bcb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17bcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17bcbc:
    // 0x17bcbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17bcbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17bcc0:
    // 0x17bcc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17bcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17bcc4:
    // 0x17bcc4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17bcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17bcc8:
    // 0x17bcc8: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x17bcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_17bccc:
    // 0x17bccc: 0xc48c01c0  lwc1        $f12, 0x1C0($a0)
    ctx->pc = 0x17bcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_17bcd0:
    // 0x17bcd0: 0xc62d0200  lwc1        $f13, 0x200($s1)
    ctx->pc = 0x17bcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_17bcd4:
    // 0x17bcd4: 0xc054e78  jal         func_1539E0
label_17bcd8:
    if (ctx->pc == 0x17BCD8u) {
        ctx->pc = 0x17BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCD4u;
        // 0x17bcd8: 0x24850300  addiu       $a1, $a0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BCDCu;
        goto label_17bcdc;
    }
    ctx->pc = 0x17BCD4u;
    SET_GPR_U32(ctx, 31, 0x17BCDCu);
    ctx->pc = 0x17BCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BCD4u;
    // 0x17bcd8: 0x24850300  addiu       $a1, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539E0u, 0x17BCD4u, 0x17BCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BCDCu;
label_17bcdc:
    // 0x17bcdc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17bcdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17bce0:
    // 0x17bce0: 0x0  nop
    ctx->pc = 0x17bce0u;
    // NOP
label_17bce4:
    // 0x17bce4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17bce4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17bce8:
    // 0x17bce8: 0x0  nop
    ctx->pc = 0x17bce8u;
    // NOP
label_17bcec:
    // 0x17bcec: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_17bcf0:
    if (ctx->pc == 0x17BCF0u) {
        ctx->pc = 0x17BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCECu;
        // 0x17bcf0: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BCF4u;
        goto label_17bcf4;
    }
    ctx->pc = 0x17BCECu;
    {
        const bool branch_taken_0x17bcec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCECu;
        // 0x17bcf0: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bcec) {
            ctx->pc = 0x17BD30u;
            goto label_17bd30;
        }
    }
    ctx->pc = 0x17BCF4u;
label_17bcf4:
    // 0x17bcf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17bcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17bcf8:
    // 0x17bcf8: 0xc042118  jal         func_108460
label_17bcfc:
    if (ctx->pc == 0x17BCFCu) {
        ctx->pc = 0x17BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCF8u;
        // 0x17bcfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BD00u;
        goto label_17bd00;
    }
    ctx->pc = 0x17BCF8u;
    SET_GPR_U32(ctx, 31, 0x17BD00u);
    ctx->pc = 0x17BCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BCF8u;
    // 0x17bcfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x17BCF8u, 0x17BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD00u;
label_17bd00:
    // 0x17bd00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17bd04:
    // 0x17bd04: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x17bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_17bd08:
    // 0x17bd08: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17bd08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17bd0c:
    // 0x17bd0c: 0x8045002b  lb          $a1, 0x2B($v0)
    ctx->pc = 0x17bd0cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 43)));
label_17bd10:
    // 0x17bd10: 0xc0425a4  jal         func_109690
label_17bd14:
    if (ctx->pc == 0x17BD14u) {
        ctx->pc = 0x17BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD10u;
        // 0x17bd14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BD18u;
        goto label_17bd18;
    }
    ctx->pc = 0x17BD10u;
    SET_GPR_U32(ctx, 31, 0x17BD18u);
    ctx->pc = 0x17BD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BD10u;
    // 0x17bd14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17BD10u, 0x17BD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD18u;
label_17bd18:
    // 0x17bd18: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x17bd18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_17bd1c:
    // 0x17bd1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17bd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17bd20:
    // 0x17bd20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17bd20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17bd24:
    // 0x17bd24: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x17bd24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_17bd28:
    // 0x17bd28: 0x320f809  jalr        $t9
label_17bd2c:
    if (ctx->pc == 0x17BD2Cu) {
        ctx->pc = 0x17BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD28u;
        // 0x17bd2c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BD30u;
        goto label_17bd30;
    }
    ctx->pc = 0x17BD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17BD30u);
        ctx->pc = 0x17BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD28u;
        // 0x17bd2c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BD28u, 0x17BD30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17BD30u;
label_17bd30:
    // 0x17bd30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17bd30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17bd34:
    // 0x17bd34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17bd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17bd38:
    // 0x17bd38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17bd38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17bd3c:
    // 0x17bd3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17bd3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17bd40:
    // 0x17bd40: 0x3e00008  jr          $ra
label_17bd44:
    if (ctx->pc == 0x17BD44u) {
        ctx->pc = 0x17BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD40u;
        // 0x17bd44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BD48u;
        goto label_fallthrough_0x17bd40;
    }
    ctx->pc = 0x17BD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD40u;
        // 0x17bd44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17bd40:
    ctx->pc = 0x17BD48u;
}
