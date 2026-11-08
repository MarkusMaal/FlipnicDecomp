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

// Function: entry_001fefc8
// Address: 0x1fefc8 - 0x1fefdc
void entry_001fefc8_0x1fefc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fefc8_0x1fefc8");
#endif

    ctx->pc = 0x1fefc8u;

    // 0x1fefc8: 0x2c620555  sltiu       $v0, $v1, 0x555
    ctx->pc = 0x1fefc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x1fefcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEFCCu;
    {
        const bool branch_taken_0x1fefcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFCCu;
        // 0x1fefd0: 0x111482  srl         $v0, $s1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefcc) {
            ctx->pc = 0x1FEFDCu;
            return;
        }
    }
    ctx->pc = 0x1FEFD4u;
    // 0x1fefd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FEFD4u;
    {
        const bool branch_taken_0x1fefd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFD4u;
        // 0x1fefd8: 0x244b007c  addiu       $t3, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefd4) {
            ctx->pc = 0x1FEFE0u;
            return;
        }
    }
    ctx->pc = 0x1FEFDCu;
}
