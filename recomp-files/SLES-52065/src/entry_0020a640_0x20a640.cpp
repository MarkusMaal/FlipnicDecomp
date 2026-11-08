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

// Function: entry_0020a640
// Address: 0x20a640 - 0x20a64c
void entry_0020a640_0x20a640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a640_0x20a640");
#endif

    ctx->pc = 0x20a640u;

    // 0x20a640: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x20a640u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x20a644: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x20a644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x20a648: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20a648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->pc = 0x20a64cu;
}
