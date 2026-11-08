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

// Function: entry_00143c5c
// Address: 0x143c5c - 0x143c6c
void entry_00143c5c_0x143c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143c5c_0x143c5c");
#endif

    ctx->pc = 0x143c5cu;

    // 0x143c5c: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x143c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x143c60: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x143c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c64: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x143c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x143c68: 0xaec30004  sw          $v1, 0x4($s6)
    ctx->pc = 0x143c68u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x143c6cu;
}
