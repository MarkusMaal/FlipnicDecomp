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

// Function: entry_00142c7c
// Address: 0x142c7c - 0x142c9c
void entry_00142c7c_0x142c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142c7c_0x142c7c");
#endif

    ctx->pc = 0x142c7cu;

    // 0x142c7c: 0x0  nop
    ctx->pc = 0x142c7cu;
    // NOP
    // 0x142c80: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x142c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x142c84: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x142c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x142c88: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x142c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x142c8c: 0x1440ff59  bnez        $v0, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x142C8Cu;
    {
        const bool branch_taken_0x142c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142c8c) {
            ctx->pc = 0x1429F4u;
            return;
        }
    }
    ctx->pc = 0x142C94u;
    // 0x142c94: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x142C94u;
    {
        const bool branch_taken_0x142c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142c94) {
            ctx->pc = 0x142F44u;
            return;
        }
    }
    ctx->pc = 0x142C9Cu;
}
