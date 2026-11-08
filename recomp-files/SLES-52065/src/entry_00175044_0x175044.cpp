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

// Function: entry_00175044
// Address: 0x175044 - 0x175060
void entry_00175044_0x175044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175044_0x175044");
#endif

    ctx->pc = 0x175044u;

    // 0x175044: 0x0  nop
    ctx->pc = 0x175044u;
    // NOP
    // 0x175048: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x175048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17504c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x17504cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175050: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x175050u;
    {
        const bool branch_taken_0x175050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175050) {
            ctx->pc = 0x174EDCu;
            return;
        }
    }
    ctx->pc = 0x175058u;
    // 0x175058: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x175058u;
    {
        const bool branch_taken_0x175058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175058u;
        // 0x17505c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175058) {
            ctx->pc = 0x1751CCu;
            return;
        }
    }
    ctx->pc = 0x175060u;
}
