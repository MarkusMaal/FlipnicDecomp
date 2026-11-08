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

// Function: entry_0018aff8
// Address: 0x18aff8 - 0x18b00c
void entry_0018aff8_0x18aff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018aff8_0x18aff8");
#endif

    ctx->pc = 0x18aff8u;

    // 0x18aff8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18aff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18affc: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x18affcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18b000: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x18B000u;
    {
        const bool branch_taken_0x18b000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B000u;
        // 0x18b004: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b000) {
            ctx->pc = 0x18AF24u;
            return;
        }
    }
    ctx->pc = 0x18B008u;
    // 0x18b008: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18b008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18b00cu;
}
