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

// Function: entry_0017dfb4
// Address: 0x17dfb4 - 0x17dff4
void entry_0017dfb4_0x17dfb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dfb4_0x17dfb4");
#endif

    ctx->pc = 0x17dfb4u;

    // 0x17dfb4: 0x0  nop
    ctx->pc = 0x17dfb4u;
    // NOP
    // 0x17dfb8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17dfb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17dfbc: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x17dfbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17dfc0: 0x1420ffe0  bnez        $at, . + 4 + (-0x20 << 2)
    ctx->pc = 0x17DFC0u;
    {
        const bool branch_taken_0x17dfc0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dfc0) {
            ctx->pc = 0x17DF44u;
            return;
        }
    }
    ctx->pc = 0x17DFC8u;
    // 0x17dfc8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17dfc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17dfcc: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x17dfccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17dfd0: 0x1420ffdc  bnez        $at, . + 4 + (-0x24 << 2)
    ctx->pc = 0x17DFD0u;
    {
        const bool branch_taken_0x17dfd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFD0u;
        // 0x17dfd4: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dfd0) {
            ctx->pc = 0x17DF44u;
            return;
        }
    }
    ctx->pc = 0x17DFD8u;
    // 0x17dfd8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17dfdc: 0x13c20005  beq         $fp, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17DFDCu;
    {
        const bool branch_taken_0x17dfdc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x17dfdc) {
            ctx->pc = 0x17DFF4u;
            return;
        }
    }
    ctx->pc = 0x17DFE4u;
    // 0x17dfe4: 0x12e20003  beq         $s7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17DFE4u;
    {
        const bool branch_taken_0x17dfe4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x17dfe4) {
            ctx->pc = 0x17DFF4u;
            return;
        }
    }
    ctx->pc = 0x17DFECu;
    // 0x17dfec: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x17dfecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dff0: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x17dff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17dff4u;
}
