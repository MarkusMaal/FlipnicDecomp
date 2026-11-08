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

// Function: entry_00110acc
// Address: 0x110acc - 0x110ad8
void entry_00110acc_0x110acc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110acc_0x110acc");
#endif

    ctx->pc = 0x110accu;

    // 0x110acc: 0x0  nop
    ctx->pc = 0x110accu;
    // NOP
    // 0x110ad0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x110ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x110ad4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x110ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x110ad8u;
}
