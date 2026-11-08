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

// Function: FUN_001a2a60
// Address: 0x1a2a60 - 0x1a2b88
void FUN_001a2a60_0x1a2a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a2a60_0x1a2a60");
#endif

    switch (ctx->pc) {
        case 0x1a2a98u: goto label_1a2a98;
        case 0x1a2aa8u: goto label_1a2aa8;
        case 0x1a2b54u: goto label_1a2b54;
        case 0x1a2b64u: goto label_1a2b64;
        default: break;
    }

    ctx->pc = 0x1a2a60u;

    // 0x1a2a60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a2a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a2a64: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1a2a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1a2a68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a2a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a2a6c: 0x24a52b18  addiu       $a1, $a1, 0x2B18
    ctx->pc = 0x1a2a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11032));
    // 0x1a2a70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a2a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a2a74: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1a2a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a2a78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a2a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2a7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a2a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2a80: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1a2a80u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212B18u));
    // 0x1a2a84: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a2a84u;
    { uint32_t bits = FAST_READ32(0x212B20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2a88: 0x24040670  addiu       $a0, $zero, 0x670
    ctx->pc = 0x1a2a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
    // 0x1a2a8c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1a2a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1a2a90: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1A2A90u;
    SET_GPR_U32(ctx, 31, 0x1A2A98u);
    ctx->pc = 0x1A2A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2A90u;
    // 0x1a2a94: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1A2A90u, 0x1A2A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2A98u;
label_1a2a98:
    // 0x1a2a98: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2A98u;
    {
        const bool branch_taken_0x1a2a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A98u;
        // 0x1a2a9c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2a98) {
            ctx->pc = 0x1A2AB4u;
            goto label_1a2ab4;
        }
    }
    ctx->pc = 0x1A2AA0u;
    // 0x1a2aa0: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x1A2AA0u;
    SET_GPR_U32(ctx, 31, 0x1A2AA8u);
    ctx->pc = 0x1A2AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2AA0u;
    // 0x1a2aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x1A2AA0u, 0x1A2AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2AA8u;
label_1a2aa8:
    // 0x1a2aa8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a2aac: 0x2442b390  addiu       $v0, $v0, -0x4C70
    ctx->pc = 0x1a2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947728));
    // 0x1a2ab0: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x1a2ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_1a2ab4:
    // 0x1a2ab4: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A2AB4u;
    {
        const bool branch_taken_0x1a2ab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ab4) {
            ctx->pc = 0x1A2B6Cu;
            goto label_1a2b6c;
        }
    }
    ctx->pc = 0x1A2ABCu;
    // 0x1a2abc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a2abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a2ac0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a2ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a2ac4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a2ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2ac8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a2ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a2acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2ad0: 0x24a5de00  addiu       $a1, $a1, -0x2200
    ctx->pc = 0x1a2ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958592));
    // 0x1a2ad4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a2ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a2ad8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a2ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a2adc: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a2adcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a2ae0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a2ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a2ae4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a2ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a2ae8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a2ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a2aec: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a2aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a2af0: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a2af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a2af4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a2af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a2af8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a2af8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a2afc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a2afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a2b00: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a2b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a2b04: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a2b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a2b08: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a2b08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a2b0c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a2b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a2b10: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a2b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a2b14: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a2b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a2b18: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a2b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a2b1c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a2b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a2b20: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a2b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a2b24: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a2b24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a2b28: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a2b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a2b2c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a2b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2b30: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a2b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2b34: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a2b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2b38: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a2b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a2b3c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a2b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a2b40: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a2b40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a2b44: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a2b44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a2b48: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a2b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a2b4c: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A2B4Cu;
    SET_GPR_U32(ctx, 31, 0x1A2B54u);
    ctx->pc = 0x1A2B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2B4Cu;
    // 0x1a2b50: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A2B4Cu, 0x1A2B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2B54u;
label_1a2b54:
    // 0x1a2b54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2b58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a2b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2b5c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A2B5Cu;
    SET_GPR_U32(ctx, 31, 0x1A2B64u);
    ctx->pc = 0x1A2B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2B5Cu;
    // 0x1a2b60: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A2B5Cu, 0x1A2B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2B64u;
label_1a2b64:
    // 0x1a2b64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2B64u;
    {
        const bool branch_taken_0x1a2b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B64u;
        // 0x1a2b68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b64) {
            ctx->pc = 0x1A2B74u;
            goto label_1a2b74;
        }
    }
    ctx->pc = 0x1A2B6Cu;
label_1a2b6c:
    // 0x1a2b6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a2b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2b70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a2b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2b74:
    // 0x1a2b74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a2b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2b78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a2b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2b7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a2b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2b80: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B80u;
        // 0x1a2b84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2B88u;
}
