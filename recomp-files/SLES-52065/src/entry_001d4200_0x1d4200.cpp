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

// Function: entry_001d4200
// Address: 0x1d4200 - 0x1d4224
void entry_001d4200_0x1d4200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4200_0x1d4200");
#endif

    ctx->pc = 0x1d4200u;

    // 0x1d4200: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x1d4200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1d4204: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1d4204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d4208: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d4208u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d420c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D420Cu;
    {
        const bool branch_taken_0x1d420c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D420Cu;
        // 0x1d4210: 0xe92804  sllv        $a1, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d420c) {
            ctx->pc = 0x1D4224u;
            return;
        }
    }
    ctx->pc = 0x1D4214u;
    // 0x1d4214: 0x6502ffe8  daddiu      $v0, $t0, -0x18
    ctx->pc = 0x1d4214u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)4294967272);
    // 0x1d4218: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d4218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d421c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d421cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d4220: 0x492804  sllv        $a1, $t1, $v0
    ctx->pc = 0x1d4220u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
    ctx->pc = 0x1d4224u;
}
