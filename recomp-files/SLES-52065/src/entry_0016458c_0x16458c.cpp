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

// Function: entry_0016458c
// Address: 0x16458c - 0x1645d0
void entry_0016458c_0x16458c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016458c_0x16458c");
#endif

    switch (ctx->pc) {
        case 0x16459cu: goto label_16459c;
        case 0x1645b8u: goto label_1645b8;
        default: break;
    }

    ctx->pc = 0x16458cu;

    // 0x16458c: 0x0  nop
    ctx->pc = 0x16458cu;
    // NOP
    // 0x164590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164594: 0xc0561d4  jal         func_158750
    ctx->pc = 0x164594u;
    SET_GPR_U32(ctx, 31, 0x16459Cu);
    ctx->pc = 0x164598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164594u;
    // 0x164598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x164594u, 0x16459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16459Cu;
label_16459c:
    // 0x16459c: 0x86430242  lh          $v1, 0x242($s2)
    ctx->pc = 0x16459cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 578)));
    // 0x1645a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1645a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1645a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1645a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645a8: 0xa6430240  sh          $v1, 0x240($s2)
    ctx->pc = 0x1645a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 576), (uint16_t)GPR_U32(ctx, 3));
    // 0x1645ac: 0xae2002f0  sw          $zero, 0x2F0($s1)
    ctx->pc = 0x1645acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 0));
    // 0x1645b0: 0xc055c40  jal         func_157100
    ctx->pc = 0x1645B0u;
    SET_GPR_U32(ctx, 31, 0x1645B8u);
    ctx->pc = 0x1645B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1645B0u;
    // 0x1645b4: 0xae4201d4  sw          $v0, 0x1D4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x1645B0u, 0x1645B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1645B8u;
label_1645b8:
    // 0x1645b8: 0x8e4201f0  lw          $v0, 0x1F0($s2)
    ctx->pc = 0x1645b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x1645bc: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x1645bcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1645c0: 0x7e260000  sq          $a2, 0x0($s1)
    ctx->pc = 0x1645c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 6));
    // 0x1645c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1645c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1645c8: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x1645C8u;
    {
        const bool branch_taken_0x1645c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1645CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645C8u;
        // 0x1645cc: 0xae510244  sw          $s1, 0x244($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 580), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1645c8) {
            ctx->pc = 0x164900u;
            return;
        }
    }
    ctx->pc = 0x1645D0u;
}
