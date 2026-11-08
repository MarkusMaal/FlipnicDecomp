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

// Function: entry_001ff044
// Address: 0x1ff044 - 0x1ff058
void entry_001ff044_0x1ff044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff044_0x1ff044");
#endif

    ctx->pc = 0x1ff044u;

    // 0x1ff044: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x1ff044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ff048: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1FF048u;
    {
        const bool branch_taken_0x1ff048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff048) {
            ctx->pc = 0x1FF000u;
            return;
        }
    }
    ctx->pc = 0x1FF050u;
    // 0x1ff050: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x1ff050u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1ff054: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1ff054u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    ctx->pc = 0x1ff058u;
}
