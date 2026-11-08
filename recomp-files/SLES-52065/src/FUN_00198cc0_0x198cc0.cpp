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

// Function: FUN_00198cc0
// Address: 0x198cc0 - 0x198de8
void FUN_00198cc0_0x198cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00198cc0_0x198cc0");
#endif

    switch (ctx->pc) {
        case 0x198cf8u: goto label_198cf8;
        case 0x198d08u: goto label_198d08;
        case 0x198db4u: goto label_198db4;
        case 0x198dc4u: goto label_198dc4;
        default: break;
    }

    ctx->pc = 0x198cc0u;

    // 0x198cc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x198cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x198cc4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x198cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x198cc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x198cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x198ccc: 0x24a529b0  addiu       $a1, $a1, 0x29B0
    ctx->pc = 0x198cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10672));
    // 0x198cd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x198cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x198cd4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x198cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x198cd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x198cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x198cdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x198cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ce0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x198ce0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x2129B0u));
    // 0x198ce4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x198ce4u;
    { uint32_t bits = FAST_READ32(0x2129B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198ce8: 0x240406c0  addiu       $a0, $zero, 0x6C0
    ctx->pc = 0x198ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1728));
    // 0x198cec: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x198cecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x198cf0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x198CF0u;
    SET_GPR_U32(ctx, 31, 0x198CF8u);
    ctx->pc = 0x198CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198CF0u;
    // 0x198cf4: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x198CF0u, 0x198CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198CF8u;
label_198cf8:
    // 0x198cf8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198CF8u;
    {
        const bool branch_taken_0x198cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CF8u;
        // 0x198cfc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198cf8) {
            ctx->pc = 0x198D14u;
            goto label_198d14;
        }
    }
    ctx->pc = 0x198D00u;
    // 0x198d00: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x198D00u;
    SET_GPR_U32(ctx, 31, 0x198D08u);
    ctx->pc = 0x198D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198D00u;
    // 0x198d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x198D00u, 0x198D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198D08u;
label_198d08:
    // 0x198d08: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x198d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x198d0c: 0x2442b2b0  addiu       $v0, $v0, -0x4D50
    ctx->pc = 0x198d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947504));
    // 0x198d10: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x198d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_198d14:
    // 0x198d14: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x198D14u;
    {
        const bool branch_taken_0x198d14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x198d14) {
            ctx->pc = 0x198DCCu;
            goto label_198dcc;
        }
    }
    ctx->pc = 0x198D1Cu;
    // 0x198d1c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x198d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x198d20: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x198d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x198d24: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x198d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198d28: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x198d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x198d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d30: 0x24a5d860  addiu       $a1, $a1, -0x27A0
    ctx->pc = 0x198d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957152));
    // 0x198d34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x198d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x198d38: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x198d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x198d3c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x198d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x198d40: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x198d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x198d44: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x198d44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x198d48: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x198d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x198d4c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x198d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x198d50: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x198d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x198d54: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x198d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x198d58: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x198d58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x198d5c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x198d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x198d60: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x198d60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x198d64: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x198d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x198d68: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x198d68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x198d6c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x198d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x198d70: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x198d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x198d74: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x198d74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x198d78: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x198d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x198d7c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x198d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x198d80: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x198d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x198d84: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x198d84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x198d88: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x198d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x198d8c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x198d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x198d90: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x198d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198d94: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x198d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198d98: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x198d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x198d9c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x198d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x198da0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x198da0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x198da4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x198da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x198da8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x198da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x198dac: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x198DACu;
    SET_GPR_U32(ctx, 31, 0x198DB4u);
    ctx->pc = 0x198DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198DACu;
    // 0x198db0: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x198DACu, 0x198DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198DB4u;
label_198db4:
    // 0x198db4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x198db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198db8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x198db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198dbc: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x198DBCu;
    SET_GPR_U32(ctx, 31, 0x198DC4u);
    ctx->pc = 0x198DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198DBCu;
    // 0x198dc0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x198DBCu, 0x198DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198DC4u;
label_198dc4:
    // 0x198dc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x198DC4u;
    {
        const bool branch_taken_0x198dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198DC4u;
        // 0x198dc8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198dc4) {
            ctx->pc = 0x198DD4u;
            goto label_198dd4;
        }
    }
    ctx->pc = 0x198DCCu;
label_198dcc:
    // 0x198dcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x198dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198dd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x198dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198dd4:
    // 0x198dd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x198dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198dd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x198dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198ddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x198ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198de0: 0x3e00008  jr          $ra
    ctx->pc = 0x198DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198DE0u;
        // 0x198de4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198DE8u;
}
