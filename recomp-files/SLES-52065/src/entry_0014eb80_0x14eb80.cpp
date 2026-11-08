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

// Function: entry_0014eb80
// Address: 0x14eb80 - 0x14ebb0
void entry_0014eb80_0x14eb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014eb80_0x14eb80");
#endif

    switch (ctx->pc) {
        case 0x14eba8u: goto label_14eba8;
        default: break;
    }

    ctx->pc = 0x14eb80u;

    // 0x14eb80: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x14eb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14eb84: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x14eb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x14eb88: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x14eb88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x14eb8c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x14EB8Cu;
    {
        const bool branch_taken_0x14eb8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB8Cu;
        // 0x14eb90: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb8c) {
            ctx->pc = 0x14EBB0u;
            return;
        }
    }
    ctx->pc = 0x14EB94u;
    // 0x14eb94: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14eb94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14eb98: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14eb9c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14eba0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14EBA0u;
    SET_GPR_U32(ctx, 31, 0x14EBA8u);
    ctx->pc = 0x14EBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EBA0u;
    // 0x14eba4: 0x24a5f2e0  addiu       $a1, $a1, -0xD20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14EBA0u, 0x14EBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EBA8u;
label_14eba8:
    // 0x14eba8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14EBA8u;
    SET_GPR_U32(ctx, 31, 0x14EBB0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14EBA8u, 0x14EBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EBB0u;
}
