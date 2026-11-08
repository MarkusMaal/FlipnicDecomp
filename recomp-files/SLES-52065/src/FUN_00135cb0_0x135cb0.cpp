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

// Function: FUN_00135cb0
// Address: 0x135cb0 - 0x135d74
void FUN_00135cb0_0x135cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00135cb0_0x135cb0");
#endif

    switch (ctx->pc) {
        case 0x135cb0u: goto label_135cb0;
        case 0x135cb4u: goto label_135cb4;
        case 0x135cb8u: goto label_135cb8;
        case 0x135cbcu: goto label_135cbc;
        case 0x135cc0u: goto label_135cc0;
        case 0x135cc4u: goto label_135cc4;
        case 0x135cc8u: goto label_135cc8;
        case 0x135cccu: goto label_135ccc;
        case 0x135cd0u: goto label_135cd0;
        case 0x135cd4u: goto label_135cd4;
        case 0x135cd8u: goto label_135cd8;
        case 0x135cdcu: goto label_135cdc;
        case 0x135ce0u: goto label_135ce0;
        case 0x135ce4u: goto label_135ce4;
        case 0x135ce8u: goto label_135ce8;
        case 0x135cecu: goto label_135cec;
        case 0x135cf0u: goto label_135cf0;
        case 0x135cf4u: goto label_135cf4;
        case 0x135cf8u: goto label_135cf8;
        case 0x135cfcu: goto label_135cfc;
        case 0x135d00u: goto label_135d00;
        case 0x135d04u: goto label_135d04;
        case 0x135d08u: goto label_135d08;
        case 0x135d0cu: goto label_135d0c;
        case 0x135d10u: goto label_135d10;
        case 0x135d14u: goto label_135d14;
        case 0x135d18u: goto label_135d18;
        case 0x135d1cu: goto label_135d1c;
        case 0x135d20u: goto label_135d20;
        case 0x135d24u: goto label_135d24;
        case 0x135d28u: goto label_135d28;
        case 0x135d2cu: goto label_135d2c;
        case 0x135d30u: goto label_135d30;
        case 0x135d34u: goto label_135d34;
        case 0x135d38u: goto label_135d38;
        case 0x135d3cu: goto label_135d3c;
        case 0x135d40u: goto label_135d40;
        case 0x135d44u: goto label_135d44;
        case 0x135d48u: goto label_135d48;
        case 0x135d4cu: goto label_135d4c;
        case 0x135d50u: goto label_135d50;
        case 0x135d54u: goto label_135d54;
        case 0x135d58u: goto label_135d58;
        case 0x135d5cu: goto label_135d5c;
        case 0x135d60u: goto label_135d60;
        case 0x135d64u: goto label_135d64;
        case 0x135d68u: goto label_135d68;
        case 0x135d6cu: goto label_135d6c;
        case 0x135d70u: goto label_135d70;
        default: break;
    }

    ctx->pc = 0x135cb0u;

label_135cb0:
    // 0x135cb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x135cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_135cb4:
    // 0x135cb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x135cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_135cb8:
    // 0x135cb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x135cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_135cbc:
    // 0x135cbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_135cc0:
    // 0x135cc0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x135cc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_135cc4:
    // 0x135cc4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x135cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_135cc8:
    // 0x135cc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_135ccc:
    if (ctx->pc == 0x135CCCu) {
        ctx->pc = 0x135CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135CC8u;
        // 0x135ccc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135CD0u;
        goto label_135cd0;
    }
    ctx->pc = 0x135CC8u;
    {
        const bool branch_taken_0x135cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135CC8u;
        // 0x135ccc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135cc8) {
            ctx->pc = 0x135CE0u;
            goto label_135ce0;
        }
    }
    ctx->pc = 0x135CD0u;
label_135cd0:
    // 0x135cd0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x135cd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135cd4:
    // 0x135cd4: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x135cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_135cd8:
    // 0x135cd8: 0x320f809  jalr        $t9
label_135cdc:
    if (ctx->pc == 0x135CDCu) {
        ctx->pc = 0x135CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135CD8u;
        // 0x135cdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135CE0u;
        goto label_135ce0;
    }
    ctx->pc = 0x135CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x135CE0u);
        ctx->pc = 0x135CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135CD8u;
        // 0x135cdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135CD8u, 0x135CE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135CE0u;
label_135ce0:
    // 0x135ce0: 0xc04c554  jal         func_131550
label_135ce4:
    if (ctx->pc == 0x135CE4u) {
        ctx->pc = 0x135CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135CE0u;
        // 0x135ce4: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135CE8u;
        goto label_135ce8;
    }
    ctx->pc = 0x135CE0u;
    SET_GPR_U32(ctx, 31, 0x135CE8u);
    ctx->pc = 0x135CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135CE0u;
    // 0x135ce4: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x135CE0u, 0x135CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135CE8u;
