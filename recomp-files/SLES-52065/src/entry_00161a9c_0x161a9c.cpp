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

// Function: entry_00161a9c
// Address: 0x161a9c - 0x161aac
void entry_00161a9c_0x161a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161a9c_0x161a9c");
#endif

    ctx->pc = 0x161a9cu;

    // 0x161a9c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x161a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x161aa0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x161aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x161aa4: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x161aa4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x161aa8: 0x0  nop
    ctx->pc = 0x161aa8u;
    // NOP
    ctx->pc = 0x161aacu;
}
