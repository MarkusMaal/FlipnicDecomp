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

// Function: entry_001f1b58
// Address: 0x1f1b58 - 0x1f1b84
void entry_001f1b58_0x1f1b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1b58_0x1f1b58");
#endif

    ctx->pc = 0x1f1b58u;

label_1f1b58:
    // 0x1f1b58: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1f1b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f1b5c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F1B5Cu;
    {
        const bool branch_taken_0x1f1b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B5Cu;
        // 0x1f1b60: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b5c) {
            ctx->pc = 0x1F1B88u;
            return;
        }
    }
    ctx->pc = 0x1F1B64u;
    // 0x1f1b64: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1f1b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1f1b68: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f1b68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1b6c: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1f1b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1b70: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f1b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f1b74: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F1B74u;
    {
        const bool branch_taken_0x1f1b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1b74) {
            ctx->pc = 0x1F1B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1B74u;
            // 0x1f1b78: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1b58;
        }
    }
    ctx->pc = 0x1F1B7Cu;
    // 0x1f1b7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1B7Cu;
    {
        const bool branch_taken_0x1f1b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1B7Cu;
        // 0x1f1b80: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1b7c) {
            ctx->pc = 0x1F1B8Cu;
            return;
        }
    }
    ctx->pc = 0x1F1B84u;
}
