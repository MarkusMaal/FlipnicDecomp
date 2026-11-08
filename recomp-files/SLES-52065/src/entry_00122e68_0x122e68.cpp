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

// Function: entry_00122e68
// Address: 0x122e68 - 0x122e8c
void entry_00122e68_0x122e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122e68_0x122e68");
#endif

    switch (ctx->pc) {
        case 0x122e80u: goto label_122e80;
        case 0x122e88u: goto label_122e88;
        default: break;
    }

    ctx->pc = 0x122e68u;

    // 0x122e68: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x122e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
    // 0x122e6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x122e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e70: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x122e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x122e74: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x122e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x122e78: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x122E78u;
    SET_GPR_U32(ctx, 31, 0x122E80u);
    ctx->pc = 0x122E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E78u;
    // 0x122e7c: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x122E78u, 0x122E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E80u;
label_122e80:
    // 0x122e80: 0xc0401a4  jal         func_100690
    ctx->pc = 0x122E80u;
    SET_GPR_U32(ctx, 31, 0x122E88u);
    ctx->pc = 0x122E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E80u;
    // 0x122e84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x122E80u, 0x122E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E88u;
label_122e88:
    // 0x122e88: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x122e88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x122e8cu;
}
