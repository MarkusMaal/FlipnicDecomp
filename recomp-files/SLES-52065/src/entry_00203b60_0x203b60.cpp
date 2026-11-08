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

// Function: entry_00203b60
// Address: 0x203b60 - 0x203b88
void entry_00203b60_0x203b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203b60_0x203b60");
#endif

    ctx->pc = 0x203b60u;

    // 0x203b60: 0x27a201d4  addiu       $v0, $sp, 0x1D4
    ctx->pc = 0x203b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x203b64: 0x27a301d8  addiu       $v1, $sp, 0x1D8
    ctx->pc = 0x203b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x203b68: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x203b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x203b6c: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x203b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x203b70: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x203b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x203b74: 0xafb001ec  sw          $s0, 0x1EC($sp)
    ctx->pc = 0x203b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 16));
    // 0x203b78: 0xafa001f0  sw          $zero, 0x1F0($sp)
    ctx->pc = 0x203b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
    // 0x203b7c: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x203b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
    // 0x203b80: 0xafa3021c  sw          $v1, 0x21C($sp)
    ctx->pc = 0x203b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 3));
    // 0x203b84: 0x0  nop
    ctx->pc = 0x203b84u;
    // NOP
    ctx->pc = 0x203b88u;
}
