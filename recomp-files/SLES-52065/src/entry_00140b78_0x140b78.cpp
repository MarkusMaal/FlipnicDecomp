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

// Function: entry_00140b78
// Address: 0x140b78 - 0x140b98
void entry_00140b78_0x140b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140b78_0x140b78");
#endif

    ctx->pc = 0x140b78u;

    // 0x140b78: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x140b78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x140b7c: 0x1884023  subu        $t0, $t4, $t0
    ctx->pc = 0x140b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x140b80: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x140b80u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x140b84: 0x27af0040  addiu       $t7, $sp, 0x40
    ctx->pc = 0x140b84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x140b88: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x140b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x140b8c: 0xafa90044  sw          $t1, 0x44($sp)
    ctx->pc = 0x140b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 9));
    // 0x140b90: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x140b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x140b94: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x140b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    ctx->pc = 0x140b98u;
}
