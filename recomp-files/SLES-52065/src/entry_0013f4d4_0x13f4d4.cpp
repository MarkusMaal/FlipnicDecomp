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

// Function: entry_0013f4d4
// Address: 0x13f4d4 - 0x13f520
void entry_0013f4d4_0x13f4d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f4d4_0x13f4d4");
#endif

    ctx->pc = 0x13f4d4u;

    // 0x13f4d4: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x13f4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x13f4d8: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x13f4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x13f4dc: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x13f4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13f4e0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x13f4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13f4e4: 0x86082b  sltu        $at, $a0, $a2
    ctx->pc = 0x13f4e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x13f4e8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x13F4E8u;
    {
        const bool branch_taken_0x13f4e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f4e8) {
            ctx->pc = 0x13F520u;
            return;
        }
    }
    ctx->pc = 0x13F4F0u;
    // 0x13f4f0: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x13f4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x13f4f4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13f4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13f4f8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x13f4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x13f4fc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13f4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13f500: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13f500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13f504: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13f504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f508: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x13f508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13f50c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x13F50Cu;
    {
        const bool branch_taken_0x13f50c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f50c) {
            ctx->pc = 0x13F574u;
            return;
        }
    }
    ctx->pc = 0x13F514u;
    // 0x13f514: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13f514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13f518: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x13F518u;
    {
        const bool branch_taken_0x13f518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F518u;
        // 0x13f51c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f518) {
            ctx->pc = 0x13F574u;
            return;
        }
    }
    ctx->pc = 0x13F520u;
}
