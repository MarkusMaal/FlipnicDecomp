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

// Function: entry_001f1568
// Address: 0x1f1568 - 0x1f1590
void entry_001f1568_0x1f1568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1568_0x1f1568");
#endif

    ctx->pc = 0x1f1568u;

label_1f1568:
    // 0x1f1568: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f1568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f156c: 0x2a220400  slti        $v0, $s1, 0x400
    ctx->pc = 0x1f156cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f1570: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F1570u;
    {
        const bool branch_taken_0x1f1570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1570u;
        // 0x1f1574: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1570) {
            ctx->pc = 0x1F159Cu;
            return;
        }
    }
    ctx->pc = 0x1F1578u;
    // 0x1f1578: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x1f1578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1f157c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f157cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1580: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F1580u;
    {
        const bool branch_taken_0x1f1580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1580u;
        // 0x1f1584: 0xa0830050  sb          $v1, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1580) {
            ctx->pc = 0x1F1568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1568;
        }
    }
    ctx->pc = 0x1F1588u;
    // 0x1f1588: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1588u;
    {
        const bool branch_taken_0x1f1588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1588u;
        // 0x1f158c: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1588) {
            ctx->pc = 0x1F15A0u;
            return;
        }
    }
    ctx->pc = 0x1F1590u;
}
