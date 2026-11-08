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

// Function: entry_00206074
// Address: 0x206074 - 0x206094
void entry_00206074_0x206074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206074_0x206074");
#endif

    ctx->pc = 0x206074u;

    // 0x206074: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x206074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x206078: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x206078u;
    {
        const bool branch_taken_0x206078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206078) {
            ctx->pc = 0x20607Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206078u;
            // 0x20607c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2060E4u;
            return;
        }
    }
    ctx->pc = 0x206080u;
    // 0x206080: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x206080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x206084: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x206084u;
    {
        const bool branch_taken_0x206084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206084u;
        // 0x206088: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206084) {
            ctx->pc = 0x206094u;
            return;
        }
    }
    ctx->pc = 0x20608Cu;
    // 0x20608c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x20608Cu;
    {
        const bool branch_taken_0x20608c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20608Cu;
        // 0x206090: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20608c) {
            ctx->pc = 0x20612Cu;
            return;
        }
    }
    ctx->pc = 0x206094u;
}
