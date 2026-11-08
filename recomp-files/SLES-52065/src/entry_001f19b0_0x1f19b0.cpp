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

// Function: entry_001f19b0
// Address: 0x1f19b0 - 0x1f19dc
void entry_001f19b0_0x1f19b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f19b0_0x1f19b0");
#endif

    ctx->pc = 0x1f19b0u;

label_1f19b0:
    // 0x1f19b0: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1f19b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f19b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F19B4u;
    {
        const bool branch_taken_0x1f19b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F19B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19B4u;
        // 0x1f19b8: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f19b4) {
            ctx->pc = 0x1F19E8u;
            return;
        }
    }
    ctx->pc = 0x1F19BCu;
    // 0x1f19bc: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x1f19bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1f19c0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f19c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f19c4: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x1f19c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f19c8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f19c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f19cc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F19CCu;
    {
        const bool branch_taken_0x1f19cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f19cc) {
            ctx->pc = 0x1F19D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F19CCu;
            // 0x1f19d0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F19B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f19b0;
        }
    }
    ctx->pc = 0x1F19D4u;
    // 0x1f19d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F19D4u;
    {
        const bool branch_taken_0x1f19d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F19D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F19D4u;
        // 0x1f19d8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f19d4) {
            ctx->pc = 0x1F19ECu;
            return;
        }
    }
    ctx->pc = 0x1F19DCu;
}
