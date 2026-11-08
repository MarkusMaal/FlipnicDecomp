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

// Function: entry_001ff988
// Address: 0x1ff988 - 0x1ff9a4
void entry_001ff988_0x1ff988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff988_0x1ff988");
#endif

    ctx->pc = 0x1ff988u;

label_1ff988:
    // 0x1ff988: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1ff988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff98c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1ff98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1ff990: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ff990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ff994: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1ff994u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ff998: 0x0  nop
    ctx->pc = 0x1ff998u;
    // NOP
    // 0x1ff99c: 0x14c4fffa  bne         $a2, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FF99Cu;
    {
        const bool branch_taken_0x1ff99c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FF9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF99Cu;
        // 0x1ff9a0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff99c) {
            ctx->pc = 0x1FF988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff988;
        }
    }
    ctx->pc = 0x1FF9A4u;
}
