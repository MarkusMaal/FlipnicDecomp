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

// Function: entry_00207320
// Address: 0x207320 - 0x207378
void entry_00207320_0x207320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207320_0x207320");
#endif

    ctx->pc = 0x207320u;

    // 0x207320: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x207320u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207324: 0x1012  mflo        $v0
    ctx->pc = 0x207324u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x207328: 0x1810  mfhi        $v1
    ctx->pc = 0x207328u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20732c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x20732cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207330: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x207334: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x207334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x207338: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x207338u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x20733c: 0xea3018  mult        $a2, $a3, $t2
    ctx->pc = 0x20733cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x207340: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x207340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x207344: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x207344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x207348: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x207348u;
    {
        const bool branch_taken_0x207348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207348) {
            ctx->pc = 0x20734Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207348u;
            // 0x20734c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20737Cu;
            return;
        }
    }
    ctx->pc = 0x207350u;
    // 0x207350: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x207350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x207354: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x207354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x207358: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x207358u;
    {
        const bool branch_taken_0x207358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207358u;
        // 0x20735c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207358) {
            ctx->pc = 0x207378u;
            return;
        }
    }
    ctx->pc = 0x207360u;
    // 0x207360: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x207360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x207364: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x207364u;
    {
        const bool branch_taken_0x207364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207364) {
            ctx->pc = 0x207368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207364u;
            // 0x207368: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20737Cu;
            return;
        }
    }
    ctx->pc = 0x20736Cu;
    // 0x20736c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x20736cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x207370: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x207370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x207374: 0x0  nop
    ctx->pc = 0x207374u;
    // NOP
    ctx->pc = 0x207378u;
}
