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

// Function: entry_001bd634
// Address: 0x1bd634 - 0x1bd680
void entry_001bd634_0x1bd634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd634_0x1bd634");
#endif

    ctx->pc = 0x1bd634u;

    // 0x1bd634: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x1bd634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1bd638: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1bd638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1bd63c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1bd63cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bd640: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1bd640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bd644: 0x86082b  sltu        $at, $a0, $a2
    ctx->pc = 0x1bd644u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1bd648: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1BD648u;
    {
        const bool branch_taken_0x1bd648 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd648) {
            ctx->pc = 0x1BD680u;
            return;
        }
    }
    ctx->pc = 0x1BD650u;
    // 0x1bd650: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1bd650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1bd654: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1bd654u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bd658: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1bd658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1bd65c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1bd65cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1bd660: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bd660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bd664: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bd664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd668: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1bd668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bd66c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1BD66Cu;
    {
        const bool branch_taken_0x1bd66c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd66c) {
            ctx->pc = 0x1BD6D4u;
            return;
        }
    }
    ctx->pc = 0x1BD674u;
    // 0x1bd674: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bd674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bd678: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1BD678u;
    {
        const bool branch_taken_0x1bd678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD678u;
        // 0x1bd67c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd678) {
            ctx->pc = 0x1BD6D4u;
            return;
        }
    }
    ctx->pc = 0x1BD680u;
}
