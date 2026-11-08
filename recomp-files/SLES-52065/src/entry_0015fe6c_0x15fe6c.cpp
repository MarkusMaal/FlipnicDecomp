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

// Function: entry_0015fe6c
// Address: 0x15fe6c - 0x15fe80
void entry_0015fe6c_0x15fe6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fe6c_0x15fe6c");
#endif

    ctx->pc = 0x15fe6cu;

    // 0x15fe6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15fe70: 0x2843000a  slti        $v1, $v0, 0xA
    ctx->pc = 0x15fe70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15fe74: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x15FE74u;
    {
        const bool branch_taken_0x15fe74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE74u;
        // 0x15fe78: 0x24e703d0  addiu       $a3, $a3, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fe74) {
            ctx->pc = 0x15FE40u;
            return;
        }
    }
    ctx->pc = 0x15FE7Cu;
    // 0x15fe7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x15fe80u;
}
