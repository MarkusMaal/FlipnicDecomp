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

// Function: entry_00139d8c
// Address: 0x139d8c - 0x139da4
void entry_00139d8c_0x139d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139d8c_0x139d8c");
#endif

    ctx->pc = 0x139d8cu;

    // 0x139d8c: 0x0  nop
    ctx->pc = 0x139d8cu;
    // NOP
    // 0x139d90: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x139d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x139d94: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x139d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x139d98: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x139d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x139d9c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x139D9Cu;
    {
        const bool branch_taken_0x139d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139d9c) {
            ctx->pc = 0x139D6Cu;
            return;
        }
    }
    ctx->pc = 0x139DA4u;
}
