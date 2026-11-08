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

// Function: entry_001a44a4
// Address: 0x1a44a4 - 0x1a44f4
void entry_001a44a4_0x1a44a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a44a4_0x1a44a4");
#endif

    switch (ctx->pc) {
        case 0x1a44c8u: goto label_1a44c8;
        case 0x1a44d8u: goto label_1a44d8;
        case 0x1a44e4u: goto label_1a44e4;
        case 0x1a44ecu: goto label_1a44ec;
        default: break;
    }

    ctx->pc = 0x1a44a4u;

    // 0x1a44a4: 0xae220670  sw          $v0, 0x670($s1)
    ctx->pc = 0x1a44a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
    // 0x1a44a8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1a44a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a44ac: 0xae270674  sw          $a3, 0x674($s1)
    ctx->pc = 0x1a44acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 7));
    // 0x1a44b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a44b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a44b4: 0x8e22067c  lw          $v0, 0x67C($s1)
    ctx->pc = 0x1a44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1660)));
    // 0x1a44b8: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x1a44b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a44bc: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x1a44bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1a44c0: 0xc064f7c  jal         func_193DF0
    ctx->pc = 0x1A44C0u;
    SET_GPR_U32(ctx, 31, 0x1A44C8u);
    ctx->pc = 0x1A44C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A44C0u;
    // 0x1a44c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x1A44C0u, 0x1A44C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A44C8u;
label_1a44c8:
    // 0x1a44c8: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x1a44c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
    // 0x1a44cc: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x1a44ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1a44d0: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1A44D0u;
    SET_GPR_U32(ctx, 31, 0x1A44D8u);
    ctx->pc = 0x1A44D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A44D0u;
    // 0x1a44d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A44D0u, 0x1A44D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A44D8u;
label_1a44d8:
    // 0x1a44d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a44d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a44dc: 0xc0692d8  jal         func_1A4B60
    ctx->pc = 0x1A44DCu;
    SET_GPR_U32(ctx, 31, 0x1A44E4u);
    ctx->pc = 0x1A44E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A44DCu;
    // 0x1a44e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x1A44DCu, 0x1A44E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A44E4u;
label_1a44e4:
    // 0x1a44e4: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A44E4u;
    SET_GPR_U32(ctx, 31, 0x1A44ECu);
    ctx->pc = 0x1A44E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A44E4u;
    // 0x1a44e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A44E4u, 0x1A44ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A44ECu;
label_1a44ec:
    // 0x1a44ec: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x1A44ECu;
    {
        const bool branch_taken_0x1a44ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a44ec) {
            ctx->pc = 0x1A486Cu;
            return;
        }
    }
    ctx->pc = 0x1A44F4u;
}
