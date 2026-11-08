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

// Function: entry_0012fc64
// Address: 0x12fc64 - 0x12fc7c
void entry_0012fc64_0x12fc64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fc64_0x12fc64");
#endif

    ctx->pc = 0x12fc64u;

    // 0x12fc64: 0x0  nop
    ctx->pc = 0x12fc64u;
    // NOP
    // 0x12fc68: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x12fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x12fc6c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x12fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x12fc70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12fc70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12fc74: 0xa4430170  sh          $v1, 0x170($v0)
    ctx->pc = 0x12fc74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 368), (uint16_t)GPR_U32(ctx, 3));
    // 0x12fc78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12fc78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x12fc7cu;
}
