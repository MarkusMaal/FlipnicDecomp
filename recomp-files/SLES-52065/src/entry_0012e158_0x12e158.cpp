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

// Function: entry_0012e158
// Address: 0x12e158 - 0x12e168
void entry_0012e158_0x12e158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e158_0x12e158");
#endif

    ctx->pc = 0x12e158u;

    // 0x12e158: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x12e158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x12e15c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x12e15cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e160: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x12E160u;
    {
        const bool branch_taken_0x12e160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e160) {
            ctx->pc = 0x12E128u;
            return;
        }
    }
    ctx->pc = 0x12E168u;
}
