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

// Function: FUN_0013a410
// Address: 0x13a410 - 0x13a514
void FUN_0013a410_0x13a410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013a410_0x13a410");
#endif

    switch (ctx->pc) {
        case 0x13a430u: goto label_13a430;
        case 0x13a43cu: goto label_13a43c;
        case 0x13a448u: goto label_13a448;
        case 0x13a454u: goto label_13a454;
        case 0x13a460u: goto label_13a460;
        case 0x13a470u: goto label_13a470;
        case 0x13a4f8u: goto label_13a4f8;
        default: break;
    }

    ctx->pc = 0x13a410u;

    // 0x13a410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13a410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13a414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13a414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13a418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13a418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13a41c: 0x8f848588  lw          $a0, -0x7A78($gp)
    ctx->pc = 0x13a41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935944)));
    // 0x13a420: 0x10800038  beqz        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x13A420u;
    {
        const bool branch_taken_0x13a420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a420) {
            ctx->pc = 0x13A504u;
            goto label_13a504;
        }
    }
    ctx->pc = 0x13A428u;
    // 0x13a428: 0xc04e8fc  jal         func_13A3F0
    ctx->pc = 0x13A428u;
    SET_GPR_U32(ctx, 31, 0x13A430u);
    ctx->pc = 0x13A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A3F0u, 0x13A428u, 0x13A430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A430u;
label_13a430:
    // 0x13a430: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x13a430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a434: 0xc04e8f8  jal         func_13A3E0
    ctx->pc = 0x13A434u;
    SET_GPR_U32(ctx, 31, 0x13A43Cu);
    ctx->pc = 0x13A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A434u;
    // 0x13a438: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A3E0u, 0x13A434u, 0x13A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A43Cu;
label_13a43c:
    // 0x13a43c: 0x8fb00028  lw          $s0, 0x28($sp)
    ctx->pc = 0x13a43cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13a440: 0xc04e8f4  jal         func_13A3D0
    ctx->pc = 0x13A440u;
    SET_GPR_U32(ctx, 31, 0x13A448u);
    ctx->pc = 0x13A444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A440u;
    // 0x13a444: 0x8f848588  lw          $a0, -0x7A78($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935944)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A3D0u, 0x13A440u, 0x13A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A448u;
label_13a448:
    // 0x13a448: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x13a448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x13a44c: 0xc04e8f8  jal         func_13A3E0
    ctx->pc = 0x13A44Cu;
    SET_GPR_U32(ctx, 31, 0x13A454u);
    ctx->pc = 0x13A450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A44Cu;
    // 0x13a450: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A3E0u, 0x13A44Cu, 0x13A454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A454u;
label_13a454:
    // 0x13a454: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x13a454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    // 0x13a458: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x13A458u;
    {
        const bool branch_taken_0x13a458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A458u;
        // 0x13a45c: 0x8fb0002c  lw          $s0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a458) {
            ctx->pc = 0x13A4F8u;
            goto label_13a4f8;
        }
    }
    ctx->pc = 0x13A460u;
label_13a460:
    // 0x13a460: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x13a460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x13a464: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x13a464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x13a468: 0xc04c734  jal         func_131CD0
    ctx->pc = 0x13A468u;
    SET_GPR_U32(ctx, 31, 0x13A470u);
    ctx->pc = 0x13A46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A468u;
    // 0x13a46c: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CD0u, 0x13A468u, 0x13A470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A470u;
label_13a470:
    // 0x13a470: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13a470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13a474: 0x0  nop
    ctx->pc = 0x13a474u;
    // NOP
    // 0x13a478: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x13a478u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a47c: 0x0  nop
    ctx->pc = 0x13a47cu;
    // NOP
    // 0x13a480: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x13A480u;
    {
        const bool branch_taken_0x13a480 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a480) {
            ctx->pc = 0x13A4A4u;
            goto label_13a4a4;
        }
    }
    ctx->pc = 0x13A488u;
    // 0x13a488: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x13a488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13a48c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x13a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13a490: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x13a490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x13a494: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x13a494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13a498: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x13a498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13a49c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x13A49Cu;
    {
        const bool branch_taken_0x13a49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A49Cu;
        // 0x13a4a0: 0xe4410014  swc1        $f1, 0x14($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a49c) {
            ctx->pc = 0x13A4F0u;
            goto label_13a4f0;
        }
    }
    ctx->pc = 0x13A4A4u;
label_13a4a4:
    // 0x13a4a4: 0x0  nop
    ctx->pc = 0x13a4a4u;
    // NOP
    // 0x13a4a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13a4ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13a4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13a4b0: 0x0  nop
    ctx->pc = 0x13a4b0u;
    // NOP
    // 0x13a4b4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x13a4b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x13a4b8: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x13a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13a4bc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x13a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13a4c0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13a4c4: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x13a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x13a4c8: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x13a4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a4cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13a4ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13a4d0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x13a4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x13a4d4: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x13a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13a4d8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x13a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13a4dc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13a4e0: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x13a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x13a4e4: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x13a4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a4e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13a4e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13a4ec: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x13a4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_13a4f0:
    // 0x13a4f0: 0xc048974  jal         func_1225D0
    ctx->pc = 0x13A4F0u;
    SET_GPR_U32(ctx, 31, 0x13A4F8u);
    ctx->pc = 0x13A4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A4F0u;
    // 0x13a4f4: 0x27a40024  addiu       $a0, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x13A4F0u, 0x13A4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A4F8u;
label_13a4f8:
    // 0x13a4f8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x13a4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13a4fc: 0x1470ffd8  bne         $v1, $s0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x13A4FCu;
    {
        const bool branch_taken_0x13a4fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x13a4fc) {
            ctx->pc = 0x13A460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a460;
        }
    }
    ctx->pc = 0x13A504u;
label_13a504:
    // 0x13a504: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13a504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a508: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13a508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a50c: 0x3e00008  jr          $ra
    ctx->pc = 0x13A50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A50Cu;
        // 0x13a510: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A514u;
}
