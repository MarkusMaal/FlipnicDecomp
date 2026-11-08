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

// Function: entry_00121650
// Address: 0x121650 - 0x121658
void entry_00121650_0x121650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121650_0x121650");
#endif

    ctx->pc = 0x121650u;

    // 0x121650: 0xaed20004  sw          $s2, 0x4($s6)
    ctx->pc = 0x121650u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 18));
    // 0x121654: 0xaed30000  sw          $s3, 0x0($s6)
    ctx->pc = 0x121654u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
    ctx->pc = 0x121658u;
}
