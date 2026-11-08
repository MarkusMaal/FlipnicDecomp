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

// Function: entry_001f0ac0
// Address: 0x1f0ac0 - 0x1f0aec
void entry_001f0ac0_0x1f0ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0ac0_0x1f0ac0");
#endif

    ctx->pc = 0x1f0ac0u;

label_1f0ac0:
    // 0x1f0ac0: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x1f0ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f0ac4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F0AC4u;
    {
        const bool branch_taken_0x1f0ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AC4u;
        // 0x1f0ac8: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ac4) {
            ctx->pc = 0x1F0AF8u;
            return;
        }
    }
    ctx->pc = 0x1F0ACCu;
    // 0x1f0acc: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x1f0accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1f0ad0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f0ad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0ad4: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x1f0ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f0ad8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f0ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f0adc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F0ADCu;
    {
        const bool branch_taken_0x1f0adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0adc) {
            ctx->pc = 0x1F0AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0ADCu;
            // 0x1f0ae0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0ac0;
        }
    }
    ctx->pc = 0x1F0AE4u;
    // 0x1f0ae4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0AE4u;
    {
        const bool branch_taken_0x1f0ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AE4u;
        // 0x1f0ae8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ae4) {
            ctx->pc = 0x1F0AFCu;
            return;
        }
    }
    ctx->pc = 0x1F0AECu;
}
