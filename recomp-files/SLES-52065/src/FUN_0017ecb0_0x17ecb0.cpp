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

// Function: FUN_0017ecb0
// Address: 0x17ecb0 - 0x17ee24
void FUN_0017ecb0_0x17ecb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017ecb0_0x17ecb0");
#endif

    switch (ctx->pc) {
        case 0x17ed20u: goto label_17ed20;
        case 0x17ed3cu: goto label_17ed3c;
        case 0x17ed4cu: goto label_17ed4c;
        case 0x17ed68u: goto label_17ed68;
        case 0x17ed78u: goto label_17ed78;
        case 0x17ed84u: goto label_17ed84;
        case 0x17ed9cu: goto label_17ed9c;
        case 0x17edbcu: goto label_17edbc;
        case 0x17edf4u: goto label_17edf4;
        default: break;
    }

    ctx->pc = 0x17ecb0u;

    // 0x17ecb0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x17ecb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecb4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x17ecb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecb8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17ecb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecbc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17ecbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecc0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17ecc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17ecc4: 0x805fb34  j           func_17ECD0
    ctx->pc = 0x17ECC4u;
    ctx->pc = 0x17ECC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ECC4u;
    // 0x17ecc8: 0x24847730  addiu       $a0, $a0, 0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ECD0u;
    goto label_17ecd0;
    ctx->pc = 0x17ECCCu;
    // 0x17eccc: 0x0  nop
    ctx->pc = 0x17ecccu;
    // NOP
label_17ecd0:
    // 0x17ecd0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17ecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17ecd4: 0x511c0  sll         $v0, $a1, 7
    ctx->pc = 0x17ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x17ecd8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x17ecd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x17ecdc: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x17ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17ece0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17ece0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x17ece4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x17ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x17ece8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17ece8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17ecec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ececu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ecf0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17ecf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17ecf4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17ecf4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecf8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17ecf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17ecfc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17ecfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17ed00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17ed04: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17ed04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ed08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17ed0c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17ed0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ed10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17ed14: 0x8c47001c  lw          $a3, 0x1C($v0)
    ctx->pc = 0x17ed14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x17ed18: 0xc05fb00  jal         func_17EC00
    ctx->pc = 0x17ED18u;
    SET_GPR_U32(ctx, 31, 0x17ED20u);
    ctx->pc = 0x17ED1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED18u;
    // 0x17ed1c: 0x2451001c  addiu       $s1, $v0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EC00u, 0x17ED18u, 0x17ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED20u;
label_17ed20:
    // 0x17ed20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17ed20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed24: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17ED24u;
    {
        const bool branch_taken_0x17ed24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED24u;
        // 0x17ed28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed24) {
            ctx->pc = 0x17ED34u;
            goto label_17ed34;
        }
    }
    ctx->pc = 0x17ED2Cu;
    // 0x17ed2c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x17ED2Cu;
    {
        const bool branch_taken_0x17ed2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED2Cu;
        // 0x17ed30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed2c) {
            ctx->pc = 0x17EDFCu;
            goto label_17edfc;
        }
    }
    ctx->pc = 0x17ED34u;
label_17ed34:
    // 0x17ed34: 0xc05fb90  jal         func_17EE40
    ctx->pc = 0x17ED34u;
    SET_GPR_U32(ctx, 31, 0x17ED3Cu);
    ctx->pc = 0x17EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EE40u, 0x17ED34u, 0x17ED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED3Cu;
label_17ed3c:
    // 0x17ed3c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x17ed3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ed40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed44: 0xc05fb94  jal         func_17EE50
    ctx->pc = 0x17ED44u;
    SET_GPR_U32(ctx, 31, 0x17ED4Cu);
    ctx->pc = 0x17ED48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED44u;
    // 0x17ed48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EE50u, 0x17ED44u, 0x17ED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED4Cu;
label_17ed4c:
    // 0x17ed4c: 0x141400  sll         $v0, $s4, 16
    ctx->pc = 0x17ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x17ed50: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x17ed50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x17ed54: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x17ed54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x17ed58: 0x26a5000c  addiu       $a1, $s5, 0xC
    ctx->pc = 0x17ed58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x17ed5c: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x17ed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x17ed60: 0xc05fcac  jal         func_17F2B0
    ctx->pc = 0x17ED60u;
    SET_GPR_U32(ctx, 31, 0x17ED68u);
    ctx->pc = 0x17ED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED60u;
    // 0x17ed64: 0x27a60088  addiu       $a2, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F2B0u, 0x17ED60u, 0x17ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED68u;
