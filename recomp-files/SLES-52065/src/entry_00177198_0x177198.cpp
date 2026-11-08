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

// Function: entry_00177198
// Address: 0x177198 - 0x1771ac
void entry_00177198_0x177198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177198_0x177198");
#endif

    ctx->pc = 0x177198u;

    // 0x177198: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x177198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x17719c: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x17719Cu;
    {
        const bool branch_taken_0x17719c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1771A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17719Cu;
        // 0x1771a0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17719c) {
            ctx->pc = 0x17701Cu;
            return;
        }
    }
    ctx->pc = 0x1771A4u;
    // 0x1771a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1771A4u;
    {
        const bool branch_taken_0x1771a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1771A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771A4u;
        // 0x1771a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771a4) {
            ctx->pc = 0x1771D8u;
            return;
        }
    }
    ctx->pc = 0x1771ACu;
}
