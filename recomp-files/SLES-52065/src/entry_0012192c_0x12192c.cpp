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

// Function: entry_0012192c
// Address: 0x12192c - 0x121940
void entry_0012192c_0x12192c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012192c_0x12192c");
#endif

    ctx->pc = 0x12192cu;

    // 0x12192c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x12192cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x121930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x121930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121934: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x121934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x121938: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x121938u;
    {
        const bool branch_taken_0x121938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121938u;
        // 0x12193c: 0x2403005c  addiu       $v1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121938) {
            ctx->pc = 0x12195Cu;
            return;
        }
    }
    ctx->pc = 0x121940u;
}
