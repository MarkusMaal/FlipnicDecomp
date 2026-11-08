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

// Function: entry_00204320
// Address: 0x204320 - 0x204350
void entry_00204320_0x204320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204320_0x204320");
#endif

    ctx->pc = 0x204320u;

label_204320:
    // 0x204320: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x204320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x204324: 0x8fa60214  lw          $a2, 0x214($sp)
    ctx->pc = 0x204324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x204328: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x204328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20432c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20432cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x204330: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x204330u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x204334: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x204334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x204338: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x204338u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x20433c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x20433cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204340: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x204340u;
    {
        const bool branch_taken_0x204340 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x204344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204340u;
        // 0x204344: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204340) {
            ctx->pc = 0x204320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204320;
        }
    }
    ctx->pc = 0x204348u;
    // 0x204348: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x204348u;
    {
        const bool branch_taken_0x204348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204348u;
        // 0x20434c: 0x2662fea4  addiu       $v0, $s3, -0x15C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966948));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204348) {
            ctx->pc = 0x20435Cu;
            return;
        }
    }
    ctx->pc = 0x204350u;
}
