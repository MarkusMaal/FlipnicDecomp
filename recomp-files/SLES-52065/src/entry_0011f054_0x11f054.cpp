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

// Function: entry_0011f054
// Address: 0x11f054 - 0x11f070
void entry_0011f054_0x11f054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f054_0x11f054");
#endif

    ctx->pc = 0x11f054u;

    // 0x11f054: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x11f054u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x11f058: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F058u;
    {
        const bool branch_taken_0x11f058 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F058u;
        // 0x11f05c: 0x24150010  addiu       $s5, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f058) {
            ctx->pc = 0x11F070u;
            return;
        }
    }
    ctx->pc = 0x11F060u;
    // 0x11f060: 0x256082b  sltu        $at, $s2, $s6
    ctx->pc = 0x11f060u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x11f064: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x11F064u;
    {
        const bool branch_taken_0x11f064 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F064u;
        // 0x11f068: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f064) {
            ctx->pc = 0x11F070u;
            return;
        }
    }
    ctx->pc = 0x11F06Cu;
    // 0x11f06c: 0x2d2a823  subu        $s5, $s6, $s2
    ctx->pc = 0x11f06cu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    ctx->pc = 0x11f070u;
}
