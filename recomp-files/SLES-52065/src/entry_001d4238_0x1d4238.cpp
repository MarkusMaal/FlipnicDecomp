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

// Function: entry_001d4238
// Address: 0x1d4238 - 0x1d4260
void entry_001d4238_0x1d4238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4238_0x1d4238");
#endif

    ctx->pc = 0x1d4238u;

    // 0x1d4238: 0x2d030018  sltiu       $v1, $t0, 0x18
    ctx->pc = 0x1d4238u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d423c: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x1d423cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1d4240: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1d4240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d4244: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d4244u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d4248: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4248u;
    {
        const bool branch_taken_0x1d4248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4248u;
        // 0x1d424c: 0xe62804  sllv        $a1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4248) {
            ctx->pc = 0x1D4260u;
            return;
        }
    }
    ctx->pc = 0x1D4250u;
    // 0x1d4250: 0x6502ffe8  daddiu      $v0, $t0, -0x18
    ctx->pc = 0x1d4250u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)4294967272);
    // 0x1d4254: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d4254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d4258: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d4258u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d425c: 0x462804  sllv        $a1, $a2, $v0
    ctx->pc = 0x1d425cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    ctx->pc = 0x1d4260u;
}
