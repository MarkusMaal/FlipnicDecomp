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

// Function: entry_0020797c
// Address: 0x20797c - 0x207994
void entry_0020797c_0x20797c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020797c_0x20797c");
#endif

    ctx->pc = 0x20797cu;

    // 0x20797c: 0x13000097  beqz        $t8, . + 4 + (0x97 << 2)
    ctx->pc = 0x20797Cu;
    {
        const bool branch_taken_0x20797c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x207980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20797Cu;
        // 0x207980: 0x666023  subu        $t4, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20797c) {
            ctx->pc = 0x207BDCu;
            return;
        }
    }
    ctx->pc = 0x207984u;
    // 0x207984: 0x1ac1006  srlv        $v0, $t4, $t5
    ctx->pc = 0x207984u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x207988: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x207988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20798c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x20798Cu;
    {
        const bool branch_taken_0x20798c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20798Cu;
        // 0x207990: 0x2783e  dsrl32      $t7, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20798c) {
            ctx->pc = 0x207BD8u;
            return;
        }
    }
    ctx->pc = 0x207994u;
}
