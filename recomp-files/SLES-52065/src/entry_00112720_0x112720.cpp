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

// Function: entry_00112720
// Address: 0x112720 - 0x112744
void entry_00112720_0x112720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112720_0x112720");
#endif

    ctx->pc = 0x112720u;

    // 0x112720: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x112720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x112724: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x112724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112728: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x112728u;
    {
        const bool branch_taken_0x112728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112728) {
            ctx->pc = 0x1126C8u;
            return;
        }
    }
    ctx->pc = 0x112730u;
    // 0x112730: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x112730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x112734: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x112734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x112738: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x112738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11273c: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x11273Cu;
    {
        const bool branch_taken_0x11273c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11273Cu;
        // 0x112740: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11273c) {
            ctx->pc = 0x112BD4u;
            return;
        }
    }
    ctx->pc = 0x112744u;
}
