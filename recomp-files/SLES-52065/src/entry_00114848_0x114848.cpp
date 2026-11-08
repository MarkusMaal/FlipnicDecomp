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

// Function: entry_00114848
// Address: 0x114848 - 0x11485c
void entry_00114848_0x114848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114848_0x114848");
#endif

    ctx->pc = 0x114848u;

    // 0x114848: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x114848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11484c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x11484cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x114850: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x114850u;
    {
        const bool branch_taken_0x114850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114850u;
        // 0x114854: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114850) {
            ctx->pc = 0x114820u;
            return;
        }
    }
    ctx->pc = 0x114858u;
    // 0x114858: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x114858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x11485cu;
}