label_17ed68:
    // 0x17ed68: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x17ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x17ed6c: 0x26a4000c  addiu       $a0, $s5, 0xC
    ctx->pc = 0x17ed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x17ed70: 0xc05faf0  jal         func_17EBC0
    ctx->pc = 0x17ED70u;
    SET_GPR_U32(ctx, 31, 0x17ED78u);
    ctx->pc = 0x17ED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED70u;
    // 0x17ed74: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EBC0u, 0x17ED70u, 0x17ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED78u;
label_17ed78:
    // 0x17ed78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17ed78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed7c: 0xc05fb8c  jal         func_17EE30
    ctx->pc = 0x17ED7Cu;
    SET_GPR_U32(ctx, 31, 0x17ED84u);
    ctx->pc = 0x17ED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED7Cu;
    // 0x17ed80: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EE30u, 0x17ED7Cu, 0x17ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED84u;
label_17ed84:
    // 0x17ed84: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x17ed84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x17ed88: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x17ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17ed8c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17ED8Cu;
    {
        const bool branch_taken_0x17ed8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17ed8c) {
            ctx->pc = 0x17EDD4u;
            goto label_17edd4;
        }
    }
    ctx->pc = 0x17ED94u;
    // 0x17ed94: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17ED94u;
    {
        const bool branch_taken_0x17ed94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ed94) {
            ctx->pc = 0x17EDBCu;
            goto label_17edbc;
        }
    }
    ctx->pc = 0x17ED9Cu;
label_17ed9c:
    // 0x17ed9c: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x17ed9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17eda0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x17eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x17eda4: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EDA4u;
    {
        const bool branch_taken_0x17eda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x17eda4) {
            ctx->pc = 0x17EDB4u;
            goto label_17edb4;
        }
    }
    ctx->pc = 0x17EDACu;
    // 0x17edac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17EDACu;
    {
        const bool branch_taken_0x17edac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17edac) {
            ctx->pc = 0x17EDDCu;
            goto label_17eddc;
        }
    }
    ctx->pc = 0x17EDB4u;
label_17edb4:
    // 0x17edb4: 0xc048974  jal         func_1225D0
    ctx->pc = 0x17EDB4u;
    SET_GPR_U32(ctx, 31, 0x17EDBCu);
    ctx->pc = 0x17EDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EDB4u;
    // 0x17edb8: 0x27a4008c  addiu       $a0, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x17EDB4u, 0x17EDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EDBCu;
label_17edbc:
    // 0x17edbc: 0x0  nop
    ctx->pc = 0x17edbcu;
    // NOP
    // 0x17edc0: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x17edc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x17edc4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x17edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x17edc8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x17edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17edcc: 0x1062fff3  beq         $v1, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x17EDCCu;
    {
        const bool branch_taken_0x17edcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17edcc) {
            ctx->pc = 0x17ED9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ed9c;
        }
    }
    ctx->pc = 0x17EDD4u;
label_17edd4:
    // 0x17edd4: 0x0  nop
    ctx->pc = 0x17edd4u;
    // NOP
    // 0x17edd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17edd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17eddc:
    // 0x17eddc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EDDCu;
    {
        const bool branch_taken_0x17eddc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EDDCu;
        // 0x17ede0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eddc) {
            ctx->pc = 0x17EDECu;
            goto label_17edec;
        }
    }
    ctx->pc = 0x17EDE4u;
    // 0x17ede4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17EDE4u;
    {
        const bool branch_taken_0x17ede4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EDE4u;
        // 0x17ede8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ede4) {
            ctx->pc = 0x17EDFCu;
            goto label_17edfc;
        }
    }
    ctx->pc = 0x17EDECu;
label_17edec:
    // 0x17edec: 0xc05fb94  jal         func_17EE50
    ctx->pc = 0x17EDECu;
    SET_GPR_U32(ctx, 31, 0x17EDF4u);
    ctx->pc = 0x17EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EE50u, 0x17EDECu, 0x17EDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EDF4u;
label_17edf4:
    // 0x17edf4: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x17edf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x17edf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17edfc:
    // 0x17edfc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x17edfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17ee00: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17ee00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17ee04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17ee04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17ee08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17ee08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ee0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17ee0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ee10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17ee10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ee14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ee14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ee18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ee18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ee1c: 0x3e00008  jr          $ra
    ctx->pc = 0x17EE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE1Cu;
        // 0x17ee20: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EE24u;
}
