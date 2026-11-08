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

// Function: entry_00200bc4
// Address: 0x200bc4 - 0x200bc8
void entry_00200bc4_0x200bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200bc4_0x200bc4");
#endif

    ctx->pc = 0x200bc4u;

    // 0x200bc4: 0x24160010  addiu       $s6, $zero, 0x10
    ctx->pc = 0x200bc4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x200bc8u;
}
