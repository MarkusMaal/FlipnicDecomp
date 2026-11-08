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

// Function: entry_001d5f68
// Address: 0x1d5f68 - 0x1d5f90
void entry_001d5f68_0x1d5f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5f68_0x1d5f68");
#endif

    ctx->pc = 0x1d5f68u;

label_1d5f68:
    // 0x1d5f68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d5f68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d5f6c: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x1d5f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x1d5f70: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x1d5f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d5f74: 0x0  nop
    ctx->pc = 0x1d5f74u;
    // NOP
    // 0x1d5f78: 0x0  nop
    ctx->pc = 0x1d5f78u;
    // NOP
    // 0x1d5f7c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D5F7Cu;
    {
        const bool branch_taken_0x1d5f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F7Cu;
        // 0x1d5f80: 0x24630074  addiu       $v1, $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f7c) {
            ctx->pc = 0x1D5F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5f68;
        }
    }
    ctx->pc = 0x1D5F84u;
    // 0x1d5f84: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1D5F84u;
    {
        const bool branch_taken_0x1d5f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5f84) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5F8Cu;
    // 0x1d5f8c: 0x0  nop
    ctx->pc = 0x1d5f8cu;
    // NOP
    ctx->pc = 0x1d5f90u;
}
