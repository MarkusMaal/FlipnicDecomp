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

// Function: entry_001cfca4
// Address: 0x1cfca4 - 0x1cfcf8
void entry_001cfca4_0x1cfca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfca4_0x1cfca4");
#endif

    switch (ctx->pc) {
        case 0x1cfcacu: goto label_1cfcac;
        case 0x1cfcb4u: goto label_1cfcb4;
        case 0x1cfcd4u: goto label_1cfcd4;
        case 0x1cfce0u: goto label_1cfce0;
        default: break;
    }

    ctx->pc = 0x1cfca4u;

    // 0x1cfca4: 0xc073174  jal         func_1CC5D0
    ctx->pc = 0x1CFCA4u;
    SET_GPR_U32(ctx, 31, 0x1CFCACu);
    ctx->pc = 0x1CC5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5D0u, 0x1CFCA4u, 0x1CFCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFCACu;
label_1cfcac:
    // 0x1cfcac: 0xc073090  jal         func_1CC240
    ctx->pc = 0x1CFCACu;
    SET_GPR_U32(ctx, 31, 0x1CFCB4u);
    ctx->pc = 0x1CC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC240u, 0x1CFCACu, 0x1CFCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFCB4u;
label_1cfcb4:
    // 0x1cfcb4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1cfcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cfcb8: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CFCB8u;
    {
        const bool branch_taken_0x1cfcb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cfcb8) {
            ctx->pc = 0x1CFD0Cu;
            return;
        }
    }
    ctx->pc = 0x1CFCC0u;
    // 0x1cfcc0: 0x92020061  lbu         $v0, 0x61($s0)
    ctx->pc = 0x1cfcc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 97)));
    // 0x1cfcc4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CFCC4u;
    {
        const bool branch_taken_0x1cfcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCC4u;
        // 0x1cfcc8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfcc4) {
            ctx->pc = 0x1CFD0Cu;
            return;
        }
    }
    ctx->pc = 0x1CFCCCu;
    // 0x1cfccc: 0xc073b34  jal         func_1CECD0
    ctx->pc = 0x1CFCCCu;
    SET_GPR_U32(ctx, 31, 0x1CFCD4u);
    ctx->pc = 0x1CECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CECD0u, 0x1CFCCCu, 0x1CFCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFCD4u;
label_1cfcd4:
    // 0x1cfcd4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfcd8: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1CFCD8u;
    SET_GPR_U32(ctx, 31, 0x1CFCE0u);
    ctx->pc = 0x1CFCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFCD8u;
    // 0x1cfcdc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1CFCD8u, 0x1CFCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFCE0u;
label_1cfce0:
    // 0x1cfce0: 0x92020060  lbu         $v0, 0x60($s0)
    ctx->pc = 0x1cfce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1cfce4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFCE4u;
    {
        const bool branch_taken_0x1cfce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfce4) {
            ctx->pc = 0x1CFCF8u;
            return;
        }
    }
    ctx->pc = 0x1CFCECu;
    // 0x1cfcec: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfcf0: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1CFCF0u;
    SET_GPR_U32(ctx, 31, 0x1CFCF8u);
    ctx->pc = 0x1CFCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFCF0u;
    // 0x1cfcf4: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1CFCF0u, 0x1CFCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFCF8u;
}
