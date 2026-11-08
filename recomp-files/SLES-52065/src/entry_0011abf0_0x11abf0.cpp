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

// Function: entry_0011abf0
// Address: 0x11abf0 - 0x11ac18
void entry_0011abf0_0x11abf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011abf0_0x11abf0");
#endif

    switch (ctx->pc) {
        case 0x11ac00u: goto label_11ac00;
        default: break;
    }

    ctx->pc = 0x11abf0u;

    // 0x11abf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11abf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11abf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abf8: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11ABF8u;
    SET_GPR_U32(ctx, 31, 0x11AC00u);
    ctx->pc = 0x11ABFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ABF8u;
    // 0x11abfc: 0x24c6e720  addiu       $a2, $a2, -0x18E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11ABF8u, 0x11AC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC00u;
label_11ac00:
    // 0x11ac00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11ac00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ac04: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11AC04u;
    {
        const bool branch_taken_0x11ac04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11ac04) {
            ctx->pc = 0x11AC18u;
            return;
        }
    }
    ctx->pc = 0x11AC0Cu;
    // 0x11ac0c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11ac10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11AC10u;
    {
        const bool branch_taken_0x11ac10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC10u;
        // 0x11ac14: 0xae220534  sw          $v0, 0x534($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac10) {
            ctx->pc = 0x11AC20u;
            return;
        }
    }
    ctx->pc = 0x11AC18u;
}
