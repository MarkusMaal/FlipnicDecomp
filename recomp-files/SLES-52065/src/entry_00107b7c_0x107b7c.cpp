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

// Function: entry_00107b7c
// Address: 0x107b7c - 0x107b88
void entry_00107b7c_0x107b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107b7c_0x107b7c");
#endif

    ctx->pc = 0x107b7cu;

    // 0x107b7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x107b7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x107b80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b84: 0xca6021  addu        $t4, $a2, $t2
    ctx->pc = 0x107b84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    ctx->pc = 0x107b88u;
}
