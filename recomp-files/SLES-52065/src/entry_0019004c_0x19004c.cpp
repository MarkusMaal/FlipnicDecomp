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

// Function: entry_0019004c
// Address: 0x19004c - 0x190084
void entry_0019004c_0x19004c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019004c_0x19004c");
#endif

    ctx->pc = 0x19004cu;

    // 0x19004c: 0xd11821  addu        $v1, $a2, $s1
    ctx->pc = 0x19004cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x190050: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x190050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x190054: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x190054u;
    {
        const bool branch_taken_0x190054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x190054) {
            ctx->pc = 0x190084u;
            return;
        }
    }
    ctx->pc = 0x19005Cu;
    // 0x19005c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x19005cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x190060: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x190060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x190064: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x190064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x190068: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x190068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x19006c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x19006cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x190070: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x190070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x190074: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x190074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x190078: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x190078u;
    {
        const bool branch_taken_0x190078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x190078) {
            ctx->pc = 0x190084u;
            return;
        }
    }
    ctx->pc = 0x190080u;
    // 0x190080: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x190080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x190084u;
}
