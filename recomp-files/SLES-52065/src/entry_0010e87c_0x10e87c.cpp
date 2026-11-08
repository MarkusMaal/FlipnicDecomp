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

// Function: entry_0010e87c
// Address: 0x10e87c - 0x10e89c
void entry_0010e87c_0x10e87c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e87c_0x10e87c");
#endif

    ctx->pc = 0x10e87cu;

    // 0x10e87c: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x10e87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x10e880: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x10e880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x10e884: 0x10200082  beqz        $at, . + 4 + (0x82 << 2)
    ctx->pc = 0x10E884u;
    {
        const bool branch_taken_0x10e884 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E884u;
        // 0x10e888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e884) {
            ctx->pc = 0x10EA90u;
            return;
        }
    }
    ctx->pc = 0x10E88Cu;
    // 0x10e88c: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x10e88cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x10e890: 0x14200068  bnez        $at, . + 4 + (0x68 << 2)
    ctx->pc = 0x10E890u;
    {
        const bool branch_taken_0x10e890 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E890u;
        // 0x10e894: 0x2483fff8  addiu       $v1, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e890) {
            ctx->pc = 0x10EA34u;
            return;
        }
    }
    ctx->pc = 0x10E898u;
    // 0x10e898: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10e898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10e89cu;
}
