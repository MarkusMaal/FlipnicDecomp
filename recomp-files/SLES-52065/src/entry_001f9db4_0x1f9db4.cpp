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

// Function: entry_001f9db4
// Address: 0x1f9db4 - 0x1f9de8
void entry_001f9db4_0x1f9db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9db4_0x1f9db4");
#endif

    ctx->pc = 0x1f9db4u;

    // 0x1f9db4: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x1f9db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1f9db8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1f9db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1f9dbc: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F9DBCu;
    {
        const bool branch_taken_0x1f9dbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DBCu;
        // 0x1f9dc0: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9dbc) {
            ctx->pc = 0x1F9DF0u;
            return;
        }
    }
    ctx->pc = 0x1F9DC4u;
    // 0x1f9dc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f9dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f9dc8: 0x1202004f  beq         $s0, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1F9DC8u;
    {
        const bool branch_taken_0x1f9dc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DC8u;
        // 0x1f9dcc: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9dc8) {
            ctx->pc = 0x1F9F08u;
            return;
        }
    }
    ctx->pc = 0x1F9DD0u;
    // 0x1f9dd0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9DD0u;
    {
        const bool branch_taken_0x1f9dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DD0u;
        // 0x1f9dd4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9dd0) {
            ctx->pc = 0x1F9DE8u;
            return;
        }
    }
    ctx->pc = 0x1F9DD8u;
    // 0x1f9dd8: 0x12020050  beq         $s0, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1F9DD8u;
    {
        const bool branch_taken_0x1f9dd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f9dd8) {
            ctx->pc = 0x1F9F1Cu;
            return;
        }
    }
    ctx->pc = 0x1F9DE0u;
    // 0x1f9de0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9DE0u;
    {
        const bool branch_taken_0x1f9de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9de0) {
            ctx->pc = 0x1F9DF0u;
            return;
        }
    }
    ctx->pc = 0x1F9DE8u;
}