label_135ce8:
    // 0x135ce8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135cec:
    // 0x135cec: 0xc04c550  jal         func_131540
label_135cf0:
    if (ctx->pc == 0x135CF0u) {
        ctx->pc = 0x135CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135CECu;
        // 0x135cf0: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135CF4u;
        goto label_135cf4;
    }
    ctx->pc = 0x135CECu;
    SET_GPR_U32(ctx, 31, 0x135CF4u);
    ctx->pc = 0x135CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135CECu;
    // 0x135cf0: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x135CECu, 0x135CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135CF4u;
label_135cf4:
    // 0x135cf4: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x135cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_135cf8:
    // 0x135cf8: 0xc04c554  jal         func_131550
label_135cfc:
    if (ctx->pc == 0x135CFCu) {
        ctx->pc = 0x135CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135CF8u;
        // 0x135cfc: 0x8fb00038  lw          $s0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135D00u;
        goto label_135d00;
    }
    ctx->pc = 0x135CF8u;
    SET_GPR_U32(ctx, 31, 0x135D00u);
    ctx->pc = 0x135CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135CF8u;
    // 0x135cfc: 0x8fb00038  lw          $s0, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x135CF8u, 0x135D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D00u;
label_135d00:
    // 0x135d00: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x135d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_135d04:
    // 0x135d04: 0xc04c54c  jal         func_131530
label_135d08:
    if (ctx->pc == 0x135D08u) {
        ctx->pc = 0x135D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D04u;
        // 0x135d08: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135D0Cu;
        goto label_135d0c;
    }
    ctx->pc = 0x135D04u;
    SET_GPR_U32(ctx, 31, 0x135D0Cu);
    ctx->pc = 0x135D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135D04u;
    // 0x135d08: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x135D04u, 0x135D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D0Cu;
label_135d0c:
    // 0x135d0c: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x135d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_135d10:
    // 0x135d10: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x135d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_135d14:
    // 0x135d14: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x135d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_135d18:
    // 0x135d18: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x135d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
label_135d1c:
    // 0x135d1c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x135d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135d20:
    // 0x135d20: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x135d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_135d24:
    // 0x135d24: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x135d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135d28:
    // 0x135d28: 0x1070000d  beq         $v1, $s0, . + 4 + (0xD << 2)
label_135d2c:
    if (ctx->pc == 0x135D2Cu) {
        ctx->pc = 0x135D30u;
        goto label_135d30;
    }
    ctx->pc = 0x135D28u;
    {
        const bool branch_taken_0x135d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x135d28) {
            ctx->pc = 0x135D60u;
            goto label_135d60;
        }
    }
    ctx->pc = 0x135D30u;
label_135d30:
    // 0x135d30: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x135d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135d34:
    // 0x135d34: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x135d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_135d38:
    // 0x135d38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x135d38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135d3c:
    // 0x135d3c: 0x8f3900e8  lw          $t9, 0xE8($t9)
    ctx->pc = 0x135d3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 232)));
label_135d40:
    // 0x135d40: 0x320f809  jalr        $t9
label_135d44:
    if (ctx->pc == 0x135D44u) {
        ctx->pc = 0x135D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D40u;
        // 0x135d44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135D48u;
        goto label_135d48;
    }
    ctx->pc = 0x135D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x135D48u);
        ctx->pc = 0x135D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D40u;
        // 0x135d44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135D40u, 0x135D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135D48u;
label_135d48:
    // 0x135d48: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x135d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135d4c:
    // 0x135d4c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x135d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_135d50:
    // 0x135d50: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x135d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_135d54:
    // 0x135d54: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x135d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_135d58:
    // 0x135d58: 0x1470fff5  bne         $v1, $s0, . + 4 + (-0xB << 2)
label_135d5c:
    if (ctx->pc == 0x135D5Cu) {
        ctx->pc = 0x135D60u;
        goto label_135d60;
    }
    ctx->pc = 0x135D58u;
    {
        const bool branch_taken_0x135d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x135d58) {
            ctx->pc = 0x135D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135d30;
        }
    }
    ctx->pc = 0x135D60u;
label_135d60:
    // 0x135d60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x135d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_135d64:
    // 0x135d64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_135d68:
    // 0x135d68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_135d6c:
    // 0x135d6c: 0x3e00008  jr          $ra
label_135d70:
    if (ctx->pc == 0x135D70u) {
        ctx->pc = 0x135D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D6Cu;
        // 0x135d70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135D74u;
        goto label_fallthrough_0x135d6c;
    }
    ctx->pc = 0x135D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D6Cu;
        // 0x135d70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x135d6c:
    ctx->pc = 0x135D74u;
}
