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

// Function: entry_001acdb4
// Address: 0x1acdb4 - 0x1acde0
void entry_001acdb4_0x1acdb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acdb4_0x1acdb4");
#endif

    ctx->pc = 0x1acdb4u;

    // 0x1acdb4: 0x260407b0  addiu       $a0, $s0, 0x7B0
    ctx->pc = 0x1acdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1968));
    // 0x1acdb8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ACDB8u;
    {
        const bool branch_taken_0x1acdb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDB8u;
        // 0x1acdbc: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acdb8) {
            ctx->pc = 0x1ACDE0u;
            return;
        }
    }
    ctx->pc = 0x1ACDC0u;
    // 0x1acdc0: 0x2442b690  addiu       $v0, $v0, -0x4970
    ctx->pc = 0x1acdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948496));
    // 0x1acdc4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ACDC4u;
    {
        const bool branch_taken_0x1acdc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDC4u;
        // 0x1acdc8: 0xae0207bc  sw          $v0, 0x7BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acdc4) {
            ctx->pc = 0x1ACDE0u;
            return;
        }
    }
    ctx->pc = 0x1ACDCCu;
    // 0x1acdcc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1acdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1acdd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1acdd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acdd4: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1acdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1acdd8: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1ACDD8u;
    SET_GPR_U32(ctx, 31, 0x1ACDE0u);
    ctx->pc = 0x1ACDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACDD8u;
    // 0x1acddc: 0xae0207bc  sw          $v0, 0x7BC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1980), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1ACDD8u, 0x1ACDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACDE0u;
}
