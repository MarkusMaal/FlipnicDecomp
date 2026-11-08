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

// Function: FUN_00136e90
// Address: 0x136e90 - 0x136f14
void FUN_00136e90_0x136e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00136e90_0x136e90");
#endif

    switch (ctx->pc) {
        case 0x136e90u: goto label_136e90;
        case 0x136e94u: goto label_136e94;
        case 0x136e98u: goto label_136e98;
        case 0x136e9cu: goto label_136e9c;
        case 0x136ea0u: goto label_136ea0;
        case 0x136ea4u: goto label_136ea4;
        case 0x136ea8u: goto label_136ea8;
        case 0x136eacu: goto label_136eac;
        case 0x136eb0u: goto label_136eb0;
        case 0x136eb4u: goto label_136eb4;
        case 0x136eb8u: goto label_136eb8;
        case 0x136ebcu: goto label_136ebc;
        case 0x136ec0u: goto label_136ec0;
        case 0x136ec4u: goto label_136ec4;
        case 0x136ec8u: goto label_136ec8;
        case 0x136eccu: goto label_136ecc;
        case 0x136ed0u: goto label_136ed0;
        case 0x136ed4u: goto label_136ed4;
        case 0x136ed8u: goto label_136ed8;
        case 0x136edcu: goto label_136edc;
        case 0x136ee0u: goto label_136ee0;
        case 0x136ee4u: goto label_136ee4;
        case 0x136ee8u: goto label_136ee8;
        case 0x136eecu: goto label_136eec;
        case 0x136ef0u: goto label_136ef0;
        case 0x136ef4u: goto label_136ef4;
        case 0x136ef8u: goto label_136ef8;
        case 0x136efcu: goto label_136efc;
        case 0x136f00u: goto label_136f00;
        case 0x136f04u: goto label_136f04;
        case 0x136f08u: goto label_136f08;
        case 0x136f0cu: goto label_136f0c;
        case 0x136f10u: goto label_136f10;
        default: break;
    }

    ctx->pc = 0x136e90u;

label_136e90:
    // 0x136e90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x136e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_136e94:
    // 0x136e94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x136e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_136e98:
    // 0x136e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x136e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_136e9c:
    // 0x136e9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x136e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_136ea0:
    // 0x136ea0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_136ea4:
    // 0x136ea4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x136ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_136ea8:
    // 0x136ea8: 0xc04dbcc  jal         func_136F30
label_136eac:
    if (ctx->pc == 0x136EACu) {
        ctx->pc = 0x136EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EA8u;
        // 0x136eac: 0x24846640  addiu       $a0, $a0, 0x6640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136EB0u;
        goto label_136eb0;
    }
    ctx->pc = 0x136EA8u;
    SET_GPR_U32(ctx, 31, 0x136EB0u);
    ctx->pc = 0x136EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EA8u;
    // 0x136eac: 0x24846640  addiu       $a0, $a0, 0x6640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F30u, 0x136EA8u, 0x136EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136EB0u;
label_136eb0:
    // 0x136eb0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x136eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_136eb4:
    // 0x136eb4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x136eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_136eb8:
    // 0x136eb8: 0xc04dbc8  jal         func_136F20
label_136ebc:
    if (ctx->pc == 0x136EBCu) {
        ctx->pc = 0x136EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EB8u;
        // 0x136ebc: 0x24846640  addiu       $a0, $a0, 0x6640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136EC0u;
        goto label_136ec0;
    }
    ctx->pc = 0x136EB8u;
    SET_GPR_U32(ctx, 31, 0x136EC0u);
    ctx->pc = 0x136EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EB8u;
    // 0x136ebc: 0x24846640  addiu       $a0, $a0, 0x6640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F20u, 0x136EB8u, 0x136EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136EC0u;
label_136ec0:
    // 0x136ec0: 0xafb0003c  sw          $s0, 0x3C($sp)
    ctx->pc = 0x136ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
label_136ec4:
    // 0x136ec4: 0x10000008  b           . + 4 + (0x8 << 2)
label_136ec8:
    if (ctx->pc == 0x136EC8u) {
        ctx->pc = 0x136EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EC4u;
        // 0x136ec8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136ECCu;
        goto label_136ecc;
    }
    ctx->pc = 0x136EC4u;
    {
        const bool branch_taken_0x136ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EC4u;
        // 0x136ec8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ec4) {
            ctx->pc = 0x136EE8u;
            goto label_136ee8;
        }
    }
    ctx->pc = 0x136ECCu;
label_136ecc:
    // 0x136ecc: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x136eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_136ed0:
    // 0x136ed0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x136ed0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_136ed4:
    // 0x136ed4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x136ed4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_136ed8:
    // 0x136ed8: 0x320f809  jalr        $t9
label_136edc:
    if (ctx->pc == 0x136EDCu) {
        ctx->pc = 0x136EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136ED8u;
        // 0x136edc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136EE0u;
        goto label_136ee0;
    }
    ctx->pc = 0x136ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x136EE0u);
        ctx->pc = 0x136EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136ED8u;
        // 0x136edc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136ED8u, 0x136EE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136EE0u;
label_136ee0:
    // 0x136ee0: 0xc048974  jal         func_1225D0
label_136ee4:
    if (ctx->pc == 0x136EE4u) {
        ctx->pc = 0x136EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EE0u;
        // 0x136ee4: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136EE8u;
        goto label_136ee8;
    }
    ctx->pc = 0x136EE0u;
    SET_GPR_U32(ctx, 31, 0x136EE8u);
    ctx->pc = 0x136EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EE0u;
    // 0x136ee4: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x136EE0u, 0x136EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136EE8u;
label_136ee8:
    // 0x136ee8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x136ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_136eec:
    // 0x136eec: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
label_136ef0:
    if (ctx->pc == 0x136EF0u) {
        ctx->pc = 0x136EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EECu;
        // 0x136ef0: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136EF4u;
        goto label_136ef4;
    }
    ctx->pc = 0x136EECu;
    {
        const bool branch_taken_0x136eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x136EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EECu;
        // 0x136ef0: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136eec) {
            ctx->pc = 0x136ECCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136ecc;
        }
    }
    ctx->pc = 0x136EF4u;
label_136ef4:
    // 0x136ef4: 0xc04eb4c  jal         func_13AD30
label_136ef8:
    if (ctx->pc == 0x136EF8u) {
        ctx->pc = 0x136EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EF4u;
        // 0x136ef8: 0x24846640  addiu       $a0, $a0, 0x6640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136EFCu;
        goto label_136efc;
    }
    ctx->pc = 0x136EF4u;
    SET_GPR_U32(ctx, 31, 0x136EFCu);
    ctx->pc = 0x136EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EF4u;
    // 0x136ef8: 0x24846640  addiu       $a0, $a0, 0x6640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AD30u, 0x136EF4u, 0x136EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136EFCu;
label_136efc:
    // 0x136efc: 0xaf808590  sw          $zero, -0x7A70($gp)
    ctx->pc = 0x136efcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 0));
label_136f00:
    // 0x136f00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x136f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_136f04:
    // 0x136f04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136f04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_136f08:
    // 0x136f08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_136f0c:
    // 0x136f0c: 0x3e00008  jr          $ra
label_136f10:
    if (ctx->pc == 0x136F10u) {
        ctx->pc = 0x136F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F0Cu;
        // 0x136f10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136F14u;
        goto label_fallthrough_0x136f0c;
    }
    ctx->pc = 0x136F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F0Cu;
        // 0x136f10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x136f0c:
    ctx->pc = 0x136F14u;
}
