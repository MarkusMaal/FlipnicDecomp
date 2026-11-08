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

// Function: FUN_001cee80
// Address: 0x1cee80 - 0x1cef00
void FUN_001cee80_0x1cee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cee80_0x1cee80");
#endif

    switch (ctx->pc) {
        case 0x1cee80u: goto label_1cee80;
        case 0x1cee84u: goto label_1cee84;
        case 0x1cee88u: goto label_1cee88;
        case 0x1cee8cu: goto label_1cee8c;
        case 0x1cee90u: goto label_1cee90;
        case 0x1cee94u: goto label_1cee94;
        case 0x1cee98u: goto label_1cee98;
        case 0x1cee9cu: goto label_1cee9c;
        case 0x1ceea0u: goto label_1ceea0;
        case 0x1ceea4u: goto label_1ceea4;
        case 0x1ceea8u: goto label_1ceea8;
        case 0x1ceeacu: goto label_1ceeac;
        case 0x1ceeb0u: goto label_1ceeb0;
        case 0x1ceeb4u: goto label_1ceeb4;
        case 0x1ceeb8u: goto label_1ceeb8;
        case 0x1ceebcu: goto label_1ceebc;
        case 0x1ceec0u: goto label_1ceec0;
        case 0x1ceec4u: goto label_1ceec4;
        case 0x1ceec8u: goto label_1ceec8;
        case 0x1ceeccu: goto label_1ceecc;
        case 0x1ceed0u: goto label_1ceed0;
        case 0x1ceed4u: goto label_1ceed4;
        case 0x1ceed8u: goto label_1ceed8;
        case 0x1ceedcu: goto label_1ceedc;
        case 0x1ceee0u: goto label_1ceee0;
        case 0x1ceee4u: goto label_1ceee4;
        case 0x1ceee8u: goto label_1ceee8;
        case 0x1ceeecu: goto label_1ceeec;
        case 0x1ceef0u: goto label_1ceef0;
        case 0x1ceef4u: goto label_1ceef4;
        case 0x1ceef8u: goto label_1ceef8;
        case 0x1ceefcu: goto label_1ceefc;
        default: break;
    }

    ctx->pc = 0x1cee80u;

label_1cee80:
    // 0x1cee80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cee80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cee84:
    // 0x1cee84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cee84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1cee88:
    // 0x1cee88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cee88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cee8c:
    // 0x1cee8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cee8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cee90:
    // 0x1cee90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cee90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cee94:
    // 0x1cee94: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_1cee98:
    if (ctx->pc == 0x1CEE98u) {
        ctx->pc = 0x1CEE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE94u;
        // 0x1cee98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEE9Cu;
        goto label_1cee9c;
    }
    ctx->pc = 0x1CEE94u;
    {
        const bool branch_taken_0x1cee94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE94u;
        // 0x1cee98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee94) {
            ctx->pc = 0x1CEEE8u;
            goto label_1ceee8;
        }
    }
    ctx->pc = 0x1CEE9Cu;
label_1cee9c:
    // 0x1cee9c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1cee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_1ceea0:
    // 0x1ceea0: 0x2442bec0  addiu       $v0, $v0, -0x4140
    ctx->pc = 0x1ceea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950592));
label_1ceea4:
    // 0x1ceea4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ceea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1ceea8:
    // 0x1ceea8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x1ceea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1ceeac:
    // 0x1ceeac: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1ceeb0:
    if (ctx->pc == 0x1CEEB0u) {
        ctx->pc = 0x1CEEB4u;
        goto label_1ceeb4;
    }
    ctx->pc = 0x1CEEACu;
    {
        const bool branch_taken_0x1ceeac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ceeac) {
            ctx->pc = 0x1CEEC4u;
            goto label_1ceec4;
        }
    }
    ctx->pc = 0x1CEEB4u;
label_1ceeb4:
    // 0x1ceeb4: 0x8c990094  lw          $t9, 0x94($a0)
    ctx->pc = 0x1ceeb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_1ceeb8:
    // 0x1ceeb8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ceeb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ceebc:
    // 0x1ceebc: 0x320f809  jalr        $t9
label_1ceec0:
    if (ctx->pc == 0x1CEEC0u) {
        ctx->pc = 0x1CEEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEEBCu;
        // 0x1ceec0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEEC4u;
        goto label_1ceec4;
    }
    ctx->pc = 0x1CEEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CEEC4u);
        ctx->pc = 0x1CEEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEEBCu;
        // 0x1ceec0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEEBCu, 0x1CEEC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CEEC4u;
label_1ceec4:
    // 0x1ceec4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ceec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ceec8:
    // 0x1ceec8: 0xc06dc54  jal         func_1B7150
label_1ceecc:
    if (ctx->pc == 0x1CEECCu) {
        ctx->pc = 0x1CEECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEEC8u;
        // 0x1ceecc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEED0u;
        goto label_1ceed0;
    }
    ctx->pc = 0x1CEEC8u;
    SET_GPR_U32(ctx, 31, 0x1CEED0u);
    ctx->pc = 0x1CEECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEEC8u;
    // 0x1ceecc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1CEEC8u, 0x1CEED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEED0u;
label_1ceed0:
    // 0x1ceed0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1ceed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1ceed4:
    // 0x1ceed4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ceed4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1ceed8:
    // 0x1ceed8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1ceedc:
    if (ctx->pc == 0x1CEEDCu) {
        ctx->pc = 0x1CEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEED8u;
        // 0x1ceedc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEEE0u;
        goto label_1ceee0;
    }
    ctx->pc = 0x1CEED8u;
    {
        const bool branch_taken_0x1ceed8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEED8u;
        // 0x1ceedc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceed8) {
            ctx->pc = 0x1CEEECu;
            goto label_1ceeec;
        }
    }
    ctx->pc = 0x1CEEE0u;
label_1ceee0:
    // 0x1ceee0: 0xc0401a4  jal         func_100690
label_1ceee4:
    if (ctx->pc == 0x1CEEE4u) {
        ctx->pc = 0x1CEEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEEE0u;
        // 0x1ceee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEEE8u;
        goto label_1ceee8;
    }
    ctx->pc = 0x1CEEE0u;
    SET_GPR_U32(ctx, 31, 0x1CEEE8u);
    ctx->pc = 0x1CEEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEEE0u;
    // 0x1ceee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1CEEE0u, 0x1CEEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEEE8u;
label_1ceee8:
    // 0x1ceee8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ceee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ceeec:
    // 0x1ceeec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ceeecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ceef0:
    // 0x1ceef0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ceef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ceef4:
    // 0x1ceef4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ceef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ceef8:
    // 0x1ceef8: 0x3e00008  jr          $ra
label_1ceefc:
    if (ctx->pc == 0x1CEEFCu) {
        ctx->pc = 0x1CEEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEEF8u;
        // 0x1ceefc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CEF00u;
        goto label_fallthrough_0x1ceef8;
    }
    ctx->pc = 0x1CEEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEEF8u;
        // 0x1ceefc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ceef8:
    ctx->pc = 0x1CEF00u;
}
