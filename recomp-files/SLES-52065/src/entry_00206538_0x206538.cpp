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

// Function: entry_00206538
// Address: 0x206538 - 0x206588
void entry_00206538_0x206538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206538_0x206538");
#endif

    ctx->pc = 0x206538u;

    // 0x206538: 0x1012  mflo        $v0
    ctx->pc = 0x206538u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x20653c: 0x1810  mfhi        $v1
    ctx->pc = 0x20653cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x206540: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x206540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206544: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x206548: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x206548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x20654c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20654cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x206550: 0xe93018  mult        $a2, $a3, $t1
    ctx->pc = 0x206550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x206554: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x206554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x206558: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x20655c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x20655Cu;
    {
        const bool branch_taken_0x20655c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20655c) {
            ctx->pc = 0x206560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20655Cu;
            // 0x206560: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20658Cu;
            return;
        }
    }
    ctx->pc = 0x206564u;
    // 0x206564: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x206564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x206568: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x206568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x20656c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20656Cu;
    {
        const bool branch_taken_0x20656c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20656Cu;
        // 0x206570: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20656c) {
            ctx->pc = 0x206588u;
            return;
        }
    }
    ctx->pc = 0x206574u;
    // 0x206574: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206578: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x206578u;
    {
        const bool branch_taken_0x206578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206578) {
            ctx->pc = 0x20657Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206578u;
            // 0x20657c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20658Cu;
            return;
        }
    }
    ctx->pc = 0x206580u;
    // 0x206580: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x206580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x206584: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x206584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    ctx->pc = 0x206588u;
}
