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

// Function: entry_00114260
// Address: 0x114260 - 0x114278
void entry_00114260_0x114260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114260_0x114260");
#endif

    ctx->pc = 0x114260u;

    // 0x114260: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x114260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x114264: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x114264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x114268: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x114268u;
    {
        const bool branch_taken_0x114268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114268u;
        // 0x11426c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114268) {
            ctx->pc = 0x11423Cu;
            return;
        }
    }
    ctx->pc = 0x114270u;
    // 0x114270: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x114270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x114274: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x114274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114278u;
}
