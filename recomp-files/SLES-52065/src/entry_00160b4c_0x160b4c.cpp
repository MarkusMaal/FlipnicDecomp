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

// Function: entry_00160b4c
// Address: 0x160b4c - 0x160b7c
void entry_00160b4c_0x160b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160b4c_0x160b4c");
#endif

    ctx->pc = 0x160b4cu;

label_160b4c:
    // 0x160b4c: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x160b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x160b50: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x160b50u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x160b54: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x160b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x160b58: 0xa0c00001  sb          $zero, 0x1($a2)
    ctx->pc = 0x160b58u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x160b5c: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x160b5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x160b60: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x160b60u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160b64: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x160b64u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160b68: 0xa0c00004  sb          $zero, 0x4($a2)
    ctx->pc = 0x160b68u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x160b6c: 0xa0c00005  sb          $zero, 0x5($a2)
    ctx->pc = 0x160b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x160b70: 0xa0c00006  sb          $zero, 0x6($a2)
    ctx->pc = 0x160b70u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x160b74: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x160B74u;
    {
        const bool branch_taken_0x160b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160B74u;
        // 0x160b78: 0xa0c00007  sb          $zero, 0x7($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b74) {
            ctx->pc = 0x160B4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160b4c;
        }
    }
    ctx->pc = 0x160B7Cu;
}
