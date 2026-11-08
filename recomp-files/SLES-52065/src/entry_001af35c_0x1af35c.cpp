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

// Function: entry_001af35c
// Address: 0x1af35c - 0x1af3d8
void entry_001af35c_0x1af35c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af35c_0x1af35c");
#endif

    switch (ctx->pc) {
        case 0x1af364u: goto label_1af364;
        case 0x1af370u: goto label_1af370;
        case 0x1af384u: goto label_1af384;
        case 0x1af394u: goto label_1af394;
        case 0x1af3b4u: goto label_1af3b4;
        case 0x1af3ccu: goto label_1af3cc;
        default: break;
    }

    ctx->pc = 0x1af35cu;

    // 0x1af35c: 0xc055c40  jal         func_157100
    ctx->pc = 0x1AF35Cu;
    SET_GPR_U32(ctx, 31, 0x1AF364u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x1AF35Cu, 0x1AF364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF364u;
label_1af364:
    // 0x1af364: 0x262406f0  addiu       $a0, $s1, 0x6F0
    ctx->pc = 0x1af364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    // 0x1af368: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1AF368u;
    SET_GPR_U32(ctx, 31, 0x1AF370u);
    ctx->pc = 0x1AF36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF368u;
    // 0x1af36c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1AF368u, 0x1AF370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF370u;
label_1af370:
    // 0x1af370: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1af370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1af374: 0x262406f0  addiu       $a0, $s1, 0x6F0
    ctx->pc = 0x1af374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    // 0x1af378: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1af378u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1af37c: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1AF37Cu;
    SET_GPR_U32(ctx, 31, 0x1AF384u);
    ctx->pc = 0x1AF380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF37Cu;
    // 0x1af380: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1AF37Cu, 0x1AF384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF384u;
label_1af384:
    // 0x1af384: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1af384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1af388: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1af388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1af38c: 0xc062858  jal         func_18A160
    ctx->pc = 0x1AF38Cu;
    SET_GPR_U32(ctx, 31, 0x1AF394u);
    ctx->pc = 0x1AF390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF38Cu;
    // 0x1af390: 0x262406f0  addiu       $a0, $s1, 0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1AF38Cu, 0x1AF394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF394u;
label_1af394:
    // 0x1af394: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1af394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1af398: 0x262406f0  addiu       $a0, $s1, 0x6F0
    ctx->pc = 0x1af398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    // 0x1af39c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1af39cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1af3a0: 0x0  nop
    ctx->pc = 0x1af3a0u;
    // NOP
    // 0x1af3a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1af3a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1af3a8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1af3a8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1af3ac: 0xc062860  jal         func_18A180
    ctx->pc = 0x1AF3ACu;
    SET_GPR_U32(ctx, 31, 0x1AF3B4u);
    ctx->pc = 0x1AF3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF3ACu;
    // 0x1af3b0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1AF3ACu, 0x1AF3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF3B4u;
label_1af3b4:
    // 0x1af3b4: 0x8e260670  lw          $a2, 0x670($s1)
    ctx->pc = 0x1af3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1af3b8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1af3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1af3bc: 0x8e27068c  lw          $a3, 0x68C($s1)
    ctx->pc = 0x1af3bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
    // 0x1af3c0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1af3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1af3c4: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1AF3C4u;
    SET_GPR_U32(ctx, 31, 0x1AF3CCu);
    ctx->pc = 0x1AF3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF3C4u;
    // 0x1af3c8: 0x24a50b48  addiu       $a1, $a1, 0xB48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1AF3C4u, 0x1AF3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF3CCu;
label_1af3cc:
    // 0x1af3cc: 0x262406f0  addiu       $a0, $s1, 0x6F0
    ctx->pc = 0x1af3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
    // 0x1af3d0: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1AF3D0u;
    SET_GPR_U32(ctx, 31, 0x1AF3D8u);
    ctx->pc = 0x1AF3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF3D0u;
    // 0x1af3d4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1AF3D0u, 0x1AF3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF3D8u;
}
