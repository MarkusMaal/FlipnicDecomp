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

// Function: entry_00140c88
// Address: 0x140c88 - 0x140ca8
void entry_00140c88_0x140c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140c88_0x140c88");
#endif

    ctx->pc = 0x140c88u;

    // 0x140c88: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x140c88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x140c8c: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x140c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x140c90: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x140c90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x140c94: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x140c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140c98: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x140c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x140c9c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x140c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x140ca0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x140ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140ca4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x140ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x140ca8u;
}
