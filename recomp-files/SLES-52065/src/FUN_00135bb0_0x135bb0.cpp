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

// Function: FUN_00135bb0
// Address: 0x135bb0 - 0x135c6c
void FUN_00135bb0_0x135bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00135bb0_0x135bb0");
#endif

    switch (ctx->pc) {
        case 0x135bb0u: goto label_135bb0;
        case 0x135bb4u: goto label_135bb4;
        case 0x135bb8u: goto label_135bb8;
        case 0x135bbcu: goto label_135bbc;
        case 0x135bc0u: goto label_135bc0;
        case 0x135bc4u: goto label_135bc4;
        case 0x135bc8u: goto label_135bc8;
        case 0x135bccu: goto label_135bcc;
        case 0x135bd0u: goto label_135bd0;
        case 0x135bd4u: goto label_135bd4;
        case 0x135bd8u: goto label_135bd8;
        case 0x135bdcu: goto label_135bdc;
        case 0x135be0u: goto label_135be0;
        case 0x135be4u: goto label_135be4;
        case 0x135be8u: goto label_135be8;
        case 0x135becu: goto label_135bec;
        case 0x135bf0u: goto label_135bf0;
        case 0x135bf4u: goto label_135bf4;
        case 0x135bf8u: goto label_135bf8;
        case 0x135bfcu: goto label_135bfc;
        case 0x135c00u: goto label_135c00;
        case 0x135c04u: goto label_135c04;
        case 0x135c08u: goto label_135c08;
        case 0x135c0cu: goto label_135c0c;
        case 0x135c10u: goto label_135c10;
        case 0x135c14u: goto label_135c14;
        case 0x135c18u: goto label_135c18;
        case 0x135c1cu: goto label_135c1c;
        case 0x135c20u: goto label_135c20;
        case 0x135c24u: goto label_135c24;
        case 0x135c28u: goto label_135c28;
        case 0x135c2cu: goto label_135c2c;
        case 0x135c30u: goto label_135c30;
        case 0x135c34u: goto label_135c34;
        case 0x135c38u: goto label_135c38;
        case 0x135c3cu: goto label_135c3c;
        case 0x135c40u: goto label_135c40;
        case 0x135c44u: goto label_135c44;
        case 0x135c48u: goto label_135c48;
        case 0x135c4cu: goto label_135c4c;
        case 0x135c50u: goto label_135c50;
        case 0x135c54u: goto label_135c54;
        case 0x135c58u: goto label_135c58;
        case 0x135c5cu: goto label_135c5c;
        case 0x135c60u: goto label_135c60;
        case 0x135c64u: goto label_135c64;
        case 0x135c68u: goto label_135c68;
        default: break;
    }

    ctx->pc = 0x135bb0u;

label_135bb0:
    // 0x135bb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x135bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_135bb4:
    // 0x135bb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x135bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_135bb8:
    // 0x135bb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x135bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_135bbc:
    // 0x135bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_135bc0:
    // 0x135bc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x135bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_135bc4:
    // 0x135bc4: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x135bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_135bc8:
    // 0x135bc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_135bcc:
    if (ctx->pc == 0x135BCCu) {
        ctx->pc = 0x135BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135BC8u;
        // 0x135bcc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135BD0u;
        goto label_135bd0;
    }
    ctx->pc = 0x135BC8u;
    {
        const bool branch_taken_0x135bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x135BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135BC8u;
        // 0x135bcc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135bc8) {
            ctx->pc = 0x135BD8u;
            goto label_135bd8;
        }
    }
    ctx->pc = 0x135BD0u;
label_135bd0:
    // 0x135bd0: 0xc04e88c  jal         func_13A230
label_135bd4:
    if (ctx->pc == 0x135BD4u) {
        ctx->pc = 0x135BD8u;
        goto label_135bd8;
    }
    ctx->pc = 0x135BD0u;
    SET_GPR_U32(ctx, 31, 0x135BD8u);
    ctx->pc = 0x13A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A230u, 0x135BD0u, 0x135BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135BD8u;
label_135bd8:
    // 0x135bd8: 0xc04c554  jal         func_131550
label_135bdc:
    if (ctx->pc == 0x135BDCu) {
        ctx->pc = 0x135BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135BD8u;
        // 0x135bdc: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135BE0u;
        goto label_135be0;
    }
    ctx->pc = 0x135BD8u;
    SET_GPR_U32(ctx, 31, 0x135BE0u);
    ctx->pc = 0x135BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135BD8u;
    // 0x135bdc: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x135BD8u, 0x135BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135BE0u;
