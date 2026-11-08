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

// Function: entry_001a7778
// Address: 0x1a7778 - 0x1a77ec
void entry_001a7778_0x1a7778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7778_0x1a7778");
#endif

    switch (ctx->pc) {
        case 0x1a7790u: goto label_1a7790;
        case 0x1a779cu: goto label_1a779c;
        case 0x1a77acu: goto label_1a77ac;
        case 0x1a77b8u: goto label_1a77b8;
        case 0x1a77d4u: goto label_1a77d4;
        default: break;
    }

    ctx->pc = 0x1a7778u;

    // 0x1a7778: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a7778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a777c: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a777cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a7780: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1a7780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1a7784: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a7784u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1a7788: 0xc062860  jal         func_18A180
    ctx->pc = 0x1A7788u;
    SET_GPR_U32(ctx, 31, 0x1A7790u);
    ctx->pc = 0x1A778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7788u;
    // 0x1a778c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1A7788u, 0x1A7790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7790u;
label_1a7790:
    // 0x1a7790: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x1a7790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1a7794: 0xc0627e0  jal         func_189F80
    ctx->pc = 0x1A7794u;
    SET_GPR_U32(ctx, 31, 0x1A779Cu);
    ctx->pc = 0x1A7798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7794u;
    // 0x1a7798: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F80u, 0x1A7794u, 0x1A779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A779Cu;
label_1a779c:
    // 0x1a779c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a779cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1a77a0: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a77a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a77a4: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1A77A4u;
    SET_GPR_U32(ctx, 31, 0x1A77ACu);
    ctx->pc = 0x1A77A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77A4u;
    // 0x1a77a8: 0x24a50740  addiu       $a1, $a1, 0x740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A77A4u, 0x1A77ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A77ACu;
label_1a77ac:
    // 0x1a77ac: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a77acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a77b0: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1A77B0u;
    SET_GPR_U32(ctx, 31, 0x1A77B8u);
    ctx->pc = 0x1A77B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77B0u;
    // 0x1a77b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1A77B0u, 0x1A77B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A77B8u;
label_1a77b8:
    // 0x1a77b8: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1a77b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1a77bc: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1a77bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1a77c0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a77c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a77c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a77c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a77c8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1a77c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1a77cc: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1A77CCu;
    SET_GPR_U32(ctx, 31, 0x1A77D4u);
    ctx->pc = 0x1A77D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77CCu;
    // 0x1a77d0: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1A77CCu, 0x1A77D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A77D4u;
label_1a77d4:
    // 0x1a77d4: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1a77d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1a77d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a77d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a77dc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A77DCu;
    {
        const bool branch_taken_0x1a77dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A77E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77DCu;
        // 0x1a77e0: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a77dc) {
            ctx->pc = 0x1A77ECu;
            return;
        }
    }
    ctx->pc = 0x1A77E4u;
    // 0x1a77e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A77E4u;
    {
        const bool branch_taken_0x1a77e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A77E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77E4u;
        // 0x1a77e8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a77e4) {
            ctx->pc = 0x1A77F4u;
            return;
        }
    }
    ctx->pc = 0x1A77ECu;
}
