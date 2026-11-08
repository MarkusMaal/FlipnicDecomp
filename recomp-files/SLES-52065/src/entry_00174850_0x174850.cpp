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

// Function: entry_00174850
// Address: 0x174850 - 0x1748b4
void entry_00174850_0x174850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174850_0x174850");
#endif

    switch (ctx->pc) {
        case 0x174860u: goto label_174860;
        case 0x174874u: goto label_174874;
        case 0x174888u: goto label_174888;
        case 0x1748acu: goto label_1748ac;
        default: break;
    }

    ctx->pc = 0x174850u;

    // 0x174850: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x174850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x174854: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x174854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x174858: 0xc045b40  jal         func_116D00
    ctx->pc = 0x174858u;
    SET_GPR_U32(ctx, 31, 0x174860u);
    ctx->pc = 0x17485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174858u;
    // 0x17485c: 0x24a5f640  addiu       $a1, $a1, -0x9C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116D00u, 0x174858u, 0x174860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174860u;
label_174860:
    // 0x174860: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x174860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x174864: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x174864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x174868: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x174868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x17486c: 0xc045b40  jal         func_116D00
    ctx->pc = 0x17486Cu;
    SET_GPR_U32(ctx, 31, 0x174874u);
    ctx->pc = 0x174870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17486Cu;
    // 0x174870: 0x24a5f648  addiu       $a1, $a1, -0x9B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116D00u, 0x17486Cu, 0x174874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174874u;
label_174874:
    // 0x174874: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x174874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x174878: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x174878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
    // 0x17487c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x17487cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x174880: 0xc045b40  jal         func_116D00
    ctx->pc = 0x174880u;
    SET_GPR_U32(ctx, 31, 0x174888u);
    ctx->pc = 0x174884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174880u;
    // 0x174884: 0x24a5f658  addiu       $a1, $a1, -0x9A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116D00u, 0x174880u, 0x174888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174888u;
label_174888:
    // 0x174888: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x174888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
    // 0x17488c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x17488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x174890: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x174890u;
    {
        const bool branch_taken_0x174890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174890u;
        // 0x174894: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174890) {
            ctx->pc = 0x1748B4u;
            return;
        }
    }
    ctx->pc = 0x174898u;
    // 0x174898: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x174898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17489c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x17489cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x1748a0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1748a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1748a4: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1748A4u;
    SET_GPR_U32(ctx, 31, 0x1748ACu);
    ctx->pc = 0x1748A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1748A4u;
    // 0x1748a8: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1748A4u, 0x1748ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1748ACu;
label_1748ac:
    // 0x1748ac: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1748acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x1748b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1748b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1748b4u;
}
