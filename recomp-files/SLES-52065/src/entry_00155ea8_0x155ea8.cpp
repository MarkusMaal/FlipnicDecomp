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

// Function: entry_00155ea8
// Address: 0x155ea8 - 0x155eac
void entry_00155ea8_0x155ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155ea8_0x155ea8");
#endif

    ctx->pc = 0x155ea8u;

    // 0x155ea8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x155ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x155eacu;
}
