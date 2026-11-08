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

// Function: caseD_0
// Address: 0x1ba8bc - 0x1ba8d8
void caseD_0_0x1ba8bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1ba8bc");
#endif

    ctx->pc = 0x1ba8bcu;

    // 0x1ba8bc: 0x8c8300ec  lw          $v1, 0xEC($a0)
    ctx->pc = 0x1ba8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1ba8c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ba8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ba8c4: 0xac8300ec  sw          $v1, 0xEC($a0)
    ctx->pc = 0x1ba8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 3));
    // 0x1ba8c8: 0x8c8300ec  lw          $v1, 0xEC($a0)
    ctx->pc = 0x1ba8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1ba8cc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA8CCu;
    {
        const bool branch_taken_0x1ba8cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba8cc) {
            ctx->pc = 0x1BA8D8u;
            return;
        }
    }
    ctx->pc = 0x1BA8D4u;
    // 0x1ba8d4: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x1ba8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    ctx->pc = 0x1ba8d8u;
}
