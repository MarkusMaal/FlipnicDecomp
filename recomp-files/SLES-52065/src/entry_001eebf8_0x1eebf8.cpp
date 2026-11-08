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

// Function: entry_001eebf8
// Address: 0x1eebf8 - 0x1eec14
void entry_001eebf8_0x1eebf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eebf8_0x1eebf8");
#endif

    ctx->pc = 0x1eebf8u;

label_1eebf8:
    // 0x1eebf8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1eebf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eebfc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEBFCu;
    {
        const bool branch_taken_0x1eebfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eebfc) {
            ctx->pc = 0x1EEC18u;
            return;
        }
    }
    ctx->pc = 0x1EEC04u;
    // 0x1eec04: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1eec04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eec08: 0x1451fffb  bne         $v0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1EEC08u;
    {
        const bool branch_taken_0x1eec08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1EEC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEC08u;
        // 0x1eec0c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eec08) {
            ctx->pc = 0x1EEBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eebf8;
        }
    }
    ctx->pc = 0x1EEC10u;
    // 0x1eec10: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1eec10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->pc = 0x1eec14u;
}
