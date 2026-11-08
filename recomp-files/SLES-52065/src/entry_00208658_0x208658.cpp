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

// Function: entry_00208658
// Address: 0x208658 - 0x208680
void entry_00208658_0x208658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208658_0x208658");
#endif

    ctx->pc = 0x208658u;

    // 0x208658: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x208658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x20865c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x20865Cu;
    {
        const bool branch_taken_0x20865c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20865Cu;
        // 0x208660: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20865c) {
            ctx->pc = 0x208688u;
            return;
        }
    }
    ctx->pc = 0x208664u;
    // 0x208664: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x208664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x208668: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x208668u;
    {
        const bool branch_taken_0x208668 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208668u;
        // 0x20866c: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208668) {
            ctx->pc = 0x208680u;
            return;
        }
    }
    ctx->pc = 0x208670u;
    // 0x208670: 0x3402c1e0  ori         $v0, $zero, 0xC1E0
    ctx->pc = 0x208670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49632);
    // 0x208674: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x208674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x208678: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x208678u;
    {
        const bool branch_taken_0x208678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208678u;
        // 0x20867c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208678) {
            ctx->pc = 0x2086E0u;
            return;
        }
    }
    ctx->pc = 0x208680u;
}
