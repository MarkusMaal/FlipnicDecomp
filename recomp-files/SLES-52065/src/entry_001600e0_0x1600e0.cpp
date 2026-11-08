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

// Function: entry_001600e0
// Address: 0x1600e0 - 0x1600fc
void entry_001600e0_0x1600e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001600e0_0x1600e0");
#endif

    ctx->pc = 0x1600e0u;

label_1600e0:
    // 0x1600e0: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1600e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1600e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1600e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1600e8: 0xa4650228  sh          $a1, 0x228($v1)
    ctx->pc = 0x1600e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 552), (uint16_t)GPR_U32(ctx, 5));
    // 0x1600ec: 0xa465022a  sh          $a1, 0x22A($v1)
    ctx->pc = 0x1600ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 554), (uint16_t)GPR_U32(ctx, 5));
    // 0x1600f0: 0x28c3000a  slti        $v1, $a2, 0xA
    ctx->pc = 0x1600f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1600f4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1600F4u;
    {
        const bool branch_taken_0x1600f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1600F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600F4u;
        // 0x1600f8: 0x24e703d0  addiu       $a3, $a3, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1600f4) {
            ctx->pc = 0x1600E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1600e0;
        }
    }
    ctx->pc = 0x1600FCu;
}
