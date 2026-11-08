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

// Function: entry_00163b5c
// Address: 0x163b5c - 0x163b6c
void entry_00163b5c_0x163b5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163b5c_0x163b5c");
#endif

    ctx->pc = 0x163b5cu;

    // 0x163b5c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x163b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x163b60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163b64: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x163b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x163b68: 0xae620350  sw          $v0, 0x350($s3)
    ctx->pc = 0x163b68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 848), GPR_U32(ctx, 2));
    ctx->pc = 0x163b6cu;
}
