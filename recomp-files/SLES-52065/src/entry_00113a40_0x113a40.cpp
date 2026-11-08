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

// Function: entry_00113a40
// Address: 0x113a40 - 0x113a90
void entry_00113a40_0x113a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113a40_0x113a40");
#endif

    switch (ctx->pc) {
        case 0x113a68u: goto label_113a68;
        case 0x113a78u: goto label_113a78;
        default: break;
    }

    ctx->pc = 0x113a40u;

    // 0x113a40: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x113a40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    // 0x113a44: 0x8e140244  lw          $s4, 0x244($s0)
    ctx->pc = 0x113a44u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x113a48: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x113a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x113a4c: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x113a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x113a50: 0x24a5e3a8  addiu       $a1, $a1, -0x1C58
    ctx->pc = 0x113a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960040));
    // 0x113a54: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x113a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x113a58: 0x24070089  addiu       $a3, $zero, 0x89
    ctx->pc = 0x113a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x113a5c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x113a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a60: 0xc057090  jal         func_15C240
    ctx->pc = 0x113A60u;
    SET_GPR_U32(ctx, 31, 0x113A68u);
    ctx->pc = 0x113A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A60u;
    // 0x113a64: 0x24530044  addiu       $s3, $v0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C240u, 0x113A60u, 0x113A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A68u;
label_113a68:
    // 0x113a68: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x113a68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a6c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x113a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x113a70: 0xc040168  jal         func_1005A0
    ctx->pc = 0x113A70u;
    SET_GPR_U32(ctx, 31, 0x113A78u);
    ctx->pc = 0x113A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A70u;
    // 0x113a74: 0x22040  sll         $a0, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x113A70u, 0x113A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A78u;
label_113a78:
    // 0x113a78: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x113a78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x113a7c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x113a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x113a80: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x113a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x113a84: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x113A84u;
    {
        const bool branch_taken_0x113a84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x113A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A84u;
        // 0x113a88: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a84) {
            ctx->pc = 0x113AD4u;
            return;
        }
    }
    ctx->pc = 0x113A8Cu;
    // 0x113a8c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x113a8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x113a90u;
}
