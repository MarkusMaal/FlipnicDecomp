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

// Function: entry_00124e18
// Address: 0x124e18 - 0x124e98
void entry_00124e18_0x124e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124e18_0x124e18");
#endif

    switch (ctx->pc) {
        case 0x124e2cu: goto label_124e2c;
        case 0x124e4cu: goto label_124e4c;
        case 0x124e70u: goto label_124e70;
        case 0x124e90u: goto label_124e90;
        default: break;
    }

    ctx->pc = 0x124e18u;

    // 0x124e18: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x124e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x124e1c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x124e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x124e20: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x124e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x124e24: 0xc040168  jal         func_1005A0
    ctx->pc = 0x124E24u;
    SET_GPR_U32(ctx, 31, 0x124E2Cu);
    ctx->pc = 0x124E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E24u;
    // 0x124e28: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x124E24u, 0x124E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124E2Cu;
label_124e2c:
    // 0x124e2c: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x124e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x124e30: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x124e30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x124e34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e38: 0x24a5f860  addiu       $a1, $a1, -0x7A0
    ctx->pc = 0x124e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965344));
    // 0x124e3c: 0x24c6f9c0  addiu       $a2, $a2, -0x640
    ctx->pc = 0x124e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965696));
    // 0x124e40: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x124e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x124e44: 0xc07a424  jal         func_1E9090
    ctx->pc = 0x124E44u;
    SET_GPR_U32(ctx, 31, 0x124E4Cu);
    ctx->pc = 0x124E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E44u;
    // 0x124e48: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x124E44u, 0x124E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124E4Cu;
label_124e4c:
    // 0x124e4c: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x124e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
    // 0x124e50: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x124e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x124e54: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x124E54u;
    {
        const bool branch_taken_0x124e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E54u;
        // 0x124e58: 0x16082a  slt         $at, $zero, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e54) {
            ctx->pc = 0x124E98u;
            return;
        }
    }
    ctx->pc = 0x124E5Cu;
    // 0x124e5c: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x124e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x124e60: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x124e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x124e64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x124e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x124e68: 0xc040168  jal         func_1005A0
    ctx->pc = 0x124E68u;
    SET_GPR_U32(ctx, 31, 0x124E70u);
    ctx->pc = 0x124E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E68u;
    // 0x124e6c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x124E68u, 0x124E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124E70u;
label_124e70:
    // 0x124e70: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x124e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x124e74: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x124e74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x124e78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e7c: 0x24a5f860  addiu       $a1, $a1, -0x7A0
    ctx->pc = 0x124e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965344));
    // 0x124e80: 0x24c6f9c0  addiu       $a2, $a2, -0x640
    ctx->pc = 0x124e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965696));
    // 0x124e84: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x124e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x124e88: 0xc07a424  jal         func_1E9090
    ctx->pc = 0x124E88u;
    SET_GPR_U32(ctx, 31, 0x124E90u);
    ctx->pc = 0x124E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E88u;
    // 0x124e8c: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x124E88u, 0x124E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124E90u;
label_124e90:
    // 0x124e90: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x124e90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    // 0x124e94: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x124e94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    ctx->pc = 0x124e98u;
}
