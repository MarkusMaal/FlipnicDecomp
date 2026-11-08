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

// Function: entry_001f7448
// Address: 0x1f7448 - 0x1f746c
void entry_001f7448_0x1f7448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7448_0x1f7448");
#endif

    ctx->pc = 0x1f7448u;

label_1f7448:
    // 0x1f7448: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x1f7448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1f744c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F744Cu;
    {
        const bool branch_taken_0x1f744c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F744Cu;
        // 0x1f7450: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f744c) {
            ctx->pc = 0x1F746Cu;
            return;
        }
    }
    ctx->pc = 0x1F7454u;
    // 0x1f7454: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x1f7454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1f7458: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f7458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f745c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1f745cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f7460: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f7460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f7464: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F7464u;
    {
        const bool branch_taken_0x1f7464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7464) {
            ctx->pc = 0x1F7468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7464u;
            // 0x1f7468: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7448;
        }
    }
    ctx->pc = 0x1F746Cu;
}
