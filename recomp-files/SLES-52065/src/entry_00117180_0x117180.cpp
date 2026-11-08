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

// Function: entry_00117180
// Address: 0x117180 - 0x11718c
void entry_00117180_0x117180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117180_0x117180");
#endif

    ctx->pc = 0x117180u;

    // 0x117180: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x117180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x117184: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x117184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x117188: 0x24630a30  addiu       $v1, $v1, 0xA30
    ctx->pc = 0x117188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2608));
    ctx->pc = 0x11718cu;
}
