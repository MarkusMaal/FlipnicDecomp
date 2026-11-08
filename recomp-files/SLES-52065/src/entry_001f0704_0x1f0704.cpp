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

// Function: entry_001f0704
// Address: 0x1f0704 - 0x1f0718
void entry_001f0704_0x1f0704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0704_0x1f0704");
#endif

    ctx->pc = 0x1f0704u;

    // 0x1f0704: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0704u;
    {
        const bool branch_taken_0x1f0704 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0704) {
            ctx->pc = 0x1F0718u;
            return;
        }
    }
    ctx->pc = 0x1F070Cu;
    // 0x1f070c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1f070cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f0710: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0710u;
    {
        const bool branch_taken_0x1f0710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0710u;
        // 0x1f0714: 0x2e620401  sltiu       $v0, $s3, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0710) {
            ctx->pc = 0x1F0728u;
            return;
        }
    }
    ctx->pc = 0x1F0718u;
}
