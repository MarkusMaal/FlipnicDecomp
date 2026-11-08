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

// Function: entry_0012eef8
// Address: 0x12eef8 - 0x12ef14
void entry_0012eef8_0x12eef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012eef8_0x12eef8");
#endif

    ctx->pc = 0x12eef8u;

    // 0x12eef8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12EEF8u;
    {
        const bool branch_taken_0x12eef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eef8) {
            ctx->pc = 0x12EF14u;
            return;
        }
    }
    ctx->pc = 0x12EF00u;
    // 0x12ef00: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x12ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12ef04: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x12ef04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12ef08: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x12ef08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12ef0c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x12EF0Cu;
    {
        const bool branch_taken_0x12ef0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ef0c) {
            ctx->pc = 0x12EF34u;
            return;
        }
    }
    ctx->pc = 0x12EF14u;
}
