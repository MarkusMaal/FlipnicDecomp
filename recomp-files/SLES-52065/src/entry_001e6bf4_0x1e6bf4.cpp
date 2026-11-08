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

// Function: entry_001e6bf4
// Address: 0x1e6bf4 - 0x1e6c18
void entry_001e6bf4_0x1e6bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6bf4_0x1e6bf4");
#endif

    ctx->pc = 0x1e6bf4u;

    // 0x1e6bf4: 0x0  nop
    ctx->pc = 0x1e6bf4u;
    // NOP
    // 0x1e6bf8: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x1e6bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e6bfc: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x1e6bfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e6c00: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6C00u;
    {
        const bool branch_taken_0x1e6c00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6c00) {
            ctx->pc = 0x1E6C18u;
            return;
        }
    }
    ctx->pc = 0x1E6C08u;
    // 0x1e6c08: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x1e6c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1e6c0c: 0xaa102b  sltu        $v0, $a1, $t2
    ctx->pc = 0x1e6c0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1e6c10: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1E6C10u;
    {
        const bool branch_taken_0x1e6c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6c10) {
            ctx->pc = 0x1E6BB0u;
            return;
        }
    }
    ctx->pc = 0x1E6C18u;
}
