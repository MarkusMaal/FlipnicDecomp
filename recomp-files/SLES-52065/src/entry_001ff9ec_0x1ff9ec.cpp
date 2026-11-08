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

// Function: entry_001ff9ec
// Address: 0x1ff9ec - 0x1ffa10
void entry_001ff9ec_0x1ff9ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff9ec_0x1ff9ec");
#endif

    ctx->pc = 0x1ff9ecu;

label_1ff9ec:
    // 0x1ff9ec: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x1ff9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x1ff9f0: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1ff9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1ff9f4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1ff9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1ff9f8: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x1ff9f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1ff9fc: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x1ff9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x1ffa00: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FFA00u;
    {
        const bool branch_taken_0x1ffa00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA00u;
        // 0x1ffa04: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa00) {
            ctx->pc = 0x1FF9ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff9ec;
        }
    }
    ctx->pc = 0x1FFA08u;
    // 0x1ffa08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFA08u;
    {
        const bool branch_taken_0x1ffa08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA08u;
        // 0x1ffa0c: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa08) {
            ctx->pc = 0x1FFA1Cu;
            return;
        }
    }
    ctx->pc = 0x1FFA10u;
}
