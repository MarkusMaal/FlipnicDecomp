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

// Function: entry_0014dbec
// Address: 0x14dbec - 0x14dbf4
void entry_0014dbec_0x14dbec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dbec_0x14dbec");
#endif

    ctx->pc = 0x14dbecu;

    // 0x14dbec: 0x0  nop
    ctx->pc = 0x14dbecu;
    // NOP
    // 0x14dbf0: 0x3450ffff  ori         $s0, $v0, 0xFFFF
    ctx->pc = 0x14dbf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x14dbf4u;
}
