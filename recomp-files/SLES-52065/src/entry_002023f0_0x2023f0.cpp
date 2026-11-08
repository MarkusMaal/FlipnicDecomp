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

// Function: entry_002023f0
// Address: 0x2023f0 - 0x202410
void entry_002023f0_0x2023f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002023f0_0x2023f0");
#endif

    ctx->pc = 0x2023f0u;

    // 0x2023f0: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x2023f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2023f4: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2023F4u;
    {
        const bool branch_taken_0x2023f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2023F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023F4u;
        // 0x2023f8: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2023f4) {
            ctx->pc = 0x202500u;
            return;
        }
    }
    ctx->pc = 0x2023FCu;
    // 0x2023fc: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2023fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202400: 0x2486ffd0  addiu       $a2, $a0, -0x30
    ctx->pc = 0x202400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x202404: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x202404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x202408: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x202408u;
    {
        const bool branch_taken_0x202408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202408u;
        // 0x20240c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202408) {
            ctx->pc = 0x202420u;
            return;
        }
    }
    ctx->pc = 0x202410u;
}
