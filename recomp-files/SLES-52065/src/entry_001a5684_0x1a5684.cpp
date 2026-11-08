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

// Function: entry_001a5684
// Address: 0x1a5684 - 0x1a5690
void entry_001a5684_0x1a5684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5684_0x1a5684");
#endif

    ctx->pc = 0x1a5684u;

    // 0x1a5684: 0x0  nop
    ctx->pc = 0x1a5684u;
    // NOP
    // 0x1a5688: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x1a5688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1a568c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1a568cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x1a5690u;
}
