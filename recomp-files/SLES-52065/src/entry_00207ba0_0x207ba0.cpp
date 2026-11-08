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

// Function: entry_00207ba0
// Address: 0x207ba0 - 0x207bd8
void entry_00207ba0_0x207ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207ba0_0x207ba0");
#endif

    ctx->pc = 0x207ba0u;

    // 0x207ba0: 0x1300000e  beqz        $t8, . + 4 + (0xE << 2)
    ctx->pc = 0x207BA0u;
    {
        const bool branch_taken_0x207ba0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x207BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207BA0u;
        // 0x207ba4: 0x1862023  subu        $a0, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ba0) {
            ctx->pc = 0x207BDCu;
            return;
        }
    }
    ctx->pc = 0x207BA8u;
    // 0x207ba8: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x207ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x207bac: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x207bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x207bb0: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x207bb0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207bb4: 0x1ca2804  sllv        $a1, $t2, $t6
    ctx->pc = 0x207bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x207bb8: 0x1a42006  srlv        $a0, $a0, $t5
    ctx->pc = 0x207bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 13) & 0x1F));
    // 0x207bbc: 0x1aa1006  srlv        $v0, $t2, $t5
    ctx->pc = 0x207bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x207bc0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x207bc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x207bc4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x207bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x207bc8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x207bc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x207bcc: 0x5783e  dsrl32      $t7, $a1, 0
    ctx->pc = 0x207bccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x207bd0: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x207bd0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x207bd4: 0x0  nop
    ctx->pc = 0x207bd4u;
    // NOP
    ctx->pc = 0x207bd8u;
}
