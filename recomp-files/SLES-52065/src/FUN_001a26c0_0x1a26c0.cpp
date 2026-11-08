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

// Function: FUN_001a26c0
// Address: 0x1a26c0 - 0x1a27e8
void FUN_001a26c0_0x1a26c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a26c0_0x1a26c0");
#endif

    switch (ctx->pc) {
        case 0x1a26f8u: goto label_1a26f8;
        case 0x1a2708u: goto label_1a2708;
        case 0x1a27b4u: goto label_1a27b4;
        case 0x1a27c4u: goto label_1a27c4;
        default: break;
    }

    ctx->pc = 0x1a26c0u;

    // 0x1a26c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a26c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a26c4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1a26c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1a26c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a26c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a26cc: 0x24a52ae8  addiu       $a1, $a1, 0x2AE8
    ctx->pc = 0x1a26ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10984));
    // 0x1a26d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a26d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a26d4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1a26d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a26d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a26d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a26dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a26dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a26e0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1a26e0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x212AE8u));
    // 0x1a26e4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a26e4u;
    { uint32_t bits = FAST_READ32(0x212AF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a26e8: 0x24040670  addiu       $a0, $zero, 0x670
    ctx->pc = 0x1a26e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
    // 0x1a26ec: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1a26ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1a26f0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1A26F0u;
    SET_GPR_U32(ctx, 31, 0x1A26F8u);
    ctx->pc = 0x1A26F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A26F0u;
    // 0x1a26f4: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1A26F0u, 0x1A26F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A26F8u;
label_1a26f8:
    // 0x1a26f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A26F8u;
    {
        const bool branch_taken_0x1a26f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26F8u;
        // 0x1a26fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a26f8) {
            ctx->pc = 0x1A2714u;
            goto label_1a2714;
        }
    }
    ctx->pc = 0x1A2700u;
    // 0x1a2700: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x1A2700u;
    SET_GPR_U32(ctx, 31, 0x1A2708u);
    ctx->pc = 0x1A2704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2700u;
    // 0x1a2704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x1A2700u, 0x1A2708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2708u;
label_1a2708:
    // 0x1a2708: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a2708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a270c: 0x2442b3c0  addiu       $v0, $v0, -0x4C40
    ctx->pc = 0x1a270cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947776));
    // 0x1a2710: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x1a2710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
label_1a2714:
    // 0x1a2714: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A2714u;
    {
        const bool branch_taken_0x1a2714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2714) {
            ctx->pc = 0x1A27CCu;
            goto label_1a27cc;
        }
    }
    ctx->pc = 0x1A271Cu;
    // 0x1a271c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a2720: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a2720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a2724: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a2724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2728: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a2728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a272c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a272cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2730: 0x24a5dd40  addiu       $a1, $a1, -0x22C0
    ctx->pc = 0x1a2730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958400));
    // 0x1a2734: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a2734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a2738: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a2738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a273c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a273cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a2740: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a2740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a2744: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a2744u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a2748: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a2748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a274c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a274cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a2750: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a2750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a2754: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a2754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a2758: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a2758u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a275c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a275cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a2760: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a2760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a2764: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a2764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a2768: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a2768u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a276c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a276cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a2770: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a2770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a2774: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a2774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a2778: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a2778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a277c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a277cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a2780: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a2780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a2784: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a2784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a2788: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a2788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a278c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a278cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2790: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a2790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2794: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a2794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2798: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a2798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a279c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a279cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a27a0: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a27a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a27a4: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a27a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a27a8: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a27a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a27ac: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A27ACu;
    SET_GPR_U32(ctx, 31, 0x1A27B4u);
    ctx->pc = 0x1A27B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A27ACu;
    // 0x1a27b0: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A27ACu, 0x1A27B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A27B4u;
label_1a27b4:
    // 0x1a27b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a27b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a27b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a27b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a27bc: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A27BCu;
    SET_GPR_U32(ctx, 31, 0x1A27C4u);
    ctx->pc = 0x1A27C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A27BCu;
    // 0x1a27c0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A27BCu, 0x1A27C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A27C4u;
label_1a27c4:
    // 0x1a27c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A27C4u;
    {
        const bool branch_taken_0x1a27c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A27C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27C4u;
        // 0x1a27c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a27c4) {
            ctx->pc = 0x1A27D4u;
            goto label_1a27d4;
        }
    }
    ctx->pc = 0x1A27CCu;
label_1a27cc:
    // 0x1a27cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a27ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a27d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a27d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a27d4:
    // 0x1a27d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a27d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a27d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a27d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a27dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a27dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a27e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A27E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A27E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27E0u;
        // 0x1a27e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A27E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A27E8u;
}
