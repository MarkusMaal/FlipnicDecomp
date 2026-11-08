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

// Function: entry_00137ea8
// Address: 0x137ea8 - 0x137eb0
void entry_00137ea8_0x137ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137ea8_0x137ea8");
#endif

    ctx->pc = 0x137ea8u;

    // 0x137ea8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x137ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x137eac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x137eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x137eb0u;
}
