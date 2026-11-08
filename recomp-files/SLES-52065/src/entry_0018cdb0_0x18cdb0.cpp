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

// Function: entry_0018cdb0
// Address: 0x18cdb0 - 0x18cde0
void entry_0018cdb0_0x18cdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cdb0_0x18cdb0");
#endif

    ctx->pc = 0x18cdb0u;

    // 0x18cdb0: 0x8e02045c  lw          $v0, 0x45C($s0)
    ctx->pc = 0x18cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1116)));
    // 0x18cdb4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x18CDB4u;
    {
        const bool branch_taken_0x18cdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cdb4) {
            ctx->pc = 0x18CE64u;
            return;
        }
    }
    ctx->pc = 0x18CDBCu;
    // 0x18cdbc: 0x8e03271c  lw          $v1, 0x271C($s0)
    ctx->pc = 0x18cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10012)));
    // 0x18cdc0: 0x8e020450  lw          $v0, 0x450($s0)
    ctx->pc = 0x18cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1104)));
    // 0x18cdc4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18CDC4u;
    {
        const bool branch_taken_0x18cdc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18cdc4) {
            ctx->pc = 0x18CDE8u;
            return;
        }
    }
    ctx->pc = 0x18CDCCu;
    // 0x18cdcc: 0x8e020474  lw          $v0, 0x474($s0)
    ctx->pc = 0x18cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1140)));
    // 0x18cdd0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CDD0u;
    {
        const bool branch_taken_0x18cdd0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18cdd0) {
            ctx->pc = 0x18CDE0u;
            return;
        }
    }
    ctx->pc = 0x18CDD8u;
    // 0x18cdd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18cddc: 0xae020474  sw          $v0, 0x474($s0)
    ctx->pc = 0x18cddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1140), GPR_U32(ctx, 2));
    ctx->pc = 0x18cde0u;
}
