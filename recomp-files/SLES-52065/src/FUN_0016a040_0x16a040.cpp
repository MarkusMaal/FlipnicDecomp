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

// Function: FUN_0016a040
// Address: 0x16a040 - 0x16a0e8
void FUN_0016a040_0x16a040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016a040_0x16a040");
#endif

    switch (ctx->pc) {
        case 0x16a040u: goto label_16a040;
        case 0x16a044u: goto label_16a044;
        case 0x16a048u: goto label_16a048;
        case 0x16a04cu: goto label_16a04c;
        case 0x16a050u: goto label_16a050;
        case 0x16a054u: goto label_16a054;
        case 0x16a058u: goto label_16a058;
        case 0x16a05cu: goto label_16a05c;
        case 0x16a060u: goto label_16a060;
        case 0x16a064u: goto label_16a064;
        case 0x16a068u: goto label_16a068;
        case 0x16a06cu: goto label_16a06c;
        case 0x16a070u: goto label_16a070;
        case 0x16a074u: goto label_16a074;
        case 0x16a078u: goto label_16a078;
        case 0x16a07cu: goto label_16a07c;
        case 0x16a080u: goto label_16a080;
        case 0x16a084u: goto label_16a084;
        case 0x16a088u: goto label_16a088;
        case 0x16a08cu: goto label_16a08c;
        case 0x16a090u: goto label_16a090;
        case 0x16a094u: goto label_16a094;
        case 0x16a098u: goto label_16a098;
        case 0x16a09cu: goto label_16a09c;
        case 0x16a0a0u: goto label_16a0a0;
        case 0x16a0a4u: goto label_16a0a4;
        case 0x16a0a8u: goto label_16a0a8;
        case 0x16a0acu: goto label_16a0ac;
        case 0x16a0b0u: goto label_16a0b0;
        case 0x16a0b4u: goto label_16a0b4;
        case 0x16a0b8u: goto label_16a0b8;
        case 0x16a0bcu: goto label_16a0bc;
        case 0x16a0c0u: goto label_16a0c0;
        case 0x16a0c4u: goto label_16a0c4;
        case 0x16a0c8u: goto label_16a0c8;
        case 0x16a0ccu: goto label_16a0cc;
        case 0x16a0d0u: goto label_16a0d0;
        case 0x16a0d4u: goto label_16a0d4;
        case 0x16a0d8u: goto label_16a0d8;
        case 0x16a0dcu: goto label_16a0dc;
        case 0x16a0e0u: goto label_16a0e0;
        case 0x16a0e4u: goto label_16a0e4;
        default: break;
    }

    ctx->pc = 0x16a040u;

label_16a040:
    // 0x16a040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16a044:
    // 0x16a044: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16a048:
    // 0x16a048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16a048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16a04c:
    // 0x16a04c: 0x14a0001c  bnez        $a1, . + 4 + (0x1C << 2)
label_16a050:
    if (ctx->pc == 0x16A050u) {
        ctx->pc = 0x16A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A04Cu;
        // 0x16a050: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A054u;
        goto label_16a054;
    }
    ctx->pc = 0x16A04Cu;
    {
        const bool branch_taken_0x16a04c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A04Cu;
        // 0x16a050: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a04c) {
            ctx->pc = 0x16A0C0u;
            goto label_16a0c0;
        }
    }
    ctx->pc = 0x16A054u;
label_16a054:
    // 0x16a054: 0x8e040228  lw          $a0, 0x228($s0)
    ctx->pc = 0x16a054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_16a058:
    // 0x16a058: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_16a05c:
    if (ctx->pc == 0x16A05Cu) {
        ctx->pc = 0x16A060u;
        goto label_16a060;
    }
    ctx->pc = 0x16A058u;
    {
        const bool branch_taken_0x16a058 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a058) {
            ctx->pc = 0x16A07Cu;
            goto label_16a07c;
        }
    }
    ctx->pc = 0x16A060u;
label_16a060:
    // 0x16a060: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x16a060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16a064:
    // 0x16a064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a068:
    // 0x16a068: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16a068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16a06c:
    // 0x16a06c: 0x320f809  jalr        $t9
label_16a070:
    if (ctx->pc == 0x16A070u) {
        ctx->pc = 0x16A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A06Cu;
        // 0x16a070: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A074u;
        goto label_16a074;
    }
    ctx->pc = 0x16A06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16A074u);
        ctx->pc = 0x16A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A06Cu;
        // 0x16a070: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A06Cu, 0x16A074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A074u;
label_16a074:
    // 0x16a074: 0x10000019  b           . + 4 + (0x19 << 2)
