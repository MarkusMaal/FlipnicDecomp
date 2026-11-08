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

// Function: FUN_001a27f0
// Address: 0x1a27f0 - 0x1a2918
void FUN_001a27f0_0x1a27f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a27f0_0x1a27f0");
#endif

    switch (ctx->pc) {
        case 0x1a2828u: goto label_1a2828;
        case 0x1a2838u: goto label_1a2838;
        case 0x1a28e4u: goto label_1a28e4;
        case 0x1a28f4u: goto label_1a28f4;
        default: break;
    }

    ctx->pc = 0x1a27f0u;

    // 0x1a27f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a27f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a27f4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1a27f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1a27f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a27f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a27fc: 0x24a52af8  addiu       $a1, $a1, 0x2AF8
    ctx->pc = 0x1a27fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11000));
    // 0x1a2800: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a2800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a2804: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1a2804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a2808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a2808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a280c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a280cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2810: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1a2810u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212AF8u));
    // 0x1a2814: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a2814u;
    { uint32_t bits = FAST_READ32(0x212B00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2818: 0x24040670  addiu       $a0, $zero, 0x670
    ctx->pc = 0x1a2818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
    // 0x1a281c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1a281cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1a2820: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1A2820u;
    SET_GPR_U32(ctx, 31, 0x1A2828u);
    ctx->pc = 0x1A2824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2820u;
    // 0x1a2824: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1A2820u, 0x1A2828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2828u;
label_1a2828:
    // 0x1a2828: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2828u;
    {
        const bool branch_taken_0x1a2828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2828u;
        // 0x1a282c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2828) {
            ctx->pc = 0x1A2844u;
            goto label_1a2844;
        }
    }
    ctx->pc = 0x1A2830u;
    // 0x1a2830: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x1A2830u;
    SET_GPR_U32(ctx, 31, 0x1A2838u);
    ctx->pc = 0x1A2834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2830u;
    // 0x1a2834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x1A2830u, 0x1A2838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2838u;
label_1a2838:
    // 0x1a2838: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a2838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a283c: 0x2442b3b0  addiu       $v0, $v0, -0x4C50
    ctx->pc = 0x1a283cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947760));
    // 0x1a2840: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x1a2840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_1a2844:
    // 0x1a2844: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A2844u;
    {
        const bool branch_taken_0x1a2844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2844) {
            ctx->pc = 0x1A28FCu;
            goto label_1a28fc;
        }
    }
    ctx->pc = 0x1A284Cu;
    // 0x1a284c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a284cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a2850: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a2850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a2854: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a2854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2858: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a2858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a285c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a285cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2860: 0x24a5dd80  addiu       $a1, $a1, -0x2280
    ctx->pc = 0x1a2860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958464));
    // 0x1a2864: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a2864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a2868: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a2868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a286c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a286cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a2870: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a2870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a2874: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a2874u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a2878: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a2878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a287c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a287cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a2880: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a2880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a2884: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a2884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a2888: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a2888u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a288c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a288cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a2890: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a2890u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a2894: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a2894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a2898: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a2898u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a289c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a289cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a28a0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a28a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a28a4: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a28a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a28a8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a28a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a28ac: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a28acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a28b0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a28b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a28b4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a28b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a28b8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a28b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a28bc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a28bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a28c0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a28c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a28c4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a28c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a28c8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a28c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a28cc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a28d0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a28d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a28d4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a28d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a28d8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a28d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a28dc: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A28DCu;
    SET_GPR_U32(ctx, 31, 0x1A28E4u);
    ctx->pc = 0x1A28E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A28DCu;
    // 0x1a28e0: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A28DCu, 0x1A28E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A28E4u;
label_1a28e4:
    // 0x1a28e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a28e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a28e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a28e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a28ec: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A28ECu;
    SET_GPR_U32(ctx, 31, 0x1A28F4u);
    ctx->pc = 0x1A28F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A28ECu;
    // 0x1a28f0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A28ECu, 0x1A28F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A28F4u;
label_1a28f4:
    // 0x1a28f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A28F4u;
    {
        const bool branch_taken_0x1a28f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A28F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28F4u;
        // 0x1a28f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a28f4) {
            ctx->pc = 0x1A2904u;
            goto label_1a2904;
        }
    }
    ctx->pc = 0x1A28FCu;
label_1a28fc:
    // 0x1a28fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a28fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2900: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a2900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2904:
    // 0x1a2904: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a2904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2908: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a2908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a290c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a290cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2910: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2910u;
        // 0x1a2914: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2918u;
}
