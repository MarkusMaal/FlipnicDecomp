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

// Function: entry_0017985c
// Address: 0x17985c - 0x1798a8
void entry_0017985c_0x17985c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017985c_0x17985c");
#endif

    ctx->pc = 0x17985cu;

label_17985c:
    // 0x17985c: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x17985cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x179860: 0xa1270000  sb          $a3, 0x0($t1)
    ctx->pc = 0x179860u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x179864: 0x24e60002  addiu       $a2, $a3, 0x2
    ctx->pc = 0x179864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x179868: 0xa1230001  sb          $v1, 0x1($t1)
    ctx->pc = 0x179868u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x17986c: 0xa1260002  sb          $a2, 0x2($t1)
    ctx->pc = 0x17986cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x179870: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x179870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x179874: 0xa1230003  sb          $v1, 0x3($t1)
    ctx->pc = 0x179874u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x179878: 0x24e60004  addiu       $a2, $a3, 0x4
    ctx->pc = 0x179878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x17987c: 0xa1260004  sb          $a2, 0x4($t1)
    ctx->pc = 0x17987cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x179880: 0x24e30005  addiu       $v1, $a3, 0x5
    ctx->pc = 0x179880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
    // 0x179884: 0xa1230005  sb          $v1, 0x5($t1)
    ctx->pc = 0x179884u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x179888: 0x24e60006  addiu       $a2, $a3, 0x6
    ctx->pc = 0x179888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
    // 0x17988c: 0x24e30007  addiu       $v1, $a3, 0x7
    ctx->pc = 0x17988cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x179890: 0xa1260006  sb          $a2, 0x6($t1)
    ctx->pc = 0x179890u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x179894: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x179894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x179898: 0xa1230007  sb          $v1, 0x7($t1)
    ctx->pc = 0x179898u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x17989c: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x17989cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1798a0: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1798A0u;
    {
        const bool branch_taken_0x1798a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1798A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1798A0u;
        // 0x1798a4: 0x874821  addu        $t1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1798a0) {
            ctx->pc = 0x17985Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17985c;
        }
    }
    ctx->pc = 0x1798A8u;
}
