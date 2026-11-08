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

// Function: entry_0010bacc
// Address: 0x10bacc - 0x10baf4
void entry_0010bacc_0x10bacc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bacc_0x10bacc");
#endif

    ctx->pc = 0x10baccu;

    // 0x10bacc: 0x0  nop
    ctx->pc = 0x10baccu;
    // NOP
    // 0x10bad0: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x10bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x10bad4: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x10BAD4u;
    {
        const bool branch_taken_0x10bad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAD4u;
        // 0x10bad8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bad4) {
            ctx->pc = 0x10BBACu;
            return;
        }
    }
    ctx->pc = 0x10BADCu;
    // 0x10badc: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x10badcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x10bae0: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x10bae0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x10bae4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BAE4u;
    {
        const bool branch_taken_0x10bae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAE4u;
        // 0x10bae8: 0x28810008  slti        $at, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bae4) {
            ctx->pc = 0x10BAF4u;
            return;
        }
    }
    ctx->pc = 0x10BAECu;
    // 0x10baec: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x10BAECu;
    {
        const bool branch_taken_0x10baec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10baec) {
            ctx->pc = 0x10BBA8u;
            return;
        }
    }
    ctx->pc = 0x10BAF4u;
}
