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

// Function: entry_00179c78
// Address: 0x179c78 - 0x179cac
void entry_00179c78_0x179c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179c78_0x179c78");
#endif

    ctx->pc = 0x179c78u;

    // 0x179c78: 0x1206003b  beq         $s0, $a2, . + 4 + (0x3B << 2)
    ctx->pc = 0x179C78u;
    {
        const bool branch_taken_0x179c78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        ctx->pc = 0x179C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C78u;
        // 0x179c7c: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c78) {
            ctx->pc = 0x179D68u;
            return;
        }
    }
    ctx->pc = 0x179C80u;
    // 0x179c80: 0x1206000a  beq         $s0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x179C80u;
    {
        const bool branch_taken_0x179c80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        ctx->pc = 0x179C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C80u;
        // 0x179c84: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c80) {
            ctx->pc = 0x179CACu;
            return;
        }
    }
    ctx->pc = 0x179C88u;
    // 0x179c88: 0x2a010040  slti        $at, $s0, 0x40
    ctx->pc = 0x179c88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x179c8c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x179C8Cu;
    {
        const bool branch_taken_0x179c8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x179C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C8Cu;
        // 0x179c90: 0x28c10040  slti        $at, $a2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c8c) {
            ctx->pc = 0x179CACu;
            return;
        }
    }
    ctx->pc = 0x179C94u;
    // 0x179c94: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x179C94u;
    {
        const bool branch_taken_0x179c94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x179c94) {
            ctx->pc = 0x179CACu;
            return;
        }
    }
    ctx->pc = 0x179C9Cu;
    // 0x179c9c: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x179C9Cu;
    {
        const bool branch_taken_0x179c9c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x179c9c) {
            ctx->pc = 0x179CACu;
            return;
        }
    }
    ctx->pc = 0x179CA4u;
    // 0x179ca4: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x179CA4u;
    {
        const bool branch_taken_0x179ca4 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x179ca4) {
            ctx->pc = 0x179CB8u;
            return;
        }
    }
    ctx->pc = 0x179CACu;
}
