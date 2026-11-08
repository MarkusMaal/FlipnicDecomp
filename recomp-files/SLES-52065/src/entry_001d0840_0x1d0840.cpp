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

// Function: entry_001d0840
// Address: 0x1d0840 - 0x1d08c8
void entry_001d0840_0x1d0840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0840_0x1d0840");
#endif

    switch (ctx->pc) {
        case 0x1d0864u: goto label_1d0864;
        case 0x1d0884u: goto label_1d0884;
        default: break;
    }

    ctx->pc = 0x1d0840u;

label_1d0840:
    // 0x1d0840: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x1d0840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1d0844: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d0844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d0848: 0xc44f0014  lwc1        $f15, 0x14($v0)
    ctx->pc = 0x1d0848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1d084c: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x1d084cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1d0850: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d0850u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0854: 0x0  nop
    ctx->pc = 0x1d0854u;
    // NOP
    // 0x1d0858: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d0858u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1d085c: 0xc062860  jal         func_18A180
    ctx->pc = 0x1D085Cu;
    SET_GPR_U32(ctx, 31, 0x1D0864u);
    ctx->pc = 0x1D0860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D085Cu;
    // 0x1d0860: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1D085Cu, 0x1D0864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0864u;
label_1d0864:
    // 0x1d0864: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d0864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d0868: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d0868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d086c: 0x8c2299b8  lw          $v0, -0x6648($at)
    ctx->pc = 0x1d086cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2199B8u));
    // 0x1d0870: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x1d0870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1d0874: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d0874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d0878: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1d0878u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d087c: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1D087Cu;
    SET_GPR_U32(ctx, 31, 0x1D0884u);
    ctx->pc = 0x1D0880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D087Cu;
    // 0x1d0880: 0x24a531f8  addiu       $a1, $a1, 0x31F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1D087Cu, 0x1D0884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0884u;
label_1d0884:
    // 0x1d0884: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d0884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d0888: 0x2a22000b  slti        $v0, $s1, 0xB
    ctx->pc = 0x1d0888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1d088c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1D088Cu;
    {
        const bool branch_taken_0x1d088c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D088Cu;
        // 0x1d0890: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d088c) {
            ctx->pc = 0x1D0840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0840;
        }
    }
    ctx->pc = 0x1D0894u;
    // 0x1d0894: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d0894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d0898: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D0898u;
    {
        const bool branch_taken_0x1d0898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0898) {
            ctx->pc = 0x1D08C8u;
            return;
        }
    }
    ctx->pc = 0x1D08A0u;
    // 0x1d08a0: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x1d08a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x1d08a4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1d08a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1d08a8: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x1d08a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1d08ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d08acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d08b0: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x1d08b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x1d08b4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d08b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1d08b8: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x1d08b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    // 0x1d08bc: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x1d08bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
    // 0x1d08c0: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1D08C0u;
    SET_GPR_U32(ctx, 31, 0x1D08C8u);
    ctx->pc = 0x1D08C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D08C0u;
    // 0x1d08c4: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1D08C0u, 0x1D08C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D08C8u;
}
