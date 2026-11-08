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

// Function: entry_0015af7c
// Address: 0x15af7c - 0x15af80
void entry_0015af7c_0x15af7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015af7c_0x15af7c");
#endif

    ctx->pc = 0x15af7cu;

    // 0x15af7c: 0xa62001e8  sh          $zero, 0x1E8($s1)
    ctx->pc = 0x15af7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 488), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x15af80u;
}
