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

// Function: entry_00200348
// Address: 0x200348 - 0x200380
void entry_00200348_0x200348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200348_0x200348");
#endif

    ctx->pc = 0x200348u;

label_200348:
    // 0x200348: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x200348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20034c: 0x2621004  sllv        $v0, $v0, $s3
    ctx->pc = 0x20034cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x200350: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x200350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x200354: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x200354u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x200358: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x200358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x20035c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20035cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x200360: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x200360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x200364: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x200364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x200368: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x200368u;
    {
        const bool branch_taken_0x200368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200368u;
        // 0x20036c: 0xa31806  srlv        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200368) {
            ctx->pc = 0x200348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200348;
        }
    }
    ctx->pc = 0x200370u;
    // 0x200370: 0x103800b  movn        $s0, $t0, $v1
    ctx->pc = 0x200370u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 8));
    // 0x200374: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x200374u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x200378: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x200378u;
    {
        const bool branch_taken_0x200378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200378u;
        // 0x20037c: 0x2605ffff  addiu       $a1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200378) {
            ctx->pc = 0x2003A4u;
            return;
        }
    }
    ctx->pc = 0x200380u;
}
