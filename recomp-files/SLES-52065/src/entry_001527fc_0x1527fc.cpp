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

// Function: entry_001527fc
// Address: 0x1527fc - 0x152804
void entry_001527fc_0x1527fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001527fc_0x1527fc");
#endif

    ctx->pc = 0x1527fcu;

    // 0x1527fc: 0x0  nop
    ctx->pc = 0x1527fcu;
    // NOP
    // 0x152800: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x152800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x152804u;
}
