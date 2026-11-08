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

// Function: entry_00205338
// Address: 0x205338 - 0x205348
void entry_00205338_0x205338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205338_0x205338");
#endif

    ctx->pc = 0x205338u;

    // 0x205338: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x205338u;
    {
        const bool branch_taken_0x205338 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205338u;
        // 0x20533c: 0x26d1ffff  addiu       $s1, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205338) {
            ctx->pc = 0x205378u;
            return;
        }
    }
    ctx->pc = 0x205340u;
    // 0x205340: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x205340u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205344: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x205344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x205348u;
}
