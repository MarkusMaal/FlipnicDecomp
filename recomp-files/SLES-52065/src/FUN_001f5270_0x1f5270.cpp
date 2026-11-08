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

// Function: FUN_001f5270
// Address: 0x1f5270 - 0x1f5330
void FUN_001f5270_0x1f5270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f5270_0x1f5270");
#endif

    switch (ctx->pc) {
        case 0x1f52a8u: goto label_1f52a8;
        case 0x1f52b4u: goto label_1f52b4;
        case 0x1f52c4u: goto label_1f52c4;
        case 0x1f52d0u: goto label_1f52d0;
        case 0x1f52e0u: goto label_1f52e0;
        case 0x1f52ecu: goto label_1f52ec;
        case 0x1f5314u: goto label_1f5314;
        default: break;
    }

    ctx->pc = 0x1f5270u;

    // 0x1f5270: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f5270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f5274: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1f5274u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1f5278: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1f5278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1f527c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f527cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f5280: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f5280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f5284: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5288: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f5288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f528c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f528cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f5290: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1f5290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5294: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f5294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5298: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f5298u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f529c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f529cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f52a0: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1F52A0u;
    SET_GPR_U32(ctx, 31, 0x1F52A8u);
    ctx->pc = 0x1F52A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F52A0u;
    // 0x1f52a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1F52A0u, 0x1F52A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52A8u;
label_1f52a8:
    // 0x1f52a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f52a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f52ac: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x1F52ACu;
    SET_GPR_U32(ctx, 31, 0x1F52B4u);
    ctx->pc = 0x1F52B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F52ACu;
    // 0x1f52b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x1F52ACu, 0x1F52B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52B4u;
label_1f52b4:
    // 0x1f52b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f52b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f52b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f52b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f52bc: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1F52BCu;
    SET_GPR_U32(ctx, 31, 0x1F52C4u);
    ctx->pc = 0x1F52C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F52BCu;
    // 0x1f52c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1F52BCu, 0x1F52C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52C4u;
label_1f52c4:
    // 0x1f52c4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1f52c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1f52c8: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x1F52C8u;
    SET_GPR_U32(ctx, 31, 0x1F52D0u);
    ctx->pc = 0x1F52CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F52C8u;
    // 0x1f52cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x1F52C8u, 0x1F52D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52D0u;
label_1f52d0:
    // 0x1f52d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f52d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f52d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f52d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f52d8: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1F52D8u;
    SET_GPR_U32(ctx, 31, 0x1F52E0u);
    ctx->pc = 0x1F52DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F52D8u;
    // 0x1f52dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1F52D8u, 0x1F52E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52E0u;
label_1f52e0:
    // 0x1f52e0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1f52e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1f52e4: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x1F52E4u;
    SET_GPR_U32(ctx, 31, 0x1F52ECu);
    ctx->pc = 0x1F52E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F52E4u;
    // 0x1f52e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x1F52E4u, 0x1F52ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52ECu;
label_1f52ec:
    // 0x1f52ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f52ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f52f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f52f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f52f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f52f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f52f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f52f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f52fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f52fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5300: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1f5300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1f5304: 0xe601003c  swc1        $f1, 0x3C($s0)
    ctx->pc = 0x1f5304u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1f5308: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1f5308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1f530c: 0xc07d322  jal         func_1F4C88
    ctx->pc = 0x1F530Cu;
    SET_GPR_U32(ctx, 31, 0x1F5314u);
    ctx->pc = 0x1F5310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F530Cu;
    // 0x1f5310: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C88u, 0x1F530Cu, 0x1F5314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5314u;
label_1f5314:
    // 0x1f5314: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f5314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f5318: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f5318u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f531c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f531cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5320: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f5320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5324: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1f5324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f5328: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5328u;
        // 0x1f532c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5330u;
}
