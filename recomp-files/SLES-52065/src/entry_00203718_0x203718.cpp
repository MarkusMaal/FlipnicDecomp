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

// Function: entry_00203718
// Address: 0x203718 - 0x203740
void entry_00203718_0x203718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203718_0x203718");
#endif

    ctx->pc = 0x203718u;

label_203718:
    // 0x203718: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x203718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x20371c: 0x2322021  addu        $a0, $s1, $s2
    ctx->pc = 0x20371cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x203720: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x203720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203724: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x203724u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x203728: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x203728u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x20372c: 0x641fffa  bgez        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20372Cu;
    {
        const bool branch_taken_0x20372c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x20372c) {
            ctx->pc = 0x203718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203718;
        }
    }
    ctx->pc = 0x203734u;
    // 0x203734: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x203734u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x203738: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x203738u;
    {
        const bool branch_taken_0x203738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203738u;
        // 0x20373c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203738) {
            ctx->pc = 0x203788u;
            return;
        }
    }
    ctx->pc = 0x203740u;
}
