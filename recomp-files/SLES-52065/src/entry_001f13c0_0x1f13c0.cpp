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

// Function: entry_001f13c0
// Address: 0x1f13c0 - 0x1f13e8
void entry_001f13c0_0x1f13c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f13c0_0x1f13c0");
#endif

    ctx->pc = 0x1f13c0u;

label_1f13c0:
    // 0x1f13c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f13c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f13c4: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x1f13c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f13c8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F13C8u;
    {
        const bool branch_taken_0x1f13c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13C8u;
        // 0x1f13cc: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13c8) {
            ctx->pc = 0x1F13F4u;
            return;
        }
    }
    ctx->pc = 0x1F13D0u;
    // 0x1f13d0: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x1f13d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1f13d4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f13d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f13d8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F13D8u;
    {
        const bool branch_taken_0x1f13d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F13DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13D8u;
        // 0x1f13dc: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13d8) {
            ctx->pc = 0x1F13C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f13c0;
        }
    }
    ctx->pc = 0x1F13E0u;
    // 0x1f13e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F13E0u;
    {
        const bool branch_taken_0x1f13e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F13E0u;
        // 0x1f13e4: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f13e0) {
            ctx->pc = 0x1F13F8u;
            return;
        }
    }
    ctx->pc = 0x1F13E8u;
}
