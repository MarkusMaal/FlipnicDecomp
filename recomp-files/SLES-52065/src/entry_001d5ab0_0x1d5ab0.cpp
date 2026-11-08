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

// Function: entry_001d5ab0
// Address: 0x1d5ab0 - 0x1d5ae8
void entry_001d5ab0_0x1d5ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5ab0_0x1d5ab0");
#endif

    ctx->pc = 0x1d5ab0u;

    // 0x1d5ab0: 0x120200ed  beq         $s0, $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x1D5AB0u;
    {
        const bool branch_taken_0x1d5ab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AB0u;
        // 0x1d5ab4: 0x2a020801  slti        $v0, $s0, 0x801 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2049) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ab0) {
            ctx->pc = 0x1D5E68u;
            return;
        }
    }
    ctx->pc = 0x1D5AB8u;
    // 0x1d5ab8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D5AB8u;
    {
        const bool branch_taken_0x1d5ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AB8u;
        // 0x1d5abc: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ab8) {
            ctx->pc = 0x1D5AF8u;
            return;
        }
    }
    ctx->pc = 0x1D5AC0u;
    // 0x1d5ac0: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1d5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1d5ac4: 0x12020070  beq         $s0, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x1D5AC4u;
    {
        const bool branch_taken_0x1d5ac4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AC4u;
        // 0x1d5ac8: 0x2a020201  slti        $v0, $s0, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)513) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ac4) {
            ctx->pc = 0x1D5C88u;
            return;
        }
    }
    ctx->pc = 0x1D5ACCu;
    // 0x1d5acc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5ACCu;
    {
        const bool branch_taken_0x1d5acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5ACCu;
        // 0x1d5ad0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5acc) {
            ctx->pc = 0x1D5AE8u;
            return;
        }
    }
    ctx->pc = 0x1D5AD4u;
    // 0x1d5ad4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1d5ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1d5ad8: 0x120200cf  beq         $s0, $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x1D5AD8u;
    {
        const bool branch_taken_0x1d5ad8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d5ad8) {
            ctx->pc = 0x1D5E18u;
            return;
        }
    }
    ctx->pc = 0x1D5AE0u;
    // 0x1d5ae0: 0x1000019d  b           . + 4 + (0x19D << 2)
    ctx->pc = 0x1D5AE0u;
    {
        const bool branch_taken_0x1d5ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ae0) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5AE8u;
}
