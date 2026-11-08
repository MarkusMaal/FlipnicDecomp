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

// Function: entry_001d9ac0
// Address: 0x1d9ac0 - 0x1d9ae4
void entry_001d9ac0_0x1d9ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9ac0_0x1d9ac0");
#endif

    ctx->pc = 0x1d9ac0u;

    // 0x1d9ac0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1d9ac0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9ac4: 0x4630007  bgezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9AC4u;
    {
        const bool branch_taken_0x1d9ac4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1d9ac4) {
            ctx->pc = 0x1D9AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9AC4u;
            // 0x1d9ac8: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9AE4u;
            return;
        }
    }
    ctx->pc = 0x1D9ACCu;
    // 0x1d9acc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d9accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d9ad0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1d9ad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9ad4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d9ad8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d9ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1d9adc: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x1d9adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x1d9ae0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1d9ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->pc = 0x1d9ae4u;
}
