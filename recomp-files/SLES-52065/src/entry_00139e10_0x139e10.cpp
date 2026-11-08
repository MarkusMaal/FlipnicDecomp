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

// Function: entry_00139e10
// Address: 0x139e10 - 0x139e18
void entry_00139e10_0x139e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139e10_0x139e10");
#endif

    ctx->pc = 0x139e10u;

    // 0x139e10: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x139e10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x139e14: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x139e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    ctx->pc = 0x139e18u;
}
