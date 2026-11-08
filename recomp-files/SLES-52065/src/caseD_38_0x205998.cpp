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

// Function: caseD_38
// Address: 0x205998 - 0x2059c4
void caseD_38_0x205998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_38_0x205998");
#endif

    ctx->pc = 0x205998u;

    // 0x205998: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x205998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x20599c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x20599cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2059a0: 0x24425390  addiu       $v0, $v0, 0x5390
    ctx->pc = 0x2059a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21392));
    // 0x2059a4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2059a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2059a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2059a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2059ac: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x2059acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2059b0: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x2059b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2059b4: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2059B4u;
    {
        const bool branch_taken_0x2059b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2059B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059B4u;
        // 0x2059b8: 0xafa30260  sw          $v1, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2059b4) {
            ctx->pc = 0x205A54u;
            return;
        }
    }
    ctx->pc = 0x2059BCu;
    // 0x2059bc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2059BCu;
    {
        const bool branch_taken_0x2059bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2059C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2059BCu;
        // 0x2059c0: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2059bc) {
            ctx->pc = 0x205A0Cu;
            return;
        }
    }
    ctx->pc = 0x2059C4u;
}
