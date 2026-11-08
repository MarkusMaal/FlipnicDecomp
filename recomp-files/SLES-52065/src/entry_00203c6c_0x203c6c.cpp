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

// Function: entry_00203c6c
// Address: 0x203c6c - 0x203c80
void entry_00203c6c_0x203c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203c6c_0x203c6c");
#endif

    ctx->pc = 0x203c6cu;

    // 0x203c6c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x203c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x203c70: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x203c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203c74: 0x2be03  sra         $s7, $v0, 24
    ctx->pc = 0x203c74u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 24));
    // 0x203c78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x203c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x203c7c: 0xafa401ec  sw          $a0, 0x1EC($sp)
    ctx->pc = 0x203c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 4));
    ctx->pc = 0x203c80u;
}
