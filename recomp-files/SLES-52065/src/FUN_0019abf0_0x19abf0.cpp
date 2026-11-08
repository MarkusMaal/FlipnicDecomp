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

// Function: FUN_0019abf0
// Address: 0x19abf0 - 0x19ad18
void FUN_0019abf0_0x19abf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019abf0_0x19abf0");
#endif

    switch (ctx->pc) {
        case 0x19ac28u: goto label_19ac28;
        case 0x19ac38u: goto label_19ac38;
        case 0x19ace4u: goto label_19ace4;
        case 0x19acf4u: goto label_19acf4;
        default: break;
    }

    ctx->pc = 0x19abf0u;

    // 0x19abf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19abf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19abf4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x19abf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x19abf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19abf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19abfc: 0x24a52a10  addiu       $a1, $a1, 0x2A10
    ctx->pc = 0x19abfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10768));
    // 0x19ac00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ac00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ac04: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x19ac04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19ac08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ac08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ac0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19ac0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac10: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x19ac10u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212A10u));
    // 0x19ac14: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x19ac14u;
    { uint32_t bits = FAST_READ32(0x212A18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ac18: 0x24040680  addiu       $a0, $zero, 0x680
    ctx->pc = 0x19ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    // 0x19ac1c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x19ac1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x19ac20: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x19AC20u;
    SET_GPR_U32(ctx, 31, 0x19AC28u);
    ctx->pc = 0x19AC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AC20u;
    // 0x19ac24: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x19AC20u, 0x19AC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC28u;
label_19ac28:
    // 0x19ac28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19AC28u;
    {
        const bool branch_taken_0x19ac28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC28u;
        // 0x19ac2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac28) {
            ctx->pc = 0x19AC44u;
            goto label_19ac44;
        }
    }
    ctx->pc = 0x19AC30u;
    // 0x19ac30: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x19AC30u;
    SET_GPR_U32(ctx, 31, 0x19AC38u);
    ctx->pc = 0x19AC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AC30u;
    // 0x19ac34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x19AC30u, 0x19AC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC38u;
label_19ac38:
    // 0x19ac38: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19ac3c: 0x2442b2e0  addiu       $v0, $v0, -0x4D20
    ctx->pc = 0x19ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947552));
    // 0x19ac40: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x19ac40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_19ac44:
    // 0x19ac44: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x19AC44u;
    {
        const bool branch_taken_0x19ac44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ac44) {
            ctx->pc = 0x19ACFCu;
            goto label_19acfc;
        }
    }
    ctx->pc = 0x19AC4Cu;
    // 0x19ac4c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19ac50: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19ac50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x19ac54: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19ac54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ac58: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x19ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19ac5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ac5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac60: 0x24a5d9e0  addiu       $a1, $a1, -0x2620
    ctx->pc = 0x19ac60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957536));
    // 0x19ac64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19ac68: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19ac6c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x19ac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x19ac70: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19ac74: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19ac74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19ac78: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19ac78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19ac7c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19ac80: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19ac80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19ac84: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19ac88: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19ac88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19ac8c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19ac90: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x19ac90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x19ac94: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19ac98: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19ac98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19ac9c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19ac9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19aca0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19aca4: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19aca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19aca8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19acac: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19acacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19acb0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19acb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19acb4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x19acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x19acb8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19acbc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x19acbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19acc0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19acc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19acc4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19acc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19acc8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x19acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19accc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19acccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19acd0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x19acd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x19acd4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x19acd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x19acd8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x19acd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x19acdc: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x19ACDCu;
    SET_GPR_U32(ctx, 31, 0x19ACE4u);
    ctx->pc = 0x19ACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ACDCu;
    // 0x19ace0: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x19ACDCu, 0x19ACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ACE4u;
label_19ace4:
    // 0x19ace4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ace4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ace8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19ace8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19acec: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x19ACECu;
    SET_GPR_U32(ctx, 31, 0x19ACF4u);
    ctx->pc = 0x19ACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ACECu;
    // 0x19acf0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x19ACECu, 0x19ACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ACF4u;
label_19acf4:
    // 0x19acf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19ACF4u;
    {
        const bool branch_taken_0x19acf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACF4u;
        // 0x19acf8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19acf4) {
            ctx->pc = 0x19AD04u;
            goto label_19ad04;
        }
    }
    ctx->pc = 0x19ACFCu;
label_19acfc:
    // 0x19acfc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19acfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19ad00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ad04:
    // 0x19ad04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19ad04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ad08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ad08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ad0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ad0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ad10: 0x3e00008  jr          $ra
    ctx->pc = 0x19AD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD10u;
        // 0x19ad14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AD18u;
}
