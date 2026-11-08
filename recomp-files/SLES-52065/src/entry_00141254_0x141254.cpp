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

// Function: entry_00141254
// Address: 0x141254 - 0x141274
void entry_00141254_0x141254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141254_0x141254");
#endif

    ctx->pc = 0x141254u;

    // 0x141254: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x141254u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x141258: 0x27ab0100  addiu       $t3, $sp, 0x100
    ctx->pc = 0x141258u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14125c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x14125cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x141260: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x141260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x141264: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x141264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x141268: 0xafa50104  sw          $a1, 0x104($sp)
    ctx->pc = 0x141268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 5));
    // 0x14126c: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x14126cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
    // 0x141270: 0xafb20100  sw          $s2, 0x100($sp)
    ctx->pc = 0x141270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 18));
    ctx->pc = 0x141274u;
}
