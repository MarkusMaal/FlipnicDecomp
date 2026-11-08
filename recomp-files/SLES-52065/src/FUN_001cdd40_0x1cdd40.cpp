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

// Function: FUN_001cdd40
// Address: 0x1cdd40 - 0x1cddc0
void FUN_001cdd40_0x1cdd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cdd40_0x1cdd40");
#endif

    switch (ctx->pc) {
        case 0x1cdd40u: goto label_1cdd40;
        case 0x1cdd44u: goto label_1cdd44;
        case 0x1cdd48u: goto label_1cdd48;
        case 0x1cdd4cu: goto label_1cdd4c;
        case 0x1cdd50u: goto label_1cdd50;
        case 0x1cdd54u: goto label_1cdd54;
        case 0x1cdd58u: goto label_1cdd58;
        case 0x1cdd5cu: goto label_1cdd5c;
        case 0x1cdd60u: goto label_1cdd60;
        case 0x1cdd64u: goto label_1cdd64;
        case 0x1cdd68u: goto label_1cdd68;
        case 0x1cdd6cu: goto label_1cdd6c;
        case 0x1cdd70u: goto label_1cdd70;
        case 0x1cdd74u: goto label_1cdd74;
        case 0x1cdd78u: goto label_1cdd78;
        case 0x1cdd7cu: goto label_1cdd7c;
        case 0x1cdd80u: goto label_1cdd80;
        case 0x1cdd84u: goto label_1cdd84;
        case 0x1cdd88u: goto label_1cdd88;
        case 0x1cdd8cu: goto label_1cdd8c;
        case 0x1cdd90u: goto label_1cdd90;
        case 0x1cdd94u: goto label_1cdd94;
        case 0x1cdd98u: goto label_1cdd98;
        case 0x1cdd9cu: goto label_1cdd9c;
        case 0x1cdda0u: goto label_1cdda0;
        case 0x1cdda4u: goto label_1cdda4;
        case 0x1cdda8u: goto label_1cdda8;
        case 0x1cddacu: goto label_1cddac;
        case 0x1cddb0u: goto label_1cddb0;
        case 0x1cddb4u: goto label_1cddb4;
        case 0x1cddb8u: goto label_1cddb8;
        case 0x1cddbcu: goto label_1cddbc;
        default: break;
    }

    ctx->pc = 0x1cdd40u;

label_1cdd40:
    // 0x1cdd40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cdd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cdd44:
    // 0x1cdd44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cdd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1cdd48:
    // 0x1cdd48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cdd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cdd4c:
    // 0x1cdd4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cdd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cdd50:
    // 0x1cdd50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cdd50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cdd54:
    // 0x1cdd54: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_1cdd58:
    if (ctx->pc == 0x1CDD58u) {
        ctx->pc = 0x1CDD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD54u;
        // 0x1cdd58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDD5Cu;
        goto label_1cdd5c;
    }
    ctx->pc = 0x1CDD54u;
    {
        const bool branch_taken_0x1cdd54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD54u;
        // 0x1cdd58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd54) {
            ctx->pc = 0x1CDDA8u;
            goto label_1cdda8;
        }
    }
    ctx->pc = 0x1CDD5Cu;
label_1cdd5c:
    // 0x1cdd5c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1cdd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_1cdd60:
    // 0x1cdd60: 0x2442be30  addiu       $v0, $v0, -0x41D0
    ctx->pc = 0x1cdd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950448));
label_1cdd64:
    // 0x1cdd64: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1cdd64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1cdd68:
    // 0x1cdd68: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x1cdd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1cdd6c:
    // 0x1cdd6c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1cdd70:
    if (ctx->pc == 0x1CDD70u) {
        ctx->pc = 0x1CDD74u;
        goto label_1cdd74;
    }
    ctx->pc = 0x1CDD6Cu;
    {
        const bool branch_taken_0x1cdd6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdd6c) {
            ctx->pc = 0x1CDD84u;
            goto label_1cdd84;
        }
    }
    ctx->pc = 0x1CDD74u;
label_1cdd74:
    // 0x1cdd74: 0x8c990094  lw          $t9, 0x94($a0)
    ctx->pc = 0x1cdd74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_1cdd78:
    // 0x1cdd78: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1cdd78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1cdd7c:
    // 0x1cdd7c: 0x320f809  jalr        $t9
label_1cdd80:
    if (ctx->pc == 0x1CDD80u) {
        ctx->pc = 0x1CDD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD7Cu;
        // 0x1cdd80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDD84u;
        goto label_1cdd84;
    }
    ctx->pc = 0x1CDD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CDD84u);
        ctx->pc = 0x1CDD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD7Cu;
        // 0x1cdd80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD7Cu, 0x1CDD84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CDD84u;
label_1cdd84:
    // 0x1cdd84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cdd88:
    // 0x1cdd88: 0xc06dc54  jal         func_1B7150
label_1cdd8c:
    if (ctx->pc == 0x1CDD8Cu) {
        ctx->pc = 0x1CDD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD88u;
        // 0x1cdd8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDD90u;
        goto label_1cdd90;
    }
    ctx->pc = 0x1CDD88u;
    SET_GPR_U32(ctx, 31, 0x1CDD90u);
    ctx->pc = 0x1CDD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD88u;
    // 0x1cdd8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1CDD88u, 0x1CDD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD90u;
label_1cdd90:
    // 0x1cdd90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1cdd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1cdd94:
    // 0x1cdd94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1cdd94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1cdd98:
    // 0x1cdd98: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1cdd9c:
    if (ctx->pc == 0x1CDD9Cu) {
        ctx->pc = 0x1CDD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD98u;
        // 0x1cdd9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDDA0u;
        goto label_1cdda0;
    }
    ctx->pc = 0x1CDD98u;
    {
        const bool branch_taken_0x1cdd98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CDD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD98u;
        // 0x1cdd9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd98) {
            ctx->pc = 0x1CDDACu;
            goto label_1cddac;
        }
    }
    ctx->pc = 0x1CDDA0u;
label_1cdda0:
    // 0x1cdda0: 0xc0401a4  jal         func_100690
label_1cdda4:
    if (ctx->pc == 0x1CDDA4u) {
        ctx->pc = 0x1CDDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDA0u;
        // 0x1cdda4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDDA8u;
        goto label_1cdda8;
    }
    ctx->pc = 0x1CDDA0u;
    SET_GPR_U32(ctx, 31, 0x1CDDA8u);
    ctx->pc = 0x1CDDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDDA0u;
    // 0x1cdda4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1CDDA0u, 0x1CDDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDDA8u;
label_1cdda8:
    // 0x1cdda8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1cdda8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cddac:
    // 0x1cddac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cddacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cddb0:
    // 0x1cddb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cddb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cddb4:
    // 0x1cddb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cddb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cddb8:
    // 0x1cddb8: 0x3e00008  jr          $ra
label_1cddbc:
    if (ctx->pc == 0x1CDDBCu) {
        ctx->pc = 0x1CDDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDB8u;
        // 0x1cddbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDDC0u;
        goto label_fallthrough_0x1cddb8;
    }
    ctx->pc = 0x1CDDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDB8u;
        // 0x1cddbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cddb8:
    ctx->pc = 0x1CDDC0u;
}
