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

// Function: entry_001708fc
// Address: 0x1708fc - 0x170900
void entry_001708fc_0x1708fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001708fc_0x1708fc");
#endif

    ctx->pc = 0x1708fcu;

    // 0x1708fc: 0x24e7f500  addiu       $a3, $a3, -0xB00
    ctx->pc = 0x1708fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964480));
    ctx->pc = 0x170900u;
}
