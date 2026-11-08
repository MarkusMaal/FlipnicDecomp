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

// Function: entry_00207648
// Address: 0x207648 - 0x207688
void entry_00207648_0x207648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207648_0x207648");
#endif

    ctx->pc = 0x207648u;

    // 0x207648: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x207648u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x20764c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x20764cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x207650: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x207650u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x207654: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x207654u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x207658: 0xa90019  multu       $a1, $t1
    ctx->pc = 0x207658u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20765c: 0x3010  mfhi        $a2
    ctx->pc = 0x20765cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x207660: 0x2012  mflo        $a0
    ctx->pc = 0x207660u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x207664: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x207664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x207668: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x207668u;
    {
        const bool branch_taken_0x207668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207668) {
            ctx->pc = 0x20766Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207668u;
            // 0x20766c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207688u;
            return;
        }
    }
    ctx->pc = 0x207670u;
    // 0x207670: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x207670u;
    {
        const bool branch_taken_0x207670 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x207674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207670u;
        // 0x207674: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207670) {
            ctx->pc = 0x207690u;
            return;
        }
    }
    ctx->pc = 0x207678u;
    // 0x207678: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x207678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x20767c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20767Cu;
    {
        const bool branch_taken_0x20767c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20767c) {
            ctx->pc = 0x207680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20767Cu;
            // 0x207680: 0xd103c  dsll32      $v0, $t5, 0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207694u;
            return;
        }
    }
    ctx->pc = 0x207684u;
    // 0x207684: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x207684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->pc = 0x207688u;
}
