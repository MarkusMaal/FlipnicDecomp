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

// Function: entry_00197c70
// Address: 0x197c70 - 0x197c84
void entry_00197c70_0x197c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197c70_0x197c70");
#endif

    ctx->pc = 0x197c70u;

    // 0x197c70: 0x8ea706a4  lw          $a3, 0x6A4($s5)
    ctx->pc = 0x197c70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1700)));
    // 0x197c74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x197c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c78: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x197C78u;
    {
        const bool branch_taken_0x197c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C78u;
        // 0x197c7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c78) {
            ctx->pc = 0x197D38u;
            return;
        }
    }
    ctx->pc = 0x197C80u;
    // 0x197c80: 0x2a93021  addu        $a2, $s5, $t1
    ctx->pc = 0x197c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
    ctx->pc = 0x197c84u;
}
