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

// Function: entry_0014167c
// Address: 0x14167c - 0x14168c
void entry_0014167c_0x14167c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014167c_0x14167c");
#endif

    ctx->pc = 0x14167cu;

    // 0x14167c: 0xae54000c  sw          $s4, 0xC($s2)
    ctx->pc = 0x14167cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
    // 0x141680: 0xae560004  sw          $s6, 0x4($s2)
    ctx->pc = 0x141680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 22));
    // 0x141684: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x141684u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x141688: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x141688u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x14168cu;
}
