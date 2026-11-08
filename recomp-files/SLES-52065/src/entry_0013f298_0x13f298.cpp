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

// Function: entry_0013f298
// Address: 0x13f298 - 0x13f2c0
void entry_0013f298_0x13f298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f298_0x13f298");
#endif

    switch (ctx->pc) {
        case 0x13f2a0u: goto label_13f2a0;
        default: break;
    }

    ctx->pc = 0x13f298u;

    // 0x13f298: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13F298u;
    SET_GPR_U32(ctx, 31, 0x13F2A0u);
    ctx->pc = 0x13F29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F298u;
    // 0x13f29c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13F298u, 0x13F2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F2A0u;
label_13f2a0:
    // 0x13f2a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13f2a4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x13f2a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x13f2a8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x13f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x13f2ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13f2acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13f2b0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13f2b4: 0x16630002  bne         $s3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13F2B4u;
    {
        const bool branch_taken_0x13f2b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x13F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F2B4u;
        // 0x13f2b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2b4) {
            ctx->pc = 0x13F2C0u;
            return;
        }
    }
    ctx->pc = 0x13F2BCu;
    // 0x13f2bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13f2bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13f2c0u;
}
