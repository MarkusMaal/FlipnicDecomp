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

// Function: entry_00143c34
// Address: 0x143c34 - 0x143c48
void entry_00143c34_0x143c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143c34_0x143c34");
#endif

    ctx->pc = 0x143c34u;

    // 0x143c34: 0x0  nop
    ctx->pc = 0x143c34u;
    // NOP
    // 0x143c38: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x143c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x143c3c: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x143c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x143c40: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x143C40u;
    {
        const bool branch_taken_0x143c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143c40) {
            ctx->pc = 0x143C24u;
            return;
        }
    }
    ctx->pc = 0x143C48u;
}
