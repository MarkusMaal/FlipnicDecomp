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

// Function: entry_0016e08c
// Address: 0x16e08c - 0x16e098
void entry_0016e08c_0x16e08c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e08c_0x16e08c");
#endif

    ctx->pc = 0x16e08cu;

    // 0x16e08c: 0x90620024  lbu         $v0, 0x24($v1)
    ctx->pc = 0x16e08cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x16e090: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x16e090u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16e094: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16e094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16e098u;
}
