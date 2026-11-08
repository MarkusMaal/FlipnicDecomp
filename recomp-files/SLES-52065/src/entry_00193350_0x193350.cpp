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

// Function: entry_00193350
// Address: 0x193350 - 0x1933dc
void entry_00193350_0x193350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193350_0x193350");
#endif

    switch (ctx->pc) {
        case 0x1933acu: goto label_1933ac;
        case 0x1933d4u: goto label_1933d4;
        default: break;
    }

    ctx->pc = 0x193350u;

    // 0x193350: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x193350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x193354: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x193354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x193358: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x193358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x19335c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x19335cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x193360: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x193360u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x193364: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x193364u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x193368: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x193368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19336c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x19336cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193370: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193370u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193374: 0x0  nop
    ctx->pc = 0x193374u;
    // NOP
    // 0x193378: 0x46800d60  cvt.s.w     $f21, $f1
    ctx->pc = 0x193378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x19337c: 0x11220017  beq         $t1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x19337Cu;
    {
        const bool branch_taken_0x19337c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x193380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19337Cu;
        // 0x193380: 0x468005a0  cvt.s.w     $f22, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19337c) {
            ctx->pc = 0x1933DCu;
            return;
        }
    }
    ctx->pc = 0x193384u;
    // 0x193384: 0x8f838384  lw          $v1, -0x7C7C($gp)
    ctx->pc = 0x193384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x193388: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x193388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x19338c: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x19338cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x193390: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x193390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193394: 0x2484d5d0  addiu       $a0, $a0, -0x2A30
    ctx->pc = 0x193394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    // 0x193398: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x193398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19339c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19339cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1933a0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1933a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1933a4: 0xc04bf38  jal         func_12FCE0
    ctx->pc = 0x1933A4u;
    SET_GPR_U32(ctx, 31, 0x1933ACu);
    ctx->pc = 0x1933A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1933A4u;
    // 0x1933a8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x1933A4u, 0x1933ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1933ACu;
label_1933ac:
    // 0x1933ac: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1933acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1933b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1933b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1933b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933b8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1933b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1933bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1933c0: 0x24c6d5d0  addiu       $a2, $a2, -0x2A30
    ctx->pc = 0x1933c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956496));
    // 0x1933c4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1933c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1933c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1933c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1933cc: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x1933CCu;
    SET_GPR_U32(ctx, 31, 0x1933D4u);
    ctx->pc = 0x1933D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1933CCu;
    // 0x1933d0: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x1933CCu, 0x1933D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1933D4u;
label_1933d4:
    // 0x1933d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1933D4u;
    {
        const bool branch_taken_0x1933d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1933D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1933D4u;
        // 0x1933d8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1933d4) {
            ctx->pc = 0x193418u;
            return;
        }
    }
    ctx->pc = 0x1933DCu;
}
