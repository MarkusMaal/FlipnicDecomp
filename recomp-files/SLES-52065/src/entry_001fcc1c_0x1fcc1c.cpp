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

// Function: entry_001fcc1c
// Address: 0x1fcc1c - 0x1fcc40
void entry_001fcc1c_0x1fcc1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcc1c_0x1fcc1c");
#endif

    ctx->pc = 0x1fcc1cu;

label_1fcc1c:
    // 0x1fcc1c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x1fcc1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1fcc20: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FCC20u;
    {
        const bool branch_taken_0x1fcc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1FCC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC20u;
        // 0x1fcc24: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc20) {
            ctx->pc = 0x1FCC40u;
            return;
        }
    }
    ctx->pc = 0x1FCC28u;
    // 0x1fcc28: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fcc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fcc2c: 0x56a2fffb  bnel        $s5, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FCC2Cu;
    {
        const bool branch_taken_0x1fcc2c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fcc2c) {
            ctx->pc = 0x1FCC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCC2Cu;
            // 0x1fcc30: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCC1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcc1c;
        }
    }
    ctx->pc = 0x1FCC34u;
    // 0x1fcc34: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1fcc34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fcc38: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1fcc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcc3c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1fcc3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    ctx->pc = 0x1fcc40u;
}
