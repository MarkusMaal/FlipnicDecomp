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

// Function: entry_001ff408
// Address: 0x1ff408 - 0x1ff42c
void entry_001ff408_0x1ff408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff408_0x1ff408");
#endif

    ctx->pc = 0x1ff408u;

label_1ff408:
    // 0x1ff408: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x1ff408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x1ff40c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1ff40cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1ff410: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1ff410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ff414: 0x0  nop
    ctx->pc = 0x1ff414u;
    // NOP
    // 0x1ff418: 0x0  nop
    ctx->pc = 0x1ff418u;
    // NOP
    // 0x1ff41c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FF41Cu;
    {
        const bool branch_taken_0x1ff41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff41c) {
            ctx->pc = 0x1FF408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff408;
        }
    }
    ctx->pc = 0x1FF424u;
    // 0x1ff424: 0x1000ffc0  b           . + 4 + (-0x40 << 2)
    ctx->pc = 0x1FF424u;
    {
        const bool branch_taken_0x1ff424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF424u;
        // 0x1ff428: 0xb10c0  sll         $v0, $t3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff424) {
            ctx->pc = 0x1FF328u;
            return;
        }
    }
    ctx->pc = 0x1FF42Cu;
}
