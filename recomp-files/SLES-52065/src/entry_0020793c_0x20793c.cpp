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

// Function: entry_0020793c
// Address: 0x20793c - 0x20797c
void entry_0020793c_0x20793c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020793c_0x20793c");
#endif

    ctx->pc = 0x20793cu;

    // 0x20793c: 0x1012  mflo        $v0
    ctx->pc = 0x20793cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x207940: 0x1810  mfhi        $v1
    ctx->pc = 0x207940u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x207944: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x207948: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x207948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x20794c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20794cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x207950: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x207950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x207954: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x207954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x207958: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x207958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x20795c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20795Cu;
    {
        const bool branch_taken_0x20795c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20795c) {
            ctx->pc = 0x20797Cu;
            return;
        }
    }
    ctx->pc = 0x207964u;
    // 0x207964: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x207964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x207968: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x207968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x20796c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20796Cu;
    {
        const bool branch_taken_0x20796c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20796Cu;
        // 0x207970: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20796c) {
            ctx->pc = 0x20797Cu;
            return;
        }
    }
    ctx->pc = 0x207974u;
    // 0x207974: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207974u;
    {
        const bool branch_taken_0x207974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207974) {
            ctx->pc = 0x207978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207974u;
            // 0x207978: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20797Cu;
            return;
        }
    }
    ctx->pc = 0x20797Cu;
}