label_135be0:
    // 0x135be0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135be4:
    // 0x135be4: 0xc04c550  jal         func_131540
label_135be8:
    if (ctx->pc == 0x135BE8u) {
        ctx->pc = 0x135BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135BE4u;
        // 0x135be8: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135BECu;
        goto label_135bec;
    }
    ctx->pc = 0x135BE4u;
    SET_GPR_U32(ctx, 31, 0x135BECu);
    ctx->pc = 0x135BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135BE4u;
    // 0x135be8: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x135BE4u, 0x135BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135BECu;
label_135bec:
    // 0x135bec: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x135becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_135bf0:
    // 0x135bf0: 0xc04c554  jal         func_131550
label_135bf4:
    if (ctx->pc == 0x135BF4u) {
        ctx->pc = 0x135BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135BF0u;
        // 0x135bf4: 0x8fb00038  lw          $s0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135BF8u;
        goto label_135bf8;
    }
    ctx->pc = 0x135BF0u;
    SET_GPR_U32(ctx, 31, 0x135BF8u);
    ctx->pc = 0x135BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135BF0u;
    // 0x135bf4: 0x8fb00038  lw          $s0, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x135BF0u, 0x135BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135BF8u;
label_135bf8:
    // 0x135bf8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x135bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_135bfc:
    // 0x135bfc: 0xc04c54c  jal         func_131530
label_135c00:
    if (ctx->pc == 0x135C00u) {
        ctx->pc = 0x135C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135BFCu;
        // 0x135c00: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135C04u;
        goto label_135c04;
    }
    ctx->pc = 0x135BFCu;
    SET_GPR_U32(ctx, 31, 0x135C04u);
    ctx->pc = 0x135C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135BFCu;
    // 0x135c00: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x135BFCu, 0x135C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135C04u;
label_135c04:
    // 0x135c04: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x135c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_135c08:
    // 0x135c08: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x135c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_135c0c:
    // 0x135c0c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x135c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_135c10:
    // 0x135c10: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x135c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
label_135c14:
    // 0x135c14: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x135c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135c18:
    // 0x135c18: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x135c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_135c1c:
    // 0x135c1c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x135c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135c20:
    // 0x135c20: 0x1070000d  beq         $v1, $s0, . + 4 + (0xD << 2)
label_135c24:
    if (ctx->pc == 0x135C24u) {
        ctx->pc = 0x135C28u;
        goto label_135c28;
    }
    ctx->pc = 0x135C20u;
    {
        const bool branch_taken_0x135c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x135c20) {
            ctx->pc = 0x135C58u;
            goto label_135c58;
        }
    }
    ctx->pc = 0x135C28u;
label_135c28:
    // 0x135c28: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x135c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135c2c:
    // 0x135c2c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x135c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_135c30:
    // 0x135c30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x135c30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135c34:
    // 0x135c34: 0x8f3900cc  lw          $t9, 0xCC($t9)
    ctx->pc = 0x135c34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 204)));
label_135c38:
    // 0x135c38: 0x320f809  jalr        $t9
label_135c3c:
    if (ctx->pc == 0x135C3Cu) {
        ctx->pc = 0x135C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C38u;
        // 0x135c3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135C40u;
        goto label_135c40;
    }
    ctx->pc = 0x135C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x135C40u);
        ctx->pc = 0x135C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C38u;
        // 0x135c3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135C38u, 0x135C40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135C40u;
label_135c40:
    // 0x135c40: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x135c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135c44:
    // 0x135c44: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x135c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_135c48:
    // 0x135c48: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x135c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_135c4c:
    // 0x135c4c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x135c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135c50:
    // 0x135c50: 0x1470fff5  bne         $v1, $s0, . + 4 + (-0xB << 2)
label_135c54:
    if (ctx->pc == 0x135C54u) {
        ctx->pc = 0x135C58u;
        goto label_135c58;
    }
    ctx->pc = 0x135C50u;
    {
        const bool branch_taken_0x135c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x135c50) {
            ctx->pc = 0x135C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135c28;
        }
    }
    ctx->pc = 0x135C58u;
label_135c58:
    // 0x135c58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x135c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_135c5c:
    // 0x135c5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_135c60:
    // 0x135c60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_135c64:
    // 0x135c64: 0x3e00008  jr          $ra
label_135c68:
    if (ctx->pc == 0x135C68u) {
        ctx->pc = 0x135C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C64u;
        // 0x135c68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135C6Cu;
        goto label_fallthrough_0x135c64;
    }
    ctx->pc = 0x135C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C64u;
        // 0x135c68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x135c64:
    ctx->pc = 0x135C6Cu;
}
