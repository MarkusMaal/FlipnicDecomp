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

// Function: entry_001f17a0
// Address: 0x1f17a0 - 0x1f17cc
void entry_001f17a0_0x1f17a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f17a0_0x1f17a0");
#endif

    ctx->pc = 0x1f17a0u;

label_1f17a0:
    // 0x1f17a0: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1f17a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f17a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F17A4u;
    {
        const bool branch_taken_0x1f17a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F17A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17A4u;
        // 0x1f17a8: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f17a4) {
            ctx->pc = 0x1F17D8u;
            return;
        }
    }
    ctx->pc = 0x1F17ACu;
    // 0x1f17ac: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1f17acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1f17b0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f17b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f17b4: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1f17b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f17b8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f17b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f17bc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F17BCu;
    {
        const bool branch_taken_0x1f17bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f17bc) {
            ctx->pc = 0x1F17C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F17BCu;
            // 0x1f17c0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F17A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f17a0;
        }
    }
    ctx->pc = 0x1F17C4u;
    // 0x1f17c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F17C4u;
    {
        const bool branch_taken_0x1f17c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F17C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17C4u;
        // 0x1f17c8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f17c4) {
            ctx->pc = 0x1F17DCu;
            return;
        }
    }
    ctx->pc = 0x1F17CCu;
}
