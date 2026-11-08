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

// Function: entry_00204920
// Address: 0x204920 - 0x204938
void entry_00204920_0x204920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204920_0x204920");
#endif

    ctx->pc = 0x204920u;

    // 0x204920: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x204920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x204924: 0x28023  negu        $s0, $v0
    ctx->pc = 0x204924u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x204928: 0x1a00002c  blez        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x204928u;
    {
        const bool branch_taken_0x204928 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x20492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204928u;
        // 0x20492c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204928) {
            ctx->pc = 0x2049DCu;
            return;
        }
    }
    ctx->pc = 0x204930u;
    // 0x204930: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x204930u;
    {
        const bool branch_taken_0x204930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204930u;
        // 0x204934: 0x3c160022  lui         $s6, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204930) {
            ctx->pc = 0x204998u;
            return;
        }
    }
    ctx->pc = 0x204938u;
}
