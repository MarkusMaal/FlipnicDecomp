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

// Function: entry_00138184
// Address: 0x138184 - 0x1381bc
void entry_00138184_0x138184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138184_0x138184");
#endif

    ctx->pc = 0x138184u;

    // 0x138184: 0x0  nop
    ctx->pc = 0x138184u;
    // NOP
    // 0x138188: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x138188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13818c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x13818cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x138190: 0x8f928594  lw          $s2, -0x7A6C($gp)
    ctx->pc = 0x138190u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935956)));
    // 0x138194: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x138194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x138198: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x138198u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13819c: 0x8cc20064  lw          $v0, 0x64($a2)
    ctx->pc = 0x13819cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
    // 0x1381a0: 0x8cc30054  lw          $v1, 0x54($a2)
    ctx->pc = 0x1381a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x1381a4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1381a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1381a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1381A8u;
    {
        const bool branch_taken_0x1381a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1381ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1381A8u;
        // 0x1381ac: 0x648821  addu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1381a8) {
            ctx->pc = 0x1381BCu;
            return;
        }
    }
    ctx->pc = 0x1381B0u;
    // 0x1381b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1381b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1381b4: 0xc04e948  jal         func_13A520
    ctx->pc = 0x1381B4u;
    SET_GPR_U32(ctx, 31, 0x1381BCu);
    ctx->pc = 0x1381B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1381B4u;
    // 0x1381b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A520u, 0x1381B4u, 0x1381BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1381BCu;
}
