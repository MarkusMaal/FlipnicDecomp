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

// Function: entry_001ee8b4
// Address: 0x1ee8b4 - 0x1ee8dc
void entry_001ee8b4_0x1ee8b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee8b4_0x1ee8b4");
#endif

    switch (ctx->pc) {
        case 0x1ee8c4u: goto label_1ee8c4;
        case 0x1ee8d4u: goto label_1ee8d4;
        default: break;
    }

    ctx->pc = 0x1ee8b4u;

    // 0x1ee8b4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1ee8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1ee8b8: 0xafb30004  sw          $s3, 0x4($sp)
    ctx->pc = 0x1ee8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
    // 0x1ee8bc: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1EE8BCu;
    SET_GPR_U32(ctx, 31, 0x1EE8C4u);
    ctx->pc = 0x1EE8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE8BCu;
    // 0x1ee8c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1EE8BCu, 0x1EE8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE8C4u;
label_1ee8c4:
    // 0x1ee8c4: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE8C4u;
    {
        const bool branch_taken_0x1ee8c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EE8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8C4u;
        // 0x1ee8c8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee8c4) {
            ctx->pc = 0x1EE8DCu;
            return;
        }
    }
    ctx->pc = 0x1EE8CCu;
    // 0x1ee8cc: 0xc07b836  jal         func_1EE0D8
    ctx->pc = 0x1EE8CCu;
    SET_GPR_U32(ctx, 31, 0x1EE8D4u);
    ctx->pc = 0x1EE8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE8CCu;
    // 0x1ee8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE0D8u, 0x1EE8CCu, 0x1EE8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE8D4u;
label_1ee8d4:
    // 0x1ee8d4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1EE8D4u;
    {
        const bool branch_taken_0x1ee8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE8D4u;
        // 0x1ee8d8: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee8d4) {
            ctx->pc = 0x1EE934u;
            return;
        }
    }
    ctx->pc = 0x1EE8DCu;
}