label_16a078:
    if (ctx->pc == 0x16A078u) {
        ctx->pc = 0x16A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A074u;
        // 0x16a078: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A07Cu;
        goto label_16a07c;
    }
    ctx->pc = 0x16A074u;
    {
        const bool branch_taken_0x16a074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A074u;
        // 0x16a078: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a074) {
            ctx->pc = 0x16A0DCu;
            goto label_16a0dc;
        }
    }
    ctx->pc = 0x16A07Cu;
label_16a07c:
    // 0x16a07c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16a07cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16a080:
    // 0x16a080: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16a080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16a084:
    // 0x16a084: 0x320f809  jalr        $t9
label_16a088:
    if (ctx->pc == 0x16A088u) {
        ctx->pc = 0x16A08Cu;
        goto label_16a08c;
    }
    ctx->pc = 0x16A084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16A08Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A084u, 0x16A08Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A08Cu;
label_16a08c:
    // 0x16a08c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a090:
    // 0x16a090: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
label_16a094:
    if (ctx->pc == 0x16A094u) {
        ctx->pc = 0x16A098u;
        goto label_16a098;
    }
    ctx->pc = 0x16A090u;
    {
        const bool branch_taken_0x16a090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16a090) {
            ctx->pc = 0x16A0D8u;
            goto label_16a0d8;
        }
    }
    ctx->pc = 0x16A098u;
label_16a098:
    // 0x16a098: 0xc04be08  jal         func_12F820
label_16a09c:
    if (ctx->pc == 0x16A09Cu) {
        ctx->pc = 0x16A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A098u;
        // 0x16a09c: 0x8e040228  lw          $a0, 0x228($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A0A0u;
        goto label_16a0a0;
    }
    ctx->pc = 0x16A098u;
    SET_GPR_U32(ctx, 31, 0x16A0A0u);
    ctx->pc = 0x16A09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A098u;
    // 0x16a09c: 0x8e040228  lw          $a0, 0x228($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x16A098u, 0x16A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A0A0u;
label_16a0a0:
    // 0x16a0a0: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x16a0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
label_16a0a4:
    // 0x16a0a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a0a8:
    // 0x16a0a8: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x16a0a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16a0ac:
    // 0x16a0ac: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16a0acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16a0b0:
    // 0x16a0b0: 0x320f809  jalr        $t9
label_16a0b4:
    if (ctx->pc == 0x16A0B4u) {
        ctx->pc = 0x16A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0B0u;
        // 0x16a0b4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A0B8u;
        goto label_16a0b8;
    }
    ctx->pc = 0x16A0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16A0B8u);
        ctx->pc = 0x16A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0B0u;
        // 0x16a0b4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A0B0u, 0x16A0B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A0B8u;
label_16a0b8:
    // 0x16a0b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_16a0bc:
    if (ctx->pc == 0x16A0BCu) {
        ctx->pc = 0x16A0C0u;
        goto label_16a0c0;
    }
    ctx->pc = 0x16A0B8u;
    {
        const bool branch_taken_0x16a0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a0b8) {
            ctx->pc = 0x16A0D8u;
            goto label_16a0d8;
        }
    }
    ctx->pc = 0x16A0C0u;
label_16a0c0:
    // 0x16a0c0: 0x8e040228  lw          $a0, 0x228($s0)
    ctx->pc = 0x16a0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_16a0c4:
    // 0x16a0c4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_16a0c8:
    if (ctx->pc == 0x16A0C8u) {
        ctx->pc = 0x16A0CCu;
        goto label_16a0cc;
    }
    ctx->pc = 0x16A0C4u;
    {
        const bool branch_taken_0x16a0c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a0c4) {
            ctx->pc = 0x16A0D8u;
            goto label_16a0d8;
        }
    }
    ctx->pc = 0x16A0CCu;
label_16a0cc:
    // 0x16a0cc: 0xc04be08  jal         func_12F820
label_16a0d0:
    if (ctx->pc == 0x16A0D0u) {
        ctx->pc = 0x16A0D4u;
        goto label_16a0d4;
    }
    ctx->pc = 0x16A0CCu;
    SET_GPR_U32(ctx, 31, 0x16A0D4u);
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x16A0CCu, 0x16A0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A0D4u;
label_16a0d4:
    // 0x16a0d4: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x16a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
label_16a0d8:
    // 0x16a0d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16a0dc:
    // 0x16a0dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a0dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16a0e0:
    // 0x16a0e0: 0x3e00008  jr          $ra
label_16a0e4:
    if (ctx->pc == 0x16A0E4u) {
        ctx->pc = 0x16A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0E0u;
        // 0x16a0e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A0E8u;
        goto label_fallthrough_0x16a0e0;
    }
    ctx->pc = 0x16A0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0E0u;
        // 0x16a0e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16a0e0:
    ctx->pc = 0x16A0E8u;
}
