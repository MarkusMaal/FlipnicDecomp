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

// Function: entry_001f2020
// Address: 0x1f2020 - 0x1f204c
void entry_001f2020_0x1f2020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2020_0x1f2020");
#endif

    ctx->pc = 0x1f2020u;

label_1f2020:
    // 0x1f2020: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1f2020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f2024: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F2024u;
    {
        const bool branch_taken_0x1f2024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2024u;
        // 0x1f2028: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2024) {
            ctx->pc = 0x1F2050u;
            return;
        }
    }
    ctx->pc = 0x1F202Cu;
    // 0x1f202c: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1f202cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1f2030: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f2030u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f2034: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1f2034u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2038: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f2038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f203c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F203Cu;
    {
        const bool branch_taken_0x1f203c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f203c) {
            ctx->pc = 0x1F2040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F203Cu;
            // 0x1f2040: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2020;
        }
    }
    ctx->pc = 0x1F2044u;
    // 0x1f2044: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2044u;
    {
        const bool branch_taken_0x1f2044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2044u;
        // 0x1f2048: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2044) {
            ctx->pc = 0x1F2054u;
            return;
        }
    }
    ctx->pc = 0x1F204Cu;
}
