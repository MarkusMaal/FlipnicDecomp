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

// Function: entry_001f2438
// Address: 0x1f2438 - 0x1f2464
void entry_001f2438_0x1f2438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2438_0x1f2438");
#endif

    ctx->pc = 0x1f2438u;

label_1f2438:
    // 0x1f2438: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1f2438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f243c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F243Cu;
    {
        const bool branch_taken_0x1f243c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F243Cu;
        // 0x1f2440: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f243c) {
            ctx->pc = 0x1F2474u;
            return;
        }
    }
    ctx->pc = 0x1F2444u;
    // 0x1f2444: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1f2444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1f2448: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f2448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f244c: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x1f244cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2450: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f2450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f2454: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F2454u;
    {
        const bool branch_taken_0x1f2454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2454) {
            ctx->pc = 0x1F2458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2454u;
            // 0x1f2458: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2438;
        }
    }
    ctx->pc = 0x1F245Cu;
    // 0x1f245c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F245Cu;
    {
        const bool branch_taken_0x1f245c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F245Cu;
        // 0x1f2460: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f245c) {
            ctx->pc = 0x1F2478u;
            return;
        }
    }
    ctx->pc = 0x1F2464u;
}
