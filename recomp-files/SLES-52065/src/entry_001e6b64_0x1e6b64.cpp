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

// Function: entry_001e6b64
// Address: 0x1e6b64 - 0x1e6b88
void entry_001e6b64_0x1e6b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6b64_0x1e6b64");
#endif

    ctx->pc = 0x1e6b64u;

    // 0x1e6b64: 0x0  nop
    ctx->pc = 0x1e6b64u;
    // NOP
    // 0x1e6b68: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x1e6b68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e6b6c: 0xc7082b  sltu        $at, $a2, $a3
    ctx->pc = 0x1e6b6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1e6b70: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6B70u;
    {
        const bool branch_taken_0x1e6b70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6b70) {
            ctx->pc = 0x1E6B88u;
            return;
        }
    }
    ctx->pc = 0x1E6B78u;
    // 0x1e6b78: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x1e6b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1e6b7c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1e6b7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e6b80: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1E6B80u;
    {
        const bool branch_taken_0x1e6b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6b80) {
            ctx->pc = 0x1E6B20u;
            return;
        }
    }
    ctx->pc = 0x1E6B88u;
}
