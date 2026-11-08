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

// Function: entry_0018b4e8
// Address: 0x18b4e8 - 0x18b50c
void entry_0018b4e8_0x18b4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b4e8_0x18b4e8");
#endif

    ctx->pc = 0x18b4e8u;

    // 0x18b4e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18b4e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18b4ec: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x18b4ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18b4f0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x18B4F0u;
    {
        const bool branch_taken_0x18b4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4F0u;
        // 0x18b4f4: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4f0) {
            ctx->pc = 0x18B4B8u;
            return;
        }
    }
    ctx->pc = 0x18B4F8u;
    // 0x18b4f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b4fc: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x18b4fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18b500: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18B500u;
    {
        const bool branch_taken_0x18b500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B500u;
        // 0x18b504: 0x26730200  addiu       $s3, $s3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b500) {
            ctx->pc = 0x18B4B0u;
            return;
        }
    }
    ctx->pc = 0x18B508u;
    // 0x18b508: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18b508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x18b50cu;
}
