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

// Function: entry_001fae54
// Address: 0x1fae54 - 0x1fae60
void entry_001fae54_0x1fae54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fae54_0x1fae54");
#endif

    ctx->pc = 0x1fae54u;

    // 0x1fae54: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FAE54u;
    {
        const bool branch_taken_0x1fae54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE54u;
        // 0x1fae58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae54) {
            ctx->pc = 0x1FAE80u;
            return;
        }
    }
    ctx->pc = 0x1FAE5Cu;
    // 0x1fae5c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1fae5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x1fae60u;
}
