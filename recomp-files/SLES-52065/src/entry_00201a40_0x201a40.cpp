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

// Function: entry_00201a40
// Address: 0x201a40 - 0x201a64
void entry_00201a40_0x201a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201a40_0x201a40");
#endif

    ctx->pc = 0x201a40u;

    // 0x201a40: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x201a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a44: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x201a44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201a48: 0xc3182f  dsubu       $v1, $a2, $v1
    ctx->pc = 0x201a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) - GPR_U64(ctx, 3));
    // 0x201a4c: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x201a4cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x201a50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x201a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x201a54: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x201a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x201a58: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x201A58u;
    {
        const bool branch_taken_0x201a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x201A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A58u;
        // 0x201a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201a58) {
            ctx->pc = 0x201A84u;
            return;
        }
    }
    ctx->pc = 0x201A60u;
    // 0x201a60: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x201a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->pc = 0x201a64u;
}
