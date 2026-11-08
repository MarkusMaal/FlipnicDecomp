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

// Function: entry_00163194
// Address: 0x163194 - 0x1631b0
void entry_00163194_0x163194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163194_0x163194");
#endif

    ctx->pc = 0x163194u;

    // 0x163194: 0x0  nop
    ctx->pc = 0x163194u;
    // NOP
    // 0x163198: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x163198u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x16319c: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x16319Cu;
    {
        const bool branch_taken_0x16319c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16319c) {
            ctx->pc = 0x163120u;
            return;
        }
    }
    ctx->pc = 0x1631A4u;
    // 0x1631a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1631a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1631a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1631A8u;
    {
        const bool branch_taken_0x1631a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1631ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1631A8u;
        // 0x1631ac: 0x2604ffff  addiu       $a0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631a8) {
            ctx->pc = 0x1631CCu;
            return;
        }
    }
    ctx->pc = 0x1631B0u;
}
