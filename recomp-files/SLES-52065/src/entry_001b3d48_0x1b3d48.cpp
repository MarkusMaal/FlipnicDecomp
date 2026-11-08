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

// Function: entry_001b3d48
// Address: 0x1b3d48 - 0x1b3d58
void entry_001b3d48_0x1b3d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3d48_0x1b3d48");
#endif

    ctx->pc = 0x1b3d48u;

    // 0x1b3d48: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x1b3d48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b3d4c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1B3D4Cu;
    {
        const bool branch_taken_0x1b3d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d4c) {
            ctx->pc = 0x1B3D14u;
            return;
        }
    }
    ctx->pc = 0x1B3D54u;
    // 0x1b3d54: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1b3d54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1b3d58u;
}
