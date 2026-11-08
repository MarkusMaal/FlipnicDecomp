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

// Function: entry_001f1800
// Address: 0x1f1800 - 0x1f1824
void entry_001f1800_0x1f1800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1800_0x1f1800");
#endif

    ctx->pc = 0x1f1800u;

label_1f1800:
    // 0x1f1800: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1f1800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f1804: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1804u;
    {
        const bool branch_taken_0x1f1804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1804u;
        // 0x1f1808: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1804) {
            ctx->pc = 0x1F1824u;
            return;
        }
    }
    ctx->pc = 0x1F180Cu;
    // 0x1f180c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1f180cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f1810: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f1810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1814: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1f1814u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1818: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f1818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f181c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F181Cu;
    {
        const bool branch_taken_0x1f181c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f181c) {
            ctx->pc = 0x1F1820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F181Cu;
            // 0x1f1820: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1800;
        }
    }
    ctx->pc = 0x1F1824u;
}
