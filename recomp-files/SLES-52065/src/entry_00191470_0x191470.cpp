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

// Function: entry_00191470
// Address: 0x191470 - 0x191484
void entry_00191470_0x191470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191470_0x191470");
#endif

    ctx->pc = 0x191470u;

    // 0x191470: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x191470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x191474: 0x28c3000a  slti        $v1, $a2, 0xA
    ctx->pc = 0x191474u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x191478: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x191478u;
    {
        const bool branch_taken_0x191478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191478u;
        // 0x19147c: 0x250803d0  addiu       $t0, $t0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191478) {
            ctx->pc = 0x191418u;
            return;
        }
    }
    ctx->pc = 0x191480u;
    // 0x191480: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x191480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191484u;
}
