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

// Function: entry_0019ac44
// Address: 0x19ac44 - 0x19acfc
void entry_0019ac44_0x19ac44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ac44_0x19ac44");
#endif

    switch (ctx->pc) {
        case 0x19ace4u: goto label_19ace4;
        case 0x19acf4u: goto label_19acf4;
        default: break;
    }

    ctx->pc = 0x19ac44u;

    // 0x19ac44: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x19AC44u;
    {
        const bool branch_taken_0x19ac44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ac44) {
            ctx->pc = 0x19ACFCu;
            return;
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
            return;
        }
    }
    ctx->pc = 0x19ACFCu;
}
