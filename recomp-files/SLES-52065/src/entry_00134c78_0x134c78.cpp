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

// Function: entry_00134c78
// Address: 0x134c78 - 0x134c7c
void entry_00134c78_0x134c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134c78_0x134c78");
#endif

    ctx->pc = 0x134c78u;

    // 0x134c78: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x134c78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
    ctx->pc = 0x134c7cu;
}
