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

// Function: entry_00191564
// Address: 0x191564 - 0x19158c
void entry_00191564_0x191564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191564_0x191564");
#endif

    ctx->pc = 0x191564u;

    // 0x191564: 0x848301ec  lh          $v1, 0x1EC($a0)
    ctx->pc = 0x191564u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 492)));
    // 0x191568: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x191568u;
    {
        const bool branch_taken_0x191568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x191568) {
            ctx->pc = 0x19159Cu;
            return;
        }
    }
    ctx->pc = 0x191570u;
    // 0x191570: 0x848301e8  lh          $v1, 0x1E8($a0)
    ctx->pc = 0x191570u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x191574: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x191574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191578: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191578u;
    {
        const bool branch_taken_0x191578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191578u;
        // 0x19157c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191578) {
            ctx->pc = 0x19158Cu;
            return;
        }
    }
    ctx->pc = 0x191580u;
    // 0x191580: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x191580u;
    {
        const bool branch_taken_0x191580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191580u;
        // 0x191584: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191580) {
            ctx->pc = 0x19158Cu;
            return;
        }
    }
    ctx->pc = 0x191588u;
    // 0x191588: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x191588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19158cu;
}
