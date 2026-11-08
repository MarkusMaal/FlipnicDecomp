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

// Function: entry_0011abc8
// Address: 0x11abc8 - 0x11abf0
void entry_0011abc8_0x11abc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011abc8_0x11abc8");
#endif

    switch (ctx->pc) {
        case 0x11abd8u: goto label_11abd8;
        default: break;
    }

    ctx->pc = 0x11abc8u;

    // 0x11abc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11abc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11abccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abd0: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11ABD0u;
    SET_GPR_U32(ctx, 31, 0x11ABD8u);
    ctx->pc = 0x11ABD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ABD0u;
    // 0x11abd4: 0x24c6e718  addiu       $a2, $a2, -0x18E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11ABD0u, 0x11ABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ABD8u;
label_11abd8:
    // 0x11abd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11abd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11abdc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11ABDCu;
    {
        const bool branch_taken_0x11abdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABDCu;
        // 0x11abe0: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11abdc) {
            ctx->pc = 0x11ABF0u;
            return;
        }
    }
    ctx->pc = 0x11ABE4u;
    // 0x11abe4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11abe8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11ABE8u;
    {
        const bool branch_taken_0x11abe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABE8u;
        // 0x11abec: 0xae220534  sw          $v0, 0x534($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11abe8) {
            ctx->pc = 0x11AC20u;
            return;
        }
    }
    ctx->pc = 0x11ABF0u;
}
