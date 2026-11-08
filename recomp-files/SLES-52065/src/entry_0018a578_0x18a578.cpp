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

// Function: entry_0018a578
// Address: 0x18a578 - 0x18a57c
void entry_0018a578_0x18a578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a578_0x18a578");
#endif

    ctx->pc = 0x18a578u;

    // 0x18a578: 0xaf9480d8  sw          $s4, -0x7F28($gp)
    ctx->pc = 0x18a578u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934744), GPR_U32(ctx, 20));
    ctx->pc = 0x18a57cu;
}
