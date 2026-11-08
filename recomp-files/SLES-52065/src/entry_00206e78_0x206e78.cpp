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

// Function: entry_00206e78
// Address: 0x206e78 - 0x206e90
void entry_00206e78_0x206e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206e78_0x206e78");
#endif

    ctx->pc = 0x206e78u;

    // 0x206e78: 0x13200066  beqz        $t9, . + 4 + (0x66 << 2)
    ctx->pc = 0x206E78u;
    {
        const bool branch_taken_0x206e78 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x206E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E78u;
        // 0x206e7c: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e78) {
            ctx->pc = 0x207014u;
            return;
        }
    }
    ctx->pc = 0x206E80u;
    // 0x206e80: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x206e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x206e84: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x206e84u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x206e88: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x206E88u;
    {
        const bool branch_taken_0x206e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E88u;
        // 0x206e8c: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206e88) {
            ctx->pc = 0x207010u;
            return;
        }
    }
    ctx->pc = 0x206E90u;
}
