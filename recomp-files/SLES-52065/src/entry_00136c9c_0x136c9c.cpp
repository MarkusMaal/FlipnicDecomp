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

// Function: entry_00136c9c
// Address: 0x136c9c - 0x136cd0
void entry_00136c9c_0x136c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136c9c_0x136c9c");
#endif

    switch (ctx->pc) {
        case 0x136ca4u: goto label_136ca4;
        case 0x136cb0u: goto label_136cb0;
        case 0x136cc8u: goto label_136cc8;
        default: break;
    }

    ctx->pc = 0x136c9cu;

    // 0x136c9c: 0xc060778  jal         func_181DE0
    ctx->pc = 0x136C9Cu;
    SET_GPR_U32(ctx, 31, 0x136CA4u);
    ctx->pc = 0x181DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181DE0u, 0x136C9Cu, 0x136CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CA4u;
label_136ca4:
    // 0x136ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ca8: 0xc053c54  jal         func_14F150
    ctx->pc = 0x136CA8u;
    SET_GPR_U32(ctx, 31, 0x136CB0u);
    ctx->pc = 0x136CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CA8u;
    // 0x136cac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F150u, 0x136CA8u, 0x136CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CB0u;
label_136cb0:
    // 0x136cb0: 0x8f82851c  lw          $v0, -0x7AE4($gp)
    ctx->pc = 0x136cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935836)));
    // 0x136cb4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x136cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x136cb8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x136cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x136cbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x136cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x136cc0: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x136CC0u;
    SET_GPR_U32(ctx, 31, 0x136CC8u);
    ctx->pc = 0x136CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CC0u;
    // 0x136cc4: 0xaf82851c  sw          $v0, -0x7AE4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935836), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x136CC0u, 0x136CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CC8u;
label_136cc8:
    // 0x136cc8: 0xc04a070  jal         func_1281C0
    ctx->pc = 0x136CC8u;
    SET_GPR_U32(ctx, 31, 0x136CD0u);
    ctx->pc = 0x136CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CC8u;
    // 0x136ccc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1281C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1281C0u, 0x136CC8u, 0x136CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CD0u;
}
