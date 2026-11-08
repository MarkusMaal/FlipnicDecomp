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

// Function: entry_00117118
// Address: 0x117118 - 0x117130
void entry_00117118_0x117118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117118_0x117118");
#endif

    ctx->pc = 0x117118u;

    // 0x117118: 0x2c82009e  sltiu       $v0, $a0, 0x9E
    ctx->pc = 0x117118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)158) ? 1 : 0);
    // 0x11711c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11711Cu;
    {
        const bool branch_taken_0x11711c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11711c) {
            ctx->pc = 0x117130u;
            return;
        }
    }
    ctx->pc = 0x117124u;
    // 0x117124: 0x2484ff83  addiu       $a0, $a0, -0x7D
    ctx->pc = 0x117124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967171));
    // 0x117128: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x117128u;
    {
        const bool branch_taken_0x117128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117128u;
        // 0x11712c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117128) {
            ctx->pc = 0x117134u;
            return;
        }
    }
    ctx->pc = 0x117130u;
}
