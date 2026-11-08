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

// Function: FUN_001a4a00
// Address: 0x1a4a00 - 0x1a4b58
void FUN_001a4a00_0x1a4a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4a00_0x1a4a00");
#endif

    switch (ctx->pc) {
        case 0x1a4a38u: goto label_1a4a38;
        case 0x1a4a4cu: goto label_1a4a4c;
        case 0x1a4a64u: goto label_1a4a64;
        case 0x1a4a74u: goto label_1a4a74;
        case 0x1a4b24u: goto label_1a4b24;
        case 0x1a4b34u: goto label_1a4b34;
        default: break;
    }

    ctx->pc = 0x1a4a00u;

    // 0x1a4a00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a4a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a4a04: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1a4a04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1a4a08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a4a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a4a0c: 0x24a52b48  addiu       $a1, $a1, 0x2B48
    ctx->pc = 0x1a4a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11080));
    // 0x1a4a10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a4a14: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1a4a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a4a18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a4a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a4a1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a4a1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a20: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1a4a20u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212B48u));
    // 0x1a4a24: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a4a24u;
    { uint32_t bits = FAST_READ32(0x212B50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4a28: 0x240409c0  addiu       $a0, $zero, 0x9C0
    ctx->pc = 0x1a4a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2496));
    // 0x1a4a2c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1a4a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1a4a30: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1A4A30u;
    SET_GPR_U32(ctx, 31, 0x1A4A38u);
    ctx->pc = 0x1A4A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4A30u;
    // 0x1a4a34: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1A4A30u, 0x1A4A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4A38u;
label_1a4a38:
    // 0x1a4a38: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A4A38u;
    {
        const bool branch_taken_0x1a4a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A38u;
        // 0x1a4a3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4a38) {
            ctx->pc = 0x1A4A84u;
            goto label_1a4a84;
        }
    }
    ctx->pc = 0x1A4A40u;
    // 0x1a4a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4a44: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x1A4A44u;
    SET_GPR_U32(ctx, 31, 0x1A4A4Cu);
    ctx->pc = 0x1A4A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4A44u;
    // 0x1a4a48: 0xafb0003c  sw          $s0, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x1A4A44u, 0x1A4A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4A4Cu;
label_1a4a4c:
    // 0x1a4a4c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a4a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1a4a50: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1a4a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1a4a54: 0x2463b3e0  addiu       $v1, $v1, -0x4C20
    ctx->pc = 0x1a4a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947808));
    // 0x1a4a58: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x1a4a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1a4a5c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1A4A5Cu;
    SET_GPR_U32(ctx, 31, 0x1A4A64u);
    ctx->pc = 0x1A4A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4A5Cu;
    // 0x1a4a60: 0xac43031c  sw          $v1, 0x31C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 796), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1A4A5Cu, 0x1A4A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4A64u;
label_1a4a64:
    // 0x1a4a64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4A64u;
    {
        const bool branch_taken_0x1a4a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A64u;
        // 0x1a4a68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4a64) {
            ctx->pc = 0x1A4A74u;
            goto label_1a4a74;
        }
    }
    ctx->pc = 0x1A4A6Cu;
    // 0x1a4a6c: 0xc04ac84  jal         func_12B210
    ctx->pc = 0x1A4A6Cu;
    SET_GPR_U32(ctx, 31, 0x1A4A74u);
    ctx->pc = 0x12B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B210u, 0x1A4A6Cu, 0x1A4A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4A74u;
label_1a4a74:
    // 0x1a4a74: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a4a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1a4a78: 0xac620690  sw          $v0, 0x690($v1)
    ctx->pc = 0x1a4a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1680), GPR_U32(ctx, 2));
    // 0x1a4a7c: 0x8fb0003c  lw          $s0, 0x3C($sp)
    ctx->pc = 0x1a4a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1a4a80: 0x0  nop
    ctx->pc = 0x1a4a80u;
    // NOP
label_1a4a84:
    // 0x1a4a84: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A4A84u;
    {
        const bool branch_taken_0x1a4a84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4a84) {
            ctx->pc = 0x1A4B3Cu;
            goto label_1a4b3c;
        }
    }
    ctx->pc = 0x1A4A8Cu;
    // 0x1a4a8c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a4a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a4a90: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a4a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a4a94: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a4a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a4a98: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a4a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4aa0: 0x24a5dec0  addiu       $a1, $a1, -0x2140
    ctx->pc = 0x1a4aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958784));
    // 0x1a4aa4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a4aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a4aa8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a4aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a4aac: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a4aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a4ab0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a4ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a4ab4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a4ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a4ab8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a4ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a4abc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a4abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a4ac0: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a4ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a4ac4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a4ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a4ac8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a4ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a4acc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a4accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a4ad0: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a4ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a4ad4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a4ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a4ad8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a4ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a4adc: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a4adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a4ae0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a4ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a4ae4: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a4ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a4ae8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a4ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a4aec: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a4aecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a4af0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a4af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a4af4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a4af4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a4af8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a4af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a4afc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a4afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a4b00: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a4b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4b04: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a4b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4b08: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a4b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a4b0c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a4b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a4b10: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a4b10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a4b14: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a4b14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a4b18: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a4b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a4b1c: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A4B1Cu;
    SET_GPR_U32(ctx, 31, 0x1A4B24u);
    ctx->pc = 0x1A4B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4B1Cu;
    // 0x1a4b20: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A4B1Cu, 0x1A4B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4B24u;
label_1a4b24:
    // 0x1a4b24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4b28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a4b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4b2c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A4B2Cu;
    SET_GPR_U32(ctx, 31, 0x1A4B34u);
    ctx->pc = 0x1A4B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4B2Cu;
    // 0x1a4b30: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A4B2Cu, 0x1A4B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4B34u;
label_1a4b34:
    // 0x1a4b34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4B34u;
    {
        const bool branch_taken_0x1a4b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B34u;
        // 0x1a4b38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b34) {
            ctx->pc = 0x1A4B44u;
            goto label_1a4b44;
        }
    }
    ctx->pc = 0x1A4B3Cu;
label_1a4b3c:
    // 0x1a4b3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a4b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4b40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a4b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4b44:
    // 0x1a4b44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a4b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4b48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4b48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4b50: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B50u;
        // 0x1a4b54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B58u;
}
