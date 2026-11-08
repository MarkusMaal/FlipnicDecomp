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

// Function: entry_001ff854
// Address: 0x1ff854 - 0x1ff874
void entry_001ff854_0x1ff854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff854_0x1ff854");
#endif

    ctx->pc = 0x1ff854u;

label_1ff854:
    // 0x1ff854: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x1ff854u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff858: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x1ff858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x1ff85c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1ff85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1ff860: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x1ff860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ff864: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x1ff864u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x1ff868: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FF868u;
    {
        const bool branch_taken_0x1ff868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF868u;
        // 0x1ff86c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff868) {
            ctx->pc = 0x1FF854u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff854;
        }
    }
    ctx->pc = 0x1FF870u;
    // 0x1ff870: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1ff870u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ff874u;
}
