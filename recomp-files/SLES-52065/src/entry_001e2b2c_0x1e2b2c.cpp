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

// Function: entry_001e2b2c
// Address: 0x1e2b2c - 0x1e2b4c
void entry_001e2b2c_0x1e2b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2b2c_0x1e2b2c");
#endif

    ctx->pc = 0x1e2b2cu;

    // 0x1e2b2c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1e2b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e2b30: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1e2b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1e2b34: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1e2b34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e2b38: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2B38u;
    {
        const bool branch_taken_0x1e2b38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B38u;
        // 0x1e2b3c: 0x24620002  addiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b38) {
            ctx->pc = 0x1E2B4Cu;
            return;
        }
    }
    ctx->pc = 0x1E2B40u;
    // 0x1e2b40: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1e2b40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1e2b44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2B44u;
    {
        const bool branch_taken_0x1e2b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B44u;
        // 0x1e2b48: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b44) {
            ctx->pc = 0x1E2B60u;
            return;
        }
    }
    ctx->pc = 0x1E2B4Cu;
}
