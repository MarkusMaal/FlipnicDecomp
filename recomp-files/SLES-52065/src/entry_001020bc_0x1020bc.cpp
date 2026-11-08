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

// Function: entry_001020bc
// Address: 0x1020bc - 0x1020cc
void entry_001020bc_0x1020bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001020bc_0x1020bc");
#endif

    ctx->pc = 0x1020bcu;

    // 0x1020bc: 0x0  nop
    ctx->pc = 0x1020bcu;
    // NOP
    // 0x1020c0: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x1020c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1020c4: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1020C4u;
    {
        const bool branch_taken_0x1020c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1020c4) {
            ctx->pc = 0x102034u;
            return;
        }
    }
    ctx->pc = 0x1020CCu;
}
