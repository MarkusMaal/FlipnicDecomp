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

// Function: entry_001a0384
// Address: 0x1a0384 - 0x1a043c
void entry_001a0384_0x1a0384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0384_0x1a0384");
#endif

    switch (ctx->pc) {
        case 0x1a0424u: goto label_1a0424;
        case 0x1a0434u: goto label_1a0434;
        default: break;
    }

    ctx->pc = 0x1a0384u;

    // 0x1a0384: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A0384u;
    {
        const bool branch_taken_0x1a0384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0384) {
            ctx->pc = 0x1A043Cu;
            return;
        }
    }
    ctx->pc = 0x1A038Cu;
    // 0x1a038c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a038cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a0390: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a0390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1a0394: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a0394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0398: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a0398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a039c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a039cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a03a0: 0x24a5dc40  addiu       $a1, $a1, -0x23C0
    ctx->pc = 0x1a03a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958144));
    // 0x1a03a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a03a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a03a8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a03a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a03ac: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x1a03acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x1a03b0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a03b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a03b4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a03b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a03b8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a03b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a03bc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a03bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a03c0: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a03c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a03c4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a03c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a03c8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a03c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a03cc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a03ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a03d0: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1a03d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x1a03d4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a03d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a03d8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1a03d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a03dc: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1a03dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a03e0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a03e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a03e4: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x1a03e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a03e8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a03e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a03ec: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a03ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a03f0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a03f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a03f4: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x1a03f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x1a03f8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1a03f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1a03fc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1a03fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a0400: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a0400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0404: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a0404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0408: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1a0408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a040c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a0410: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x1a0410u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x1a0414: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x1a0414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x1a0418: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1a0418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1a041c: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x1A041Cu;
    SET_GPR_U32(ctx, 31, 0x1A0424u);
    ctx->pc = 0x1A0420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A041Cu;
    // 0x1a0420: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A041Cu, 0x1A0424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0424u;
label_1a0424:
    // 0x1a0424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0428: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a0428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a042c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x1A042Cu;
    SET_GPR_U32(ctx, 31, 0x1A0434u);
    ctx->pc = 0x1A0430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A042Cu;
    // 0x1a0430: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x1A042Cu, 0x1A0434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0434u;
label_1a0434:
    // 0x1a0434: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0434u;
    {
        const bool branch_taken_0x1a0434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0434u;
        // 0x1a0438: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0434) {
            ctx->pc = 0x1A0444u;
            return;
        }
    }
    ctx->pc = 0x1A043Cu;
}
