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

// Function: entry_0019ec98
// Address: 0x19ec98 - 0x19ecbc
void entry_0019ec98_0x19ec98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ec98_0x19ec98");
#endif

    ctx->pc = 0x19ec98u;

    // 0x19ec98: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x19ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
    // 0x19ec9c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x19ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x19eca0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19eca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19eca4: 0xac8228e4  sw          $v0, 0x28E4($a0)
    ctx->pc = 0x19eca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10468), GPR_U32(ctx, 2));
    // 0x19eca8: 0x8e830664  lw          $v1, 0x664($s4)
    ctx->pc = 0x19eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
    // 0x19ecac: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19ecb0: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x19ecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x19ecb4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x19ECB4u;
    {
        const bool branch_taken_0x19ecb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ECB4u;
        // 0x19ecb8: 0xac4328f0  sw          $v1, 0x28F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 10480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ecb4) {
            ctx->pc = 0x19ED00u;
            return;
        }
    }
    ctx->pc = 0x19ECBCu;
}
