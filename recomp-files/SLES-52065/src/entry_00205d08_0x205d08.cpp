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

// Function: entry_00205d08
// Address: 0x205d08 - 0x205d1c
void entry_00205d08_0x205d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205d08_0x205d08");
#endif

    ctx->pc = 0x205d08u;

    // 0x205d08: 0x26d30001  addiu       $s3, $s6, 0x1
    ctx->pc = 0x205d08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x205d0c: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x205d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x205d10: 0x1000fd64  b           . + 4 + (-0x29C << 2)
    ctx->pc = 0x205D10u;
    {
        const bool branch_taken_0x205d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205D10u;
        // 0x205d14: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d10) {
            ctx->pc = 0x2052A4u;
            return;
        }
    }
    ctx->pc = 0x205D18u;
    // 0x205d18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x205d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x205d1cu;
}
