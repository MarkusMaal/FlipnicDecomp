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

// Function: entry_0018fdfc
// Address: 0x18fdfc - 0x18fe24
void entry_0018fdfc_0x18fdfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fdfc_0x18fdfc");
#endif

    ctx->pc = 0x18fdfcu;

label_18fdfc:
    // 0x18fdfc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x18fdfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18fe00: 0x0  nop
    ctx->pc = 0x18fe00u;
    // NOP
    // 0x18fe04: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18FE04u;
    {
        const bool branch_taken_0x18fe04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fe04) {
            ctx->pc = 0x18FE24u;
            return;
        }
    }
    ctx->pc = 0x18FE0Cu;
    // 0x18fe0c: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x18fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18fe10: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x18fe10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18fe14: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18fe14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18fe18: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x18fe18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18fe1c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x18FE1Cu;
    {
        const bool branch_taken_0x18fe1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FE1Cu;
        // 0x18fe20: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe1c) {
            ctx->pc = 0x18FDFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18fdfc;
        }
    }
    ctx->pc = 0x18FE24u;
}
