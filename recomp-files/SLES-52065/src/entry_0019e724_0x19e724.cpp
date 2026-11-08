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

// Function: entry_0019e724
// Address: 0x19e724 - 0x19e730
void entry_0019e724_0x19e724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e724_0x19e724");
#endif

    ctx->pc = 0x19e724u;

    // 0x19e724: 0x0  nop
    ctx->pc = 0x19e724u;
    // NOP
    // 0x19e728: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x19e728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x19e72c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x19e72cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->pc = 0x19e730u;
}
