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

// Function: entry_001a709c
// Address: 0x1a709c - 0x1a70cc
void entry_001a709c_0x1a709c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a709c_0x1a709c");
#endif

    ctx->pc = 0x1a709cu;

    // 0x1a709c: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x1a709cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x1a70a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a70a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a70a4: 0x8f838318  lw          $v1, -0x7CE8($gp)
    ctx->pc = 0x1a70a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x1a70a8: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1a70a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1a70ac: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1a70acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a70b0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1a70b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a70b4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1a70b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a70b8: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x1a70b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a70bc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A70BCu;
    {
        const bool branch_taken_0x1a70bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A70C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70BCu;
        // 0x1a70c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a70bc) {
            ctx->pc = 0x1A70CCu;
            return;
        }
    }
    ctx->pc = 0x1A70C4u;
    // 0x1a70c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A70C4u;
    {
        const bool branch_taken_0x1a70c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a70c4) {
            ctx->pc = 0x1A70D0u;
            return;
        }
    }
    ctx->pc = 0x1A70CCu;
}
