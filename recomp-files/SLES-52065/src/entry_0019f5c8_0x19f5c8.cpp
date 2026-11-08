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

// Function: entry_0019f5c8
// Address: 0x19f5c8 - 0x19f5e4
void entry_0019f5c8_0x19f5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f5c8_0x19f5c8");
#endif

    ctx->pc = 0x19f5c8u;

    // 0x19f5c8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x19f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19f5cc: 0xae820320  sw          $v0, 0x320($s4)
    ctx->pc = 0x19f5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 2));
    // 0x19f5d0: 0x8e820674  lw          $v0, 0x674($s4)
    ctx->pc = 0x19f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1652)));
    // 0x19f5d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F5D4u;
    {
        const bool branch_taken_0x19f5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5D4u;
        // 0x19f5d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5d4) {
            ctx->pc = 0x19F5E4u;
            return;
        }
    }
    ctx->pc = 0x19F5DCu;
    // 0x19f5dc: 0xac400320  sw          $zero, 0x320($v0)
    ctx->pc = 0x19f5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 800), GPR_U32(ctx, 0));
    // 0x19f5e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f5e4u;
}
