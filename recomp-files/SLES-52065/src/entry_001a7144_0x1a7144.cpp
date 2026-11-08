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

// Function: entry_001a7144
// Address: 0x1a7144 - 0x1a7164
void entry_001a7144_0x1a7144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7144_0x1a7144");
#endif

    ctx->pc = 0x1a7144u;

    // 0x1a7144: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A7144u;
    {
        const bool branch_taken_0x1a7144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7144) {
            ctx->pc = 0x1A7170u;
            return;
        }
    }
    ctx->pc = 0x1A714Cu;
    // 0x1a714c: 0x86030094  lh          $v1, 0x94($s0)
    ctx->pc = 0x1a714cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1a7150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7154: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7154u;
    {
        const bool branch_taken_0x1a7154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7154) {
            ctx->pc = 0x1A7164u;
            return;
        }
    }
    ctx->pc = 0x1A715Cu;
    // 0x1a715c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A715Cu;
    {
        const bool branch_taken_0x1a715c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a715c) {
            ctx->pc = 0x1A7168u;
            return;
        }
    }
    ctx->pc = 0x1A7164u;
}
