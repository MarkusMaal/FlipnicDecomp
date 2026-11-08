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

// Function: entry_0010be68
// Address: 0x10be68 - 0x10bf0c
void entry_0010be68_0x10be68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010be68_0x10be68");
#endif

    switch (ctx->pc) {
        case 0x10bea0u: goto label_10bea0;
        case 0x10bec8u: goto label_10bec8;
        case 0x10beecu: goto label_10beec;
        case 0x10bf00u: goto label_10bf00;
        default: break;
    }

    ctx->pc = 0x10be68u;

label_10be68:
    // 0x10be68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10be68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10be6c:
    // 0x10be6c: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x10be6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_10be70:
    // 0x10be70: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
label_10be74:
    if (ctx->pc == 0x10BE74u) {
        ctx->pc = 0x10BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE70u;
        // 0x10be74: 0x26520410  addiu       $s2, $s2, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BE78u;
        goto label_10be78;
    }
    ctx->pc = 0x10BE70u;
    {
        const bool branch_taken_0x10be70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE70u;
        // 0x10be74: 0x26520410  addiu       $s2, $s2, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be70) {
            ctx->pc = 0x10BDB4u;
            return;
        }
    }
    ctx->pc = 0x10BE78u;
label_10be78:
    // 0x10be78: 0x8e8343e0  lw          $v1, 0x43E0($s4)
    ctx->pc = 0x10be78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17376)));
label_10be7c:
    // 0x10be7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10be80:
    // 0x10be80: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
label_10be84:
    if (ctx->pc == 0x10BE84u) {
        ctx->pc = 0x10BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE80u;
        // 0x10be84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BE88u;
        goto label_10be88;
    }
    ctx->pc = 0x10BE80u;
    {
        const bool branch_taken_0x10be80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE80u;
        // 0x10be84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be80) {
            ctx->pc = 0x10BF44u;
            return;
        }
    }
    ctx->pc = 0x10BE88u;
label_10be88:
    // 0x10be88: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x10be88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_10be8c:
    // 0x10be8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10be8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10be90:
    // 0x10be90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10be90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10be94:
    // 0x10be94: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x10be94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_10be98:
    // 0x10be98: 0x320f809  jalr        $t9
label_10be9c:
    if (ctx->pc == 0x10BE9Cu) {
        ctx->pc = 0x10BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE98u;
        // 0x10be9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BEA0u;
        goto label_10bea0;
    }
    ctx->pc = 0x10BE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10BEA0u);
        ctx->pc = 0x10BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE98u;
        // 0x10be9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BE98u, 0x10BEA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10BEA0u;
label_10bea0:
    // 0x10bea0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x10bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_10bea4:
    // 0x10bea4: 0x8e8343e4  lw          $v1, 0x43E4($s4)
    ctx->pc = 0x10bea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17380)));
label_10bea8:
    // 0x10bea8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x10bea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_10beac:
    // 0x10beac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10beacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10beb0:
    // 0x10beb0: 0xc66c01c0  lwc1        $f12, 0x1C0($s3)
    ctx->pc = 0x10beb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_10beb4:
    // 0x10beb4: 0x26650300  addiu       $a1, $s3, 0x300
    ctx->pc = 0x10beb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
label_10beb8:
    // 0x10beb8: 0x8e8243d0  lw          $v0, 0x43D0($s4)
    ctx->pc = 0x10beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17360)));
label_10bebc:
    // 0x10bebc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10bec0:
    // 0x10bec0: 0xc054e18  jal         func_153860
label_10bec4:
    if (ctx->pc == 0x10BEC4u) {
        ctx->pc = 0x10BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BEC0u;
        // 0x10bec4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BEC8u;
        goto label_10bec8;
    }
    ctx->pc = 0x10BEC0u;
    SET_GPR_U32(ctx, 31, 0x10BEC8u);
    ctx->pc = 0x10BEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BEC0u;
    // 0x10bec4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153860u, 0x10BEC0u, 0x10BEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BEC8u;
label_10bec8:
    // 0x10bec8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x10bec8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_10becc:
    // 0x10becc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10beccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10bed0:
    // 0x10bed0: 0x0  nop
    ctx->pc = 0x10bed0u;
    // NOP
label_10bed4:
    // 0x10bed4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x10bed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10bed8:
    // 0x10bed8: 0x0  nop
    ctx->pc = 0x10bed8u;
    // NOP
label_10bedc:
    // 0x10bedc: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_10bee0:
    if (ctx->pc == 0x10BEE0u) {
        ctx->pc = 0x10BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BEDCu;
        // 0x10bee0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BEE4u;
        goto label_10bee4;
    }
    ctx->pc = 0x10BEDCu;
    {
        const bool branch_taken_0x10bedc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BEDCu;
        // 0x10bee0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bedc) {
            ctx->pc = 0x10BF0Cu;
            return;
        }
    }
    ctx->pc = 0x10BEE4u;
label_10bee4:
    // 0x10bee4: 0xc055c40  jal         func_157100
label_10bee8:
    if (ctx->pc == 0x10BEE8u) {
        ctx->pc = 0x10BEECu;
        goto label_10beec;
    }
    ctx->pc = 0x10BEE4u;
    SET_GPR_U32(ctx, 31, 0x10BEECu);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x10BEE4u, 0x10BEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BEECu;
label_10beec:
    // 0x10beec: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x10beecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_10bef0:
    // 0x10bef0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10bef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10bef4:
    // 0x10bef4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10bef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10bef8:
    // 0x10bef8: 0x320f809  jalr        $t9
label_10befc:
    if (ctx->pc == 0x10BEFCu) {
        ctx->pc = 0x10BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BEF8u;
        // 0x10befc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BF00u;
        goto label_10bf00;
    }
    ctx->pc = 0x10BEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10BF00u);
        ctx->pc = 0x10BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BEF8u;
        // 0x10befc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BEF8u, 0x10BF00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10BF00u;
label_10bf00:
    // 0x10bf00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10bf04:
    // 0x10bf04: 0xae8243e0  sw          $v0, 0x43E0($s4)
    ctx->pc = 0x10bf04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 17376), GPR_U32(ctx, 2));
label_10bf08:
    // 0x10bf08: 0xae93231c  sw          $s3, 0x231C($s4)
    ctx->pc = 0x10bf08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8988), GPR_U32(ctx, 19));
    ctx->pc = 0x10bf0cu;
}
