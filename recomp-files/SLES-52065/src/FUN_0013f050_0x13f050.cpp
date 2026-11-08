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

// Function: FUN_0013f050
// Address: 0x13f050 - 0x13f0b0
void FUN_0013f050_0x13f050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013f050_0x13f050");
#endif

    switch (ctx->pc) {
        case 0x13f050u: goto label_13f050;
        case 0x13f054u: goto label_13f054;
        case 0x13f058u: goto label_13f058;
        case 0x13f05cu: goto label_13f05c;
        case 0x13f060u: goto label_13f060;
        case 0x13f064u: goto label_13f064;
        case 0x13f068u: goto label_13f068;
        case 0x13f06cu: goto label_13f06c;
        case 0x13f070u: goto label_13f070;
        case 0x13f074u: goto label_13f074;
        case 0x13f078u: goto label_13f078;
        case 0x13f07cu: goto label_13f07c;
        case 0x13f080u: goto label_13f080;
        case 0x13f084u: goto label_13f084;
        case 0x13f088u: goto label_13f088;
        case 0x13f08cu: goto label_13f08c;
        case 0x13f090u: goto label_13f090;
        case 0x13f094u: goto label_13f094;
        case 0x13f098u: goto label_13f098;
        case 0x13f09cu: goto label_13f09c;
        case 0x13f0a0u: goto label_13f0a0;
        case 0x13f0a4u: goto label_13f0a4;
        case 0x13f0a8u: goto label_13f0a8;
        case 0x13f0acu: goto label_13f0ac;
        default: break;
    }

    ctx->pc = 0x13f050u;

label_13f050:
    // 0x13f050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13f054:
    // 0x13f054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13f058:
    // 0x13f058: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13f058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13f05c:
    // 0x13f05c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13f060:
    // 0x13f060: 0x9083018a  lbu         $v1, 0x18A($a0)
    ctx->pc = 0x13f060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 394)));
label_13f064:
    // 0x13f064: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_13f068:
    if (ctx->pc == 0x13F068u) {
        ctx->pc = 0x13F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F064u;
        // 0x13f068: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F06Cu;
        goto label_13f06c;
    }
    ctx->pc = 0x13F064u;
    {
        const bool branch_taken_0x13f064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F064u;
        // 0x13f068: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f064) {
            ctx->pc = 0x13F098u;
            goto label_13f098;
        }
    }
    ctx->pc = 0x13F06Cu;
label_13f06c:
    // 0x13f06c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13f06cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13f070:
    // 0x13f070: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x13f070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_13f074:
    // 0x13f074: 0x320f809  jalr        $t9
label_13f078:
    if (ctx->pc == 0x13F078u) {
        ctx->pc = 0x13F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F074u;
        // 0x13f078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F07Cu;
        goto label_13f07c;
    }
    ctx->pc = 0x13F074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13F07Cu);
        ctx->pc = 0x13F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F074u;
        // 0x13f078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F074u, 0x13F07Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F07Cu;
label_13f07c:
    // 0x13f07c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x13f07cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13f080:
    // 0x13f080: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13f080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f084:
    // 0x13f084: 0x8f390110  lw          $t9, 0x110($t9)
    ctx->pc = 0x13f084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 272)));
label_13f088:
    // 0x13f088: 0x320f809  jalr        $t9
label_13f08c:
    if (ctx->pc == 0x13F08Cu) {
        ctx->pc = 0x13F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F088u;
        // 0x13f08c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F090u;
        goto label_13f090;
    }
    ctx->pc = 0x13F088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13F090u);
        ctx->pc = 0x13F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F088u;
        // 0x13f08c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F088u, 0x13F090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13F090u;
label_13f090:
    // 0x13f090: 0x10000004  b           . + 4 + (0x4 << 2)
label_13f094:
    if (ctx->pc == 0x13F094u) {
        ctx->pc = 0x13F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F090u;
        // 0x13f094: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F098u;
        goto label_13f098;
    }
    ctx->pc = 0x13F090u;
    {
        const bool branch_taken_0x13f090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F090u;
        // 0x13f094: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f090) {
            ctx->pc = 0x13F0A4u;
            goto label_13f0a4;
        }
    }
    ctx->pc = 0x13F098u;
label_13f098:
    // 0x13f098: 0xc050ce4  jal         func_143390
label_13f09c:
    if (ctx->pc == 0x13F09Cu) {
        ctx->pc = 0x13F09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F098u;
        // 0x13f09c: 0x248400b0  addiu       $a0, $a0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F0A0u;
        goto label_13f0a0;
    }
    ctx->pc = 0x13F098u;
    SET_GPR_U32(ctx, 31, 0x13F0A0u);
    ctx->pc = 0x13F09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F098u;
    // 0x13f09c: 0x248400b0  addiu       $a0, $a0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143390u, 0x13F098u, 0x13F0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F0A0u;
label_13f0a0:
    // 0x13f0a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13f0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13f0a4:
    // 0x13f0a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13f0a8:
    // 0x13f0a8: 0x3e00008  jr          $ra
label_13f0ac:
    if (ctx->pc == 0x13F0ACu) {
        ctx->pc = 0x13F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0A8u;
        // 0x13f0ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13F0B0u;
        goto label_fallthrough_0x13f0a8;
    }
    ctx->pc = 0x13F0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0A8u;
        // 0x13f0ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13f0a8:
    ctx->pc = 0x13F0B0u;
}
