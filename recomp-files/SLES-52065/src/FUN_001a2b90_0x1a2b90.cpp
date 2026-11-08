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

// Function: FUN_001a2b90
// Address: 0x1a2b90 - 0x1a2cb8
void FUN_001a2b90_0x1a2b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a2b90_0x1a2b90");
#endif

    switch (ctx->pc) {
        case 0x1a2bc8u: goto label_1a2bc8;
        case 0x1a2bd8u: goto label_1a2bd8;
        case 0x1a2c84u: goto label_1a2c84;
        case 0x1a2c94u: goto label_1a2c94;
        default: break;
    }

    ctx->pc = 0x1a2b90u;

    // 0x1a2b90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a2b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a2b94: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1a2b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1a2b98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a2b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a2b9c: 0x24a52b28  addiu       $a1, $a1, 0x2B28
    ctx->pc = 0x1a2b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11048));
    // 0x1a2ba0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a2ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a2ba4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1a2ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a2ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a2ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2bac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a2bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2bb0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1a2bb0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212B28u));
    // 0x1a2bb4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a2bb4u;
    { uint32_t bits = FAST_READ32(0x212B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2bb8: 0x24040670  addiu       $a0, $zero, 0x670
    ctx->pc = 0x1a2bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
    // 0x1a2bbc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1a2bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1a2bc0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1A2BC0u;
    SET_GPR_U32(ctx, 31, 0x1A2BC8u);
    ctx->pc = 0x1A2BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2BC0u;
    // 0x1a2bc4: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1A2BC0u, 0x1A2BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2BC8u;
label_1a2bc8:
    // 0x1a2bc8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2BC8u;
    {
        const bool branch_taken_0x1a2bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BC8u;
        // 0x1a2bcc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2bc8) {
            ctx->pc = 0x1A2BE4u;
            goto label_1a2be4;
        }
    }
    ctx->pc = 0x1A2BD0u;
    // 0x1a2bd0: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x1A2BD0u;
    SET_GPR_U32(ctx, 31, 0x1A2BD8u);
    ctx->pc = 0x1A2BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2BD0u;
    // 0x1a2bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x1A2BD0u, 0x1A2BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2BD8u;
label_1a2bd8:
    // 0x1a2bd8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a2bdc: 0x2442b380  addiu       $v0, $v0, -0x4C80
    ctx->pc = 0x1a2bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947712));
    // 0x1a2be0: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x1a2be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_1a2be4:
    // 0x1a2be4: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A2BE4u;
    {
        const bool branch_taken_0x1a2be4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2be4) {
            ctx->pc = 0x1A2C9Cu;
            goto label_1a2c9c;
        }
    }
    ctx->pc = 0x1A2BECu;
    // 0x1a2bec: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a2becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a2bf0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a2bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a2bf4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a2bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2bf8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a2bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2c00: 0x24a5de40  addiu       $a1, $a1, -0x21C0
    ctx->pc = 0x1a2c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958656));
    // 0x1a2c04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a2c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a2c08: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a2c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a2c0c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a2c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a2c10: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a2c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a2c14: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a2c14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a2c18: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a2c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a2c1c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a2c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a2c20: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a2c20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a2c24: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a2c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a2c28: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a2c28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a2c2c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a2c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a2c30: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a2c30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a2c34: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a2c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a2c38: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a2c38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a2c3c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a2c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a2c40: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a2c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a2c44: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a2c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a2c48: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a2c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a2c4c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a2c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a2c50: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a2c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a2c54: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a2c54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a2c58: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a2c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a2c5c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a2c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2c60: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a2c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2c64: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a2c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2c68: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a2c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a2c6c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a2c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a2c70: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a2c70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a2c74: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a2c74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a2c78: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a2c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a2c7c: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A2C7Cu;
    SET_GPR_U32(ctx, 31, 0x1A2C84u);
    ctx->pc = 0x1A2C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2C7Cu;
    // 0x1a2c80: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A2C7Cu, 0x1A2C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C84u;
label_1a2c84:
    // 0x1a2c84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2c88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a2c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2c8c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A2C8Cu;
    SET_GPR_U32(ctx, 31, 0x1A2C94u);
    ctx->pc = 0x1A2C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2C8Cu;
    // 0x1a2c90: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A2C8Cu, 0x1A2C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C94u;
label_1a2c94:
    // 0x1a2c94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2C94u;
    {
        const bool branch_taken_0x1a2c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C94u;
        // 0x1a2c98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c94) {
            ctx->pc = 0x1A2CA4u;
            goto label_1a2ca4;
        }
    }
    ctx->pc = 0x1A2C9Cu;
label_1a2c9c:
    // 0x1a2c9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a2c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2ca0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a2ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2ca4:
    // 0x1a2ca4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a2ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2ca8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a2ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2cac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a2cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CB0u;
        // 0x1a2cb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2CB8u;
}
