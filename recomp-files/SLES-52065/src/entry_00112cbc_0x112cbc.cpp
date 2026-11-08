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

// Function: entry_00112cbc
// Address: 0x112cbc - 0x112cc8
void entry_00112cbc_0x112cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112cbc_0x112cbc");
#endif

    ctx->pc = 0x112cbcu;

    // 0x112cbc: 0x0  nop
    ctx->pc = 0x112cbcu;
    // NOP
    // 0x112cc0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x112cc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x112cc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x112cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x112cc8u;
}
