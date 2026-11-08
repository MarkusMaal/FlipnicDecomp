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

// Function: entry_0013af30
// Address: 0x13af30 - 0x13af4c
void entry_0013af30_0x13af30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013af30_0x13af30");
#endif

    ctx->pc = 0x13af30u;

    // 0x13af30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13af30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13af34: 0x0  nop
    ctx->pc = 0x13af34u;
    // NOP
    // 0x13af38: 0x0  nop
    ctx->pc = 0x13af38u;
    // NOP
    // 0x13af3c: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x13AF3Cu;
    {
        const bool branch_taken_0x13af3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13af3c) {
            ctx->pc = 0x13AF2Cu;
            return;
        }
    }
    ctx->pc = 0x13AF44u;
    // 0x13af44: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13AF44u;
    {
        const bool branch_taken_0x13af44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AF44u;
        // 0x13af48: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13af44) {
            ctx->pc = 0x13AF70u;
            return;
        }
    }
    ctx->pc = 0x13AF4Cu;
}
