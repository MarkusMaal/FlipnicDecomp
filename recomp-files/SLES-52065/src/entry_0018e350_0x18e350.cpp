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

// Function: entry_0018e350
// Address: 0x18e350 - 0x18e354
void entry_0018e350_0x18e350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e350_0x18e350");
#endif

    ctx->pc = 0x18e350u;

    // 0x18e350: 0xae20045c  sw          $zero, 0x45C($s1)
    ctx->pc = 0x18e350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1116), GPR_U32(ctx, 0));
    ctx->pc = 0x18e354u;
}
