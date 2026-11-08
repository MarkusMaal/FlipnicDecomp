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

// Function: entry_001cd43c
// Address: 0x1cd43c - 0x1cd490
void entry_001cd43c_0x1cd43c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd43c_0x1cd43c");
#endif

    ctx->pc = 0x1cd43cu;

label_1cd43c:
    // 0x1cd43c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1cd43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cd440: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x1cd440u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cd444: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x1cd444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1cd448: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x1cd448u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cd44c: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x1cd44cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cd450: 0x24a20003  addiu       $v0, $a1, 0x3
    ctx->pc = 0x1cd450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x1cd454: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x1cd454u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cd458: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x1cd458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1cd45c: 0xa0c30004  sb          $v1, 0x4($a2)
    ctx->pc = 0x1cd45cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cd460: 0x24a20005  addiu       $v0, $a1, 0x5
    ctx->pc = 0x1cd460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x1cd464: 0xa0c20005  sb          $v0, 0x5($a2)
    ctx->pc = 0x1cd464u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cd468: 0x24a30006  addiu       $v1, $a1, 0x6
    ctx->pc = 0x1cd468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x1cd46c: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x1cd46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x1cd470: 0xa0c30006  sb          $v1, 0x6($a2)
    ctx->pc = 0x1cd470u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cd474: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1cd474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1cd478: 0xa0c20007  sb          $v0, 0x7($a2)
    ctx->pc = 0x1cd478u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cd47c: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x1cd47cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1cd480: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1CD480u;
    {
        const bool branch_taken_0x1cd480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD480u;
        // 0x1cd484: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd480) {
            ctx->pc = 0x1CD43Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd43c;
        }
    }
    ctx->pc = 0x1CD488u;
    // 0x1cd488: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cd488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd48c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cd48cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cd490u;
}
