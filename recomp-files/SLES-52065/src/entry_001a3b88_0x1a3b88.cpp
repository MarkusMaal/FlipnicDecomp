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

// Function: entry_001a3b88
// Address: 0x1a3b88 - 0x1a3ba8
void entry_001a3b88_0x1a3b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3b88_0x1a3b88");
#endif

    ctx->pc = 0x1a3b88u;

    // 0x1a3b88: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1a3b88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1a3b8c: 0x8c630690  lw          $v1, 0x690($v1)
    ctx->pc = 0x1a3b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1680)));
    // 0x1a3b90: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1a3b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1a3b94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a3b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a3b98: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a3b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a3b9c: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a3b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1a3ba0: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1a3ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x1a3ba4: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x1a3ba4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    ctx->pc = 0x1a3ba8u;
}
