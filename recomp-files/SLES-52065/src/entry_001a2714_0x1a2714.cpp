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

// Function: entry_001a2714
// Address: 0x1a2714 - 0x1a27cc
void entry_001a2714_0x1a2714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2714_0x1a2714");
#endif

    switch (ctx->pc) {
        case 0x1a27b4u: goto label_1a27b4;
        case 0x1a27c4u: goto label_1a27c4;
        default: break;
    }

    ctx->pc = 0x1a2714u;

    // 0x1a2714: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A2714u;
    {
        const bool branch_taken_0x1a2714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2714) {
            ctx->pc = 0x1A27CCu;
            return;
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
            return;
        }
    }
    ctx->pc = 0x1A27CCu;
}
