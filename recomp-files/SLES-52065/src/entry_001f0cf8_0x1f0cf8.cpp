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

// Function: entry_001f0cf8
// Address: 0x1f0cf8 - 0x1f0d1c
void entry_001f0cf8_0x1f0cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0cf8_0x1f0cf8");
#endif

    ctx->pc = 0x1f0cf8u;

label_1f0cf8:
    // 0x1f0cf8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1f0cf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f0cfc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0CFCu;
    {
        const bool branch_taken_0x1f0cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CFCu;
        // 0x1f0d00: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0cfc) {
            ctx->pc = 0x1F0D1Cu;
            return;
        }
    }
    ctx->pc = 0x1F0D04u;
    // 0x1f0d04: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1f0d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f0d08: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f0d08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0d0c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1f0d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f0d10: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f0d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f0d14: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F0D14u;
    {
        const bool branch_taken_0x1f0d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0d14) {
            ctx->pc = 0x1F0D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0D14u;
            // 0x1f0d18: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0cf8;
        }
    }
    ctx->pc = 0x1F0D1Cu;
}
