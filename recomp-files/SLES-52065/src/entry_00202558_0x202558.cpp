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

// Function: entry_00202558
// Address: 0x202558 - 0x202564
void entry_00202558_0x202558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202558_0x202558");
#endif

    ctx->pc = 0x202558u;

    // 0x202558: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x202558u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x20255c: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x20255cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x202560: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x202560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    ctx->pc = 0x202564u;
}
