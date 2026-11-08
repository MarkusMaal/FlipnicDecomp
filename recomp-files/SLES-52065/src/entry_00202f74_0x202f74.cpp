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

// Function: entry_00202f74
// Address: 0x202f74 - 0x202f94
void entry_00202f74_0x202f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202f74_0x202f74");
#endif

    ctx->pc = 0x202f74u;

    // 0x202f74: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x202f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x202f78: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x202f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x202f7c: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x202f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x202f80: 0x28e3fc02  slti        $v1, $a3, -0x3FE
    ctx->pc = 0x202f80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x202f84: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x202F84u;
    {
        const bool branch_taken_0x202f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F84u;
        // 0x202f88: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f84) {
            ctx->pc = 0x202F94u;
            return;
        }
    }
    ctx->pc = 0x202F8Cu;
    // 0x202f8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x202F8Cu;
    {
        const bool branch_taken_0x202f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F8Cu;
        // 0x202f90: 0x24930433  addiu       $s3, $a0, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f8c) {
            ctx->pc = 0x202F9Cu;
            return;
        }
    }
    ctx->pc = 0x202F94u;
}
