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

// Function: entry_0010b278
// Address: 0x10b278 - 0x10b28c
void entry_0010b278_0x10b278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b278_0x10b278");
#endif

    ctx->pc = 0x10b278u;

    // 0x10b278: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x10b278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10b27c: 0xac830264  sw          $v1, 0x264($a0)
    ctx->pc = 0x10b27cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 612), GPR_U32(ctx, 3));
    // 0x10b280: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10b280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10b284: 0xac85026c  sw          $a1, 0x26C($a0)
    ctx->pc = 0x10b284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 620), GPR_U32(ctx, 5));
    // 0x10b288: 0xac830274  sw          $v1, 0x274($a0)
    ctx->pc = 0x10b288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 3));
    ctx->pc = 0x10b28cu;
}
