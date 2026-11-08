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

// Function: entry_001e0680
// Address: 0x1e0680 - 0x1e06a8
void entry_001e0680_0x1e0680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0680_0x1e0680");
#endif

    ctx->pc = 0x1e0680u;

label_1e0680:
    // 0x1e0680: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e0680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e0684: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1e0684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1e0688: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1e0688u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e068c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1e068cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1e0690: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x1e0690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1e0694: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0698: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1e0698u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e069c: 0x14e0fff8  bnez        $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E069Cu;
    {
        const bool branch_taken_0x1e069c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E06A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E069Cu;
        // 0x1e06a0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e069c) {
            ctx->pc = 0x1E0680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0680;
        }
    }
    ctx->pc = 0x1E06A4u;
    // 0x1e06a4: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x1e06a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    ctx->pc = 0x1e06a8u;
}
