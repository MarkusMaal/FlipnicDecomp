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

// Function: entry_001882ac
// Address: 0x1882ac - 0x1882c8
void entry_001882ac_0x1882ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001882ac_0x1882ac");
#endif

    ctx->pc = 0x1882acu;

label_1882ac:
    // 0x1882ac: 0x0  nop
    ctx->pc = 0x1882acu;
    // NOP
    // 0x1882b0: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1882b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1882b4: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x1882b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1882b8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1882b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1882bc: 0x72202b  sltu        $a0, $v1, $s2
    ctx->pc = 0x1882bcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1882c0: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1882C0u;
    {
        const bool branch_taken_0x1882c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1882C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882C0u;
        // 0x1882c4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1882c0) {
            ctx->pc = 0x1882ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1882ac;
        }
    }
    ctx->pc = 0x1882C8u;
}
