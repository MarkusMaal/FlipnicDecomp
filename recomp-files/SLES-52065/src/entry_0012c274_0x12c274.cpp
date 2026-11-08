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

// Function: entry_0012c274
// Address: 0x12c274 - 0x12c294
void entry_0012c274_0x12c274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c274_0x12c274");
#endif

    ctx->pc = 0x12c274u;

    // 0x12c274: 0x28810041  slti        $at, $a0, 0x41
    ctx->pc = 0x12c274u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x12c278: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C278u;
    {
        const bool branch_taken_0x12c278 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C278u;
        // 0x12c27c: 0x2881ffc0  slti        $at, $a0, -0x40 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967232) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c278) {
            ctx->pc = 0x12C294u;
            return;
        }
    }
    ctx->pc = 0x12C280u;
    // 0x12c280: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x12c280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x12c284: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12c284u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12c288: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x12c288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x12c28c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12C28Cu;
    {
        const bool branch_taken_0x12c28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C28Cu;
        // 0x12c290: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c28c) {
            ctx->pc = 0x12C2ACu;
            return;
        }
    }
    ctx->pc = 0x12C294u;
}
