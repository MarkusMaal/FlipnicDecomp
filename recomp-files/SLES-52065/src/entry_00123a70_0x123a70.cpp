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

// Function: entry_00123a70
// Address: 0x123a70 - 0x123a94
void entry_00123a70_0x123a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123a70_0x123a70");
#endif

    ctx->pc = 0x123a70u;

    // 0x123a70: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x123a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x123a74: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x123a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x123a78: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x123a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x123a7c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x123A7Cu;
    {
        const bool branch_taken_0x123a7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x123a7c) {
            ctx->pc = 0x123A94u;
            return;
        }
    }
    ctx->pc = 0x123A84u;
    // 0x123a84: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x123a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x123a88: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x123a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x123a8c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x123a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x123a90: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x123a90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x123a94u;
}
