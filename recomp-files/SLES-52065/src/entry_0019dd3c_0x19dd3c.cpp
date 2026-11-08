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

// Function: entry_0019dd3c
// Address: 0x19dd3c - 0x19dd58
void entry_0019dd3c_0x19dd3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dd3c_0x19dd3c");
#endif

    ctx->pc = 0x19dd3cu;

    // 0x19dd3c: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x19dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x19dd40: 0x8c620984  lw          $v0, 0x984($v1)
    ctx->pc = 0x19dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2436)));
    // 0x19dd44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19DD44u;
    {
        const bool branch_taken_0x19dd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19dd44) {
            ctx->pc = 0x19DD58u;
            return;
        }
    }
    ctx->pc = 0x19DD4Cu;
    // 0x19dd4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19dd50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19DD50u;
    {
        const bool branch_taken_0x19dd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DD50u;
        // 0x19dd54: 0xac620984  sw          $v0, 0x984($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dd50) {
            ctx->pc = 0x19DD78u;
            return;
        }
    }
    ctx->pc = 0x19DD58u;
}
