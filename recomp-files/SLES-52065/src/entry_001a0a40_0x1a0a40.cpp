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

// Function: entry_001a0a40
// Address: 0x1a0a40 - 0x1a0af8
void entry_001a0a40_0x1a0a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0a40_0x1a0a40");
#endif

    switch (ctx->pc) {
        case 0x1a0ae0u: goto label_1a0ae0;
        case 0x1a0af0u: goto label_1a0af0;
        default: break;
    }

    ctx->pc = 0x1a0a40u;

    // 0x1a0a40: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A0A40u;
    {
        const bool branch_taken_0x1a0a40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0a40) {
            ctx->pc = 0x1A0AF8u;
            return;
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
            return;
        }
    }
    ctx->pc = 0x1A0AF8u;
}
