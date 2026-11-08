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

// Function: entry_0019b9d0
// Address: 0x19b9d0 - 0x19ba88
void entry_0019b9d0_0x19b9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b9d0_0x19b9d0");
#endif

    switch (ctx->pc) {
        case 0x19ba70u: goto label_19ba70;
        case 0x19ba80u: goto label_19ba80;
        default: break;
    }

    ctx->pc = 0x19b9d0u;

    // 0x19b9d0: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x19B9D0u;
    {
        const bool branch_taken_0x19b9d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b9d0) {
            ctx->pc = 0x19BA88u;
            return;
        }
    }
    ctx->pc = 0x19B9D8u;
    // 0x19b9d8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19b9dc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19b9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x19b9e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19b9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b9e4: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x19b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x19b9e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b9ec: 0x24a5daa0  addiu       $a1, $a1, -0x2560
    ctx->pc = 0x19b9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957728));
    // 0x19b9f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19b9f4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19b9f8: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x19b9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x19b9fc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19ba00: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19ba00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19ba04: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19ba04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19ba08: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19ba08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19ba0c: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19ba0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19ba10: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19ba14: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19ba14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19ba18: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19ba18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19ba1c: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x19ba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x19ba20: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19ba20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19ba24: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19ba24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19ba28: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19ba28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19ba2c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19ba30: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19ba30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19ba34: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19ba34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19ba38: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19ba38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19ba3c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19ba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19ba40: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x19ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x19ba44: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19ba44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19ba48: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x19ba48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19ba4c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19ba4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ba50: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ba54: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x19ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19ba58: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19ba5c: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x19ba5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x19ba60: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x19ba60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x19ba64: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x19ba64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x19ba68: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x19BA68u;
    SET_GPR_U32(ctx, 31, 0x19BA70u);
    ctx->pc = 0x19BA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BA68u;
    // 0x19ba6c: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x19BA68u, 0x19BA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA70u;
label_19ba70:
    // 0x19ba70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ba70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19ba74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba78: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x19BA78u;
    SET_GPR_U32(ctx, 31, 0x19BA80u);
    ctx->pc = 0x19BA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BA78u;
    // 0x19ba7c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x19BA78u, 0x19BA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BA80u;
label_19ba80:
    // 0x19ba80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19BA80u;
    {
        const bool branch_taken_0x19ba80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA80u;
        // 0x19ba84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba80) {
            ctx->pc = 0x19BA90u;
            return;
        }
    }
    ctx->pc = 0x19BA88u;
}
