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

// Function: entry_00174694
// Address: 0x174694 - 0x1746a4
void entry_00174694_0x174694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174694_0x174694");
#endif

    ctx->pc = 0x174694u;

    // 0x174694: 0x0  nop
    ctx->pc = 0x174694u;
    // NOP
    // 0x174698: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x174698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x17469c: 0x1440ff9a  bnez        $v0, . + 4 + (-0x66 << 2)
    ctx->pc = 0x17469Cu;
    {
        const bool branch_taken_0x17469c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17469c) {
            ctx->pc = 0x174508u;
            return;
        }
    }
    ctx->pc = 0x1746A4u;
}
