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

// Function: entry_001450e8
// Address: 0x1450e8 - 0x145118
void entry_001450e8_0x1450e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001450e8_0x1450e8");
#endif

    switch (ctx->pc) {
        case 0x14510cu: goto label_14510c;
        default: break;
    }

    ctx->pc = 0x1450e8u;

    // 0x1450e8: 0x8e3001a4  lw          $s0, 0x1A4($s1)
    ctx->pc = 0x1450e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x1450ec: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1450ECu;
    {
        const bool branch_taken_0x1450ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1450ec) {
            ctx->pc = 0x145124u;
            return;
        }
    }
    ctx->pc = 0x1450F4u;
    // 0x1450f4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1450F4u;
    {
        const bool branch_taken_0x1450f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1450F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450F4u;
        // 0x1450f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1450f4) {
            ctx->pc = 0x14511Cu;
            return;
        }
    }
    ctx->pc = 0x1450FCu;
    // 0x1450fc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1450FCu;
    {
        const bool branch_taken_0x1450fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x145100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450FCu;
        // 0x145100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1450fc) {
            ctx->pc = 0x145118u;
            return;
        }
    }
    ctx->pc = 0x145104u;
    // 0x145104: 0xc0514ec  jal         func_1453B0
    ctx->pc = 0x145104u;
    SET_GPR_U32(ctx, 31, 0x14510Cu);
    ctx->pc = 0x1453B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1453B0u, 0x145104u, 0x14510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14510Cu;
label_14510c:
    // 0x14510c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x14510cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x145110: 0xc051458  jal         func_145160
    ctx->pc = 0x145110u;
    SET_GPR_U32(ctx, 31, 0x145118u);
    ctx->pc = 0x145114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145110u;
    // 0x145114: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145160u, 0x145110u, 0x145118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145118u;
}
