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

// Function: entry_001e3c78
// Address: 0x1e3c78 - 0x1e3ccc
void entry_001e3c78_0x1e3c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3c78_0x1e3c78");
#endif

    switch (ctx->pc) {
        case 0x1e3c88u: goto label_1e3c88;
        case 0x1e3cb4u: goto label_1e3cb4;
        default: break;
    }

    ctx->pc = 0x1e3c78u;

    // 0x1e3c78: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x1e3c78u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e3c7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3c80: 0xc0796dc  jal         func_1E5B70
    ctx->pc = 0x1E3C80u;
    SET_GPR_U32(ctx, 31, 0x1E3C88u);
    ctx->pc = 0x1E3C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3C80u;
    // 0x1e3c84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5B70u, 0x1E3C80u, 0x1E3C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3C88u;
label_1e3c88:
    // 0x1e3c88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e3c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e3c8c: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E3C8Cu;
    {
        const bool branch_taken_0x1e3c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3c8c) {
            ctx->pc = 0x1E3CD4u;
            return;
        }
    }
    ctx->pc = 0x1E3C94u;
    // 0x1e3c94: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1e3c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e3c98: 0x92082b  sltu        $at, $a0, $s2
    ctx->pc = 0x1e3c98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1e3c9c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1E3C9Cu;
    {
        const bool branch_taken_0x1e3c9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C9Cu;
        // 0x1e3ca0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c9c) {
            ctx->pc = 0x1E3CCCu;
            return;
        }
    }
    ctx->pc = 0x1E3CA4u;
    // 0x1e3ca4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e3ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e3ca8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e3ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3cac: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1E3CACu;
    SET_GPR_U32(ctx, 31, 0x1E3CB4u);
    ctx->pc = 0x1E3CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3CACu;
    // 0x1e3cb0: 0x523023  subu        $a2, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1E3CACu, 0x1E3CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3CB4u;
label_1e3cb4:
    // 0x1e3cb4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1e3cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e3cb8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1e3cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e3cbc: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x1e3cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e3cc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e3cc4: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1e3cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1e3cc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e3cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1e3cccu;
}
