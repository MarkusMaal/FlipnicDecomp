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

// Function: entry_001c6048
// Address: 0x1c6048 - 0x1c606c
void entry_001c6048_0x1c6048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6048_0x1c6048");
#endif

    ctx->pc = 0x1c6048u;

    // 0x1c6048: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1C6048u;
    {
        const bool branch_taken_0x1c6048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6048) {
            ctx->pc = 0x1C6084u;
            return;
        }
    }
    ctx->pc = 0x1C6050u;
    // 0x1c6050: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x1c6050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1c6054: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c6054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c6058: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x1c6058u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x1c605c: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x1c605cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1c6060: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6060u;
    {
        const bool branch_taken_0x1c6060 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6060u;
        // 0x1c6064: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6060) {
            ctx->pc = 0x1C606Cu;
            return;
        }
    }
    ctx->pc = 0x1C6068u;
    // 0x1c6068: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x1c6068u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    ctx->pc = 0x1c606cu;
}
