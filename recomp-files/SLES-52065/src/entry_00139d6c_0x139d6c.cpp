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

// Function: entry_00139d6c
// Address: 0x139d6c - 0x139d8c
void entry_00139d6c_0x139d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139d6c_0x139d6c");
#endif

    ctx->pc = 0x139d6cu;

    // 0x139d6c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x139d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x139d70: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x139d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x139d74: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x139d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x139d78: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x139d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x139d7c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x139d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x139d80: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x139d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x139d84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x139d84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x139d88: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x139d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    ctx->pc = 0x139d8cu;
}
