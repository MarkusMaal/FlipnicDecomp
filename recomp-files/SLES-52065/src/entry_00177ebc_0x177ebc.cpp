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

// Function: entry_00177ebc
// Address: 0x177ebc - 0x177ed8
void entry_00177ebc_0x177ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177ebc_0x177ebc");
#endif

    ctx->pc = 0x177ebcu;

    // 0x177ebc: 0x0  nop
    ctx->pc = 0x177ebcu;
    // NOP
    // 0x177ec0: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x177ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x177ec4: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x177EC4u;
    {
        const bool branch_taken_0x177ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177EC4u;
        // 0x177ec8: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ec4) {
            ctx->pc = 0x177DE0u;
            return;
        }
    }
    ctx->pc = 0x177ECCu;
    // 0x177ecc: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x177eccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x177ed0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x177ED0u;
    {
        const bool branch_taken_0x177ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177ED0u;
        // 0x177ed4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ed0) {
            ctx->pc = 0x177F6Cu;
            return;
        }
    }
    ctx->pc = 0x177ED8u;
}
