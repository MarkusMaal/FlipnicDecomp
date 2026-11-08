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

// Function: FUN_001a09f0
// Address: 0x1a09f0 - 0x1a0b14
void FUN_001a09f0_0x1a09f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a09f0_0x1a09f0");
#endif

    switch (ctx->pc) {
        case 0x1a0a28u: goto label_1a0a28;
        case 0x1a0a3cu: goto label_1a0a3c;
        case 0x1a0ae0u: goto label_1a0ae0;
        case 0x1a0af0u: goto label_1a0af0;
        default: break;
    }

    ctx->pc = 0x1a09f0u;

    // 0x1a09f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a09f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a09f4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1a09f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1a09f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a09f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a09fc: 0x24a52ab0  addiu       $a1, $a1, 0x2AB0
    ctx->pc = 0x1a09fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10928));
    // 0x1a0a00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a0a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a0a04: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1a0a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a0a08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a0a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0a0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a10: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1a0a10u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212AB0u));
    // 0x1a0a14: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a0a14u;
    { uint32_t bits = FAST_READ32(0x212AB8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0a18: 0x24040c80  addiu       $a0, $zero, 0xC80
    ctx->pc = 0x1a0a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3200));
    // 0x1a0a1c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1a0a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1a0a20: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1A0A20u;
    SET_GPR_U32(ctx, 31, 0x1A0A28u);
    ctx->pc = 0x1A0A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0A20u;
    // 0x1a0a24: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1A0A20u, 0x1A0A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A28u;
label_1a0a28:
    // 0x1a0a28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a2c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0A2Cu;
    {
        const bool branch_taken_0x1a0a2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A2Cu;
        // 0x1a0a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0a2c) {
            ctx->pc = 0x1A0A40u;
            goto label_1a0a40;
        }
    }
    ctx->pc = 0x1A0A34u;
    // 0x1a0a34: 0xc0682c8  jal         func_1A0B20
    ctx->pc = 0x1A0A34u;
    SET_GPR_U32(ctx, 31, 0x1A0A3Cu);
    ctx->pc = 0x1A0B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0B20u, 0x1A0A34u, 0x1A0A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A3Cu;
label_1a0a3c:
    // 0x1a0a3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0a40:
    // 0x1a0a40: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A0A40u;
    {
        const bool branch_taken_0x1a0a40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0a40) {
            ctx->pc = 0x1A0AF8u;
            goto label_1a0af8;
        }
    }
    ctx->pc = 0x1A0A48u;
    // 0x1a0a48: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a0a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a0a4c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a0a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a0a50: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a0a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0a54: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a0a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a0a58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a5c: 0x24a5dcc0  addiu       $a1, $a1, -0x2340
    ctx->pc = 0x1a0a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958272));
    // 0x1a0a60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a0a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a0a64: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a0a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a0a68: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a0a68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a0a6c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a0a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a0a70: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a0a70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a0a74: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a0a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a0a78: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a0a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a0a7c: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a0a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a0a80: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a0a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a0a84: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a0a84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a0a88: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a0a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a0a8c: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a0a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a0a90: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a0a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a0a94: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a0a94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a0a98: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a0a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a0a9c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a0a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a0aa0: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a0aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a0aa4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a0aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a0aa8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a0aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a0aac: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a0aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a0ab0: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a0ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a0ab4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a0ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a0ab8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a0ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a0abc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a0abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0ac0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a0ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0ac4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a0ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a0ac8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a0ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a0acc: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a0accu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a0ad0: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a0ad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a0ad4: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a0ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a0ad8: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A0AD8u;
    SET_GPR_U32(ctx, 31, 0x1A0AE0u);
    ctx->pc = 0x1A0ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0AD8u;
    // 0x1a0adc: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A0AD8u, 0x1A0AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0AE0u;
label_1a0ae0:
    // 0x1a0ae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ae4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a0ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ae8: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A0AE8u;
    SET_GPR_U32(ctx, 31, 0x1A0AF0u);
    ctx->pc = 0x1A0AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0AE8u;
    // 0x1a0aec: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A0AE8u, 0x1A0AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0AF0u;
label_1a0af0:
    // 0x1a0af0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0AF0u;
    {
        const bool branch_taken_0x1a0af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AF0u;
        // 0x1a0af4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0af0) {
            ctx->pc = 0x1A0B00u;
            goto label_1a0b00;
        }
    }
    ctx->pc = 0x1A0AF8u;
label_1a0af8:
    // 0x1a0af8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a0af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0afc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a0afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0b00:
    // 0x1a0b00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a0b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0b04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a0b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0b08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B0Cu;
        // 0x1a0b10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0B14u;
}
