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

// Function: entry_001aeea8
// Address: 0x1aeea8 - 0x1aeedc
void entry_001aeea8_0x1aeea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aeea8_0x1aeea8");
#endif

    ctx->pc = 0x1aeea8u;

    // 0x1aeea8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1AEEA8u;
    {
        const bool branch_taken_0x1aeea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aeea8) {
            ctx->pc = 0x1AEEDCu;
            return;
        }
    }
    ctx->pc = 0x1AEEB0u;
    // 0x1aeeb0: 0x8e8307e0  lw          $v1, 0x7E0($s4)
    ctx->pc = 0x1aeeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2016)));
    // 0x1aeeb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1aeeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aeeb8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1aeeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1aeebc: 0x8e8406bc  lw          $a0, 0x6BC($s4)
    ctx->pc = 0x1aeebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1724)));
    // 0x1aeec0: 0x8e85068c  lw          $a1, 0x68C($s4)
    ctx->pc = 0x1aeec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1676)));
    // 0x1aeec4: 0x8e860670  lw          $a2, 0x670($s4)
    ctx->pc = 0x1aeec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x1aeec8: 0x8e8307e0  lw          $v1, 0x7E0($s4)
    ctx->pc = 0x1aeec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2016)));
    // 0x1aeecc: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x1aeeccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x1aeed0: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x1aeed0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
    // 0x1aeed4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEED4u;
    {
        const bool branch_taken_0x1aeed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEED4u;
        // 0x1aeed8: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeed4) {
            ctx->pc = 0x1AEEE4u;
            return;
        }
    }
    ctx->pc = 0x1AEEDCu;
}
