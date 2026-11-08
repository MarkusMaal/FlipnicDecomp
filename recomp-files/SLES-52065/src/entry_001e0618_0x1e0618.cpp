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

// Function: entry_001e0618
// Address: 0x1e0618 - 0x1e0680
void entry_001e0618_0x1e0618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0618_0x1e0618");
#endif

    ctx->pc = 0x1e0618u;

label_1e0618:
    // 0x1e0618: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1e0618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e061c: 0x631f8  dsll        $a2, $a2, 7
    ctx->pc = 0x1e061cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 7);
    // 0x1e0620: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x1e0620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1e0624: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1e0624u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0628: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e0628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e062c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1e062cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e0630: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x1e0630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1e0634: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1e0634u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1e0638: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1e0638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1e063c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E063Cu;
    {
        const bool branch_taken_0x1e063c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E063Cu;
        // 0x1e0640: 0xc2302d  daddu       $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e063c) {
            ctx->pc = 0x1E0618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0618;
        }
    }
    ctx->pc = 0x1E0644u;
    // 0x1e0644: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1e0644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1e0648: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x1e0648u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
    // 0x1e064c: 0x24a5ab10  addiu       $a1, $a1, -0x54F0
    ctx->pc = 0x1e064cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945552));
    // 0x1e0650: 0x2549a310  addiu       $t1, $t2, -0x5CF0
    ctx->pc = 0x1e0650u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943504));
    // 0x1e0654: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e0654u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x38AB10u));
    // 0x1e0658: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x1e0658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1e065c: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x1e065cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1e0660: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1e0660u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1e0664: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x1e0664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1e0668: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e066c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1e066cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e0670: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e0670u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1e0674: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x1e0674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1e0678: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x1E0678u;
    {
        const bool branch_taken_0x1e0678 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0678u;
        // 0x1e067c: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0678) {
            ctx->pc = 0x1E06A8u;
            return;
        }
    }
    ctx->pc = 0x1E0680u;
}
