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

// Function: FUN_0019a770
// Address: 0x19a770 - 0x19a898
void FUN_0019a770_0x19a770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019a770_0x19a770");
#endif

    switch (ctx->pc) {
        case 0x19a7a8u: goto label_19a7a8;
        case 0x19a7b8u: goto label_19a7b8;
        case 0x19a864u: goto label_19a864;
        case 0x19a874u: goto label_19a874;
        default: break;
    }

    ctx->pc = 0x19a770u;

    // 0x19a770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19a770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19a774: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x19a774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x19a778: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19a778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19a77c: 0x24a529f0  addiu       $a1, $a1, 0x29F0
    ctx->pc = 0x19a77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10736));
    // 0x19a780: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19a780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19a784: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x19a784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19a788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19a788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19a78c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19a78cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a790: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x19a790u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x2129F0u));
    // 0x19a794: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x19a794u;
    { uint32_t bits = FAST_READ32(0x2129F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a798: 0x24040680  addiu       $a0, $zero, 0x680
    ctx->pc = 0x19a798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    // 0x19a79c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x19a79cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x19a7a0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x19A7A0u;
    SET_GPR_U32(ctx, 31, 0x19A7A8u);
    ctx->pc = 0x19A7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A7A0u;
    // 0x19a7a4: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x19A7A0u, 0x19A7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A7A8u;
label_19a7a8:
    // 0x19a7a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A7A8u;
    {
        const bool branch_taken_0x19a7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A7A8u;
        // 0x19a7ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a7a8) {
            ctx->pc = 0x19A7C4u;
            goto label_19a7c4;
        }
    }
    ctx->pc = 0x19A7B0u;
    // 0x19a7b0: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x19A7B0u;
    SET_GPR_U32(ctx, 31, 0x19A7B8u);
    ctx->pc = 0x19A7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A7B0u;
    // 0x19a7b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x19A7B0u, 0x19A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A7B8u;
label_19a7b8:
    // 0x19a7b8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19a7bc: 0x2442b2e0  addiu       $v0, $v0, -0x4D20
    ctx->pc = 0x19a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947552));
    // 0x19a7c0: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x19a7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_19a7c4:
    // 0x19a7c4: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x19A7C4u;
    {
        const bool branch_taken_0x19a7c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a7c4) {
            ctx->pc = 0x19A87Cu;
            goto label_19a87c;
        }
    }
    ctx->pc = 0x19A7CCu;
    // 0x19a7cc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19a7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19a7d0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19a7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x19a7d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19a7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a7d8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x19a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19a7dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a7e0: 0x24a5d960  addiu       $a1, $a1, -0x26A0
    ctx->pc = 0x19a7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957408));
    // 0x19a7e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19a7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19a7e8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19a7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19a7ec: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x19a7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x19a7f0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19a7f4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19a7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19a7f8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19a7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19a7fc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19a800: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19a800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19a804: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19a804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19a808: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19a808u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19a80c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19a80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19a810: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x19a810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x19a814: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19a814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19a818: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19a818u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19a81c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19a81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19a820: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19a820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19a824: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19a824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19a828: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19a828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19a82c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19a82cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19a830: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19a830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19a834: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x19a834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x19a838: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19a838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19a83c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x19a83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19a840: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19a840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a844: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19a844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a848: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x19a848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19a84c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19a850: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x19a850u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x19a854: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x19a854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x19a858: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x19a858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x19a85c: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x19A85Cu;
    SET_GPR_U32(ctx, 31, 0x19A864u);
    ctx->pc = 0x19A860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A85Cu;
    // 0x19a860: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x19A85Cu, 0x19A864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A864u;
label_19a864:
    // 0x19a864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a868: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a86c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x19A86Cu;
    SET_GPR_U32(ctx, 31, 0x19A874u);
    ctx->pc = 0x19A870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A86Cu;
    // 0x19a870: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x19A86Cu, 0x19A874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A874u;
label_19a874:
    // 0x19a874: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19A874u;
    {
        const bool branch_taken_0x19a874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A874u;
        // 0x19a878: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a874) {
            ctx->pc = 0x19A884u;
            goto label_19a884;
        }
    }
    ctx->pc = 0x19A87Cu;
label_19a87c:
    // 0x19a87c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19a87cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a880: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19a880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a884:
    // 0x19a884: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19a884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a888: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19a888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a88c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19a88cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a890: 0x3e00008  jr          $ra
    ctx->pc = 0x19A890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A890u;
        // 0x19a894: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A898u;
}
