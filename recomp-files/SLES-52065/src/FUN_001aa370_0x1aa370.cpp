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

// Function: FUN_001aa370
// Address: 0x1aa370 - 0x1aa424
void FUN_001aa370_0x1aa370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aa370_0x1aa370");
#endif

    switch (ctx->pc) {
        case 0x1aa384u: goto label_1aa384;
        case 0x1aa3bcu: goto label_1aa3bc;
        default: break;
    }

    ctx->pc = 0x1aa370u;

    // 0x1aa370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aa374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aa374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1aa378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aa378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aa37c: 0xc045fb4  jal         func_117ED0
    ctx->pc = 0x1AA37Cu;
    SET_GPR_U32(ctx, 31, 0x1AA384u);
    ctx->pc = 0x1AA380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA37Cu;
    // 0x1aa380: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117ED0u, 0x1AA37Cu, 0x1AA384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA384u;
label_1aa384:
    // 0x1aa384: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1aa384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa388: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1aa388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa38c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1aa38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa390: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1aa390u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aa394: 0x0  nop
    ctx->pc = 0x1aa394u;
    // NOP
    // 0x1aa398: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1aa398u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1aa39c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1aa39cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1aa3a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1aa3a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1aa3a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aa3a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aa3a8: 0x46000bc3  div.s       $f15, $f1, $f0
    ctx->pc = 0x1aa3a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1aa3ac: 0x0  nop
    ctx->pc = 0x1aa3acu;
    // NOP
    // 0x1aa3b0: 0x0  nop
    ctx->pc = 0x1aa3b0u;
    // NOP
    // 0x1aa3b4: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x1AA3B4u;
    SET_GPR_U32(ctx, 31, 0x1AA3BCu);
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x1AA3B4u, 0x1AA3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA3BCu;
label_1aa3bc:
    // 0x1aa3bc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1aa3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1aa3c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aa3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa3c4: 0x1065000b  beq         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1AA3C4u;
    {
        const bool branch_taken_0x1aa3c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1AA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3C4u;
        // 0x1aa3c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa3c4) {
            ctx->pc = 0x1AA3F4u;
            goto label_1aa3f4;
        }
    }
    ctx->pc = 0x1AA3CCu;
    // 0x1aa3cc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA3CCu;
    {
        const bool branch_taken_0x1aa3cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa3cc) {
            ctx->pc = 0x1AA3DCu;
            goto label_1aa3dc;
        }
    }
    ctx->pc = 0x1AA3D4u;
    // 0x1aa3d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1AA3D4u;
    {
        const bool branch_taken_0x1aa3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3D4u;
        // 0x1aa3d8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa3d4) {
            ctx->pc = 0x1AA418u;
            goto label_1aa418;
        }
    }
    ctx->pc = 0x1AA3DCu;
label_1aa3dc:
    // 0x1aa3dc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1aa3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1aa3e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1aa3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1aa3e4: 0x461000b  bgez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1AA3E4u;
    {
        const bool branch_taken_0x1aa3e4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3E4u;
        // 0x1aa3e8: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa3e4) {
            ctx->pc = 0x1AA414u;
            goto label_1aa414;
        }
    }
    ctx->pc = 0x1AA3ECu;
    // 0x1aa3ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA3ECu;
    {
        const bool branch_taken_0x1aa3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3ECu;
        // 0x1aa3f0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa3ec) {
            ctx->pc = 0x1AA414u;
            goto label_1aa414;
        }
    }
    ctx->pc = 0x1AA3F4u;
label_1aa3f4:
    // 0x1aa3f4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1aa3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1aa3f8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1aa3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1aa3fc: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x1aa3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x1aa400: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1aa400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1aa404: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1aa404u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1aa408: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AA408u;
    {
        const bool branch_taken_0x1aa408 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa408) {
            ctx->pc = 0x1AA414u;
            goto label_1aa414;
        }
    }
    ctx->pc = 0x1AA410u;
    // 0x1aa410: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1aa410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1aa414:
    // 0x1aa414: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aa414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aa418:
    // 0x1aa418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aa418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa41c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA41Cu;
        // 0x1aa420: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA424u;
}
