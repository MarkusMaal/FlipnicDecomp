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

// Function: entry_001767e4
// Address: 0x1767e4 - 0x1767fc
void entry_001767e4_0x1767e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001767e4_0x1767e4");
#endif

    ctx->pc = 0x1767e4u;

    // 0x1767e4: 0x0  nop
    ctx->pc = 0x1767e4u;
    // NOP
    // 0x1767e8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1767E8u;
    {
        const bool branch_taken_0x1767e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1767e8) {
            ctx->pc = 0x1767FCu;
            return;
        }
    }
    ctx->pc = 0x1767F0u;
    // 0x1767f0: 0x8e620c20  lw          $v0, 0xC20($s3)
    ctx->pc = 0x1767f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3104)));
    // 0x1767f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1767f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1767f8: 0xae620c20  sw          $v0, 0xC20($s3)
    ctx->pc = 0x1767f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3104), GPR_U32(ctx, 2));
    ctx->pc = 0x1767fcu;
}
