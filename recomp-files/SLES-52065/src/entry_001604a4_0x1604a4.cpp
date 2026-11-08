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

// Function: entry_001604a4
// Address: 0x1604a4 - 0x1604c8
void entry_001604a4_0x1604a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001604a4_0x1604a4");
#endif

    ctx->pc = 0x1604a4u;

label_1604a4:
    // 0x1604a4: 0x0  nop
    ctx->pc = 0x1604a4u;
    // NOP
    // 0x1604a8: 0x8a1821  addu        $v1, $a0, $t2
    ctx->pc = 0x1604a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1604ac: 0x8c662cd8  lw          $a2, 0x2CD8($v1)
    ctx->pc = 0x1604acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1604b0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1604b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1604b4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1604b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1604b8: 0xa4c001fa  sh          $zero, 0x1FA($a2)
    ctx->pc = 0x1604b8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 506), (uint16_t)GPR_U32(ctx, 0));
    // 0x1604bc: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x1604bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1604c0: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1604C0u;
    {
        const bool branch_taken_0x1604c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1604C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604C0u;
        // 0x1604c4: 0xacc001fc  sw          $zero, 0x1FC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 508), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604c0) {
            ctx->pc = 0x1604A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1604a4;
        }
    }
    ctx->pc = 0x1604C8u;
}
