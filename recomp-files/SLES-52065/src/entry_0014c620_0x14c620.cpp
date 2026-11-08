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

// Function: entry_0014c620
// Address: 0x14c620 - 0x14c65c
void entry_0014c620_0x14c620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c620_0x14c620");
#endif

    ctx->pc = 0x14c620u;

    // 0x14c620: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x14c620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x14c624: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x14c624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x14c628: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x14c628u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14c62c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x14C62Cu;
    {
        const bool branch_taken_0x14c62c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c62c) {
            ctx->pc = 0x14C680u;
            return;
        }
    }
    ctx->pc = 0x14C634u;
    // 0x14c634: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x14c634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x14c638: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x14c638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14c63c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14c63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14c640: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14c640u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14c644: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14c644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14c648: 0x8c720008  lw          $s2, 0x8($v1)
    ctx->pc = 0x14c648u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14c64c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x14c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14c650: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14c654: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14C654u;
    {
        const bool branch_taken_0x14c654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C654u;
        // 0x14c658: 0x2439821  addu        $s3, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c654) {
            ctx->pc = 0x14C674u;
            return;
        }
    }
    ctx->pc = 0x14C65Cu;
}
