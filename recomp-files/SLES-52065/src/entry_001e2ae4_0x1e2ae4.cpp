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

// Function: entry_001e2ae4
// Address: 0x1e2ae4 - 0x1e2b04
void entry_001e2ae4_0x1e2ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2ae4_0x1e2ae4");
#endif

    ctx->pc = 0x1e2ae4u;

label_1e2ae4:
    // 0x1e2ae4: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x1e2ae4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e2ae8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1e2ae8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2aec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e2aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e2af0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1e2af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1e2af4: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x1e2af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e2af8: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x1e2af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x1e2afc: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E2AFCu;
    {
        const bool branch_taken_0x1e2afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AFCu;
        // 0x1e2b00: 0xa5030000  sh          $v1, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2afc) {
            ctx->pc = 0x1E2AE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2ae4;
        }
    }
    ctx->pc = 0x1E2B04u;
}
