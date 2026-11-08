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

// Function: entry_0019a2e4
// Address: 0x19a2e4 - 0x19a39c
void entry_0019a2e4_0x19a2e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a2e4_0x19a2e4");
#endif

    switch (ctx->pc) {
        case 0x19a384u: goto label_19a384;
        case 0x19a394u: goto label_19a394;
        default: break;
    }

    ctx->pc = 0x19a2e4u;

    // 0x19a2e4: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x19A2E4u;
    {
        const bool branch_taken_0x19a2e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a2e4) {
            ctx->pc = 0x19A39Cu;
            return;
        }
    }
    ctx->pc = 0x19A2ECu;
    // 0x19a2ec: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19a2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19a2f0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19a2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x19a2f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19a2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a2f8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x19a2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19a2fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a300: 0x24a5d8e0  addiu       $a1, $a1, -0x2720
    ctx->pc = 0x19a300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957280));
    // 0x19a304: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19a304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19a308: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19a308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19a30c: 0xac660254  sw          $a2, 0x254($v1)
    ctx->pc = 0x19a30cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 6));
    // 0x19a310: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19a310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19a314: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19a314u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19a318: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19a318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19a31c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19a320: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19a320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19a324: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19a324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19a328: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19a328u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19a32c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19a330: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x19a330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x19a334: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19a334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19a338: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x19a338u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19a33c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x19a33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x19a340: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x19a340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x19a344: 0x8cc60034  lw          $a2, 0x34($a2)
    ctx->pc = 0x19a344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19a348: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19a348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19a34c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19a34cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19a350: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x19a350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19a354: 0xac600154  sw          $zero, 0x154($v1)
    ctx->pc = 0x19a354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 0));
    // 0x19a358: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19a358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19a35c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x19a35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19a360: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x19a360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a364: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19a364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a368: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x19a368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19a36c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x19a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19a370: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x19a370u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x19a374: 0xe4410278  swc1        $f1, 0x278($v0)
    ctx->pc = 0x19a374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 632), bits); }
    // 0x19a378: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x19a378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x19a37c: 0xc063dc0  jal         func_18F700
    ctx->pc = 0x19A37Cu;
    SET_GPR_U32(ctx, 31, 0x19A384u);
    ctx->pc = 0x19A380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A37Cu;
    // 0x19a380: 0xac500280  sw          $s0, 0x280($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x19A37Cu, 0x19A384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A384u;
label_19a384:
    // 0x19a384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a388: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a38c: 0xc063fe8  jal         func_18FFA0
    ctx->pc = 0x19A38Cu;
    SET_GPR_U32(ctx, 31, 0x19A394u);
    ctx->pc = 0x19A390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A38Cu;
    // 0x19a390: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FFA0u, 0x19A38Cu, 0x19A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A394u;
label_19a394:
    // 0x19a394: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19A394u;
    {
        const bool branch_taken_0x19a394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A394u;
        // 0x19a398: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a394) {
            ctx->pc = 0x19A3A4u;
            return;
        }
    }
    ctx->pc = 0x19A39Cu;
}
