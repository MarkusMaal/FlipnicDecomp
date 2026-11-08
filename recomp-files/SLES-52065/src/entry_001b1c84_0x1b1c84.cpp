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

// Function: entry_001b1c84
// Address: 0x1b1c84 - 0x1b1d18
void entry_001b1c84_0x1b1c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1c84_0x1b1c84");
#endif

    switch (ctx->pc) {
        case 0x1b1c8cu: goto label_1b1c8c;
        case 0x1b1cccu: goto label_1b1ccc;
        case 0x1b1ce0u: goto label_1b1ce0;
        default: break;
    }

    ctx->pc = 0x1b1c84u;

    // 0x1b1c84: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B1C84u;
    SET_GPR_U32(ctx, 31, 0x1B1C8Cu);
    ctx->pc = 0x1B1C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C84u;
    // 0x1b1c88: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B1C84u, 0x1B1C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C8Cu;
label_1b1c8c:
    // 0x1b1c8c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1b1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b1c90: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b1c90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b1c94: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b1c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c98: 0x26e70100  addiu       $a3, $s7, 0x100
    ctx->pc = 0x1b1c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 256));
    // 0x1b1c9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b1c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ca0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b1ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ca4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1b1ca4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ca8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b1ca8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1cac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b1cacu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1cb0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b1cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b1cb4: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1b1cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b1cb8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b1cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1b1cbc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b1cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1b1cc0: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b1cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1b1cc4: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B1CC4u;
    SET_GPR_U32(ctx, 31, 0x1B1CCCu);
    ctx->pc = 0x1B1CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1CC4u;
    // 0x1b1cc8: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B1CC4u, 0x1B1CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1CCCu;
label_1b1ccc:
    // 0x1b1ccc: 0x8fa602a0  lw          $a2, 0x2A0($sp)
    ctx->pc = 0x1b1cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1b1cd0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b1cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b1cd4: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x1b1cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x1b1cd8: 0xc061fa8  jal         func_187EA0
    ctx->pc = 0x1B1CD8u;
    SET_GPR_U32(ctx, 31, 0x1B1CE0u);
    ctx->pc = 0x1B1CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1CD8u;
    // 0x1b1cdc: 0x24a50c38  addiu       $a1, $a1, 0xC38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1B1CD8u, 0x1B1CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1CE0u;
label_1b1ce0:
    // 0x1b1ce0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b1ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b1ce4: 0x26480080  addiu       $t0, $s2, 0x80
    ctx->pc = 0x1b1ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x1b1ce8: 0x8fab0388  lw          $t3, 0x388($sp)
    ctx->pc = 0x1b1ce8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
    // 0x1b1cec: 0x26e90100  addiu       $t1, $s7, 0x100
    ctx->pc = 0x1b1cecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 23), 256));
    // 0x1b1cf0: 0x8faa038c  lw          $t2, 0x38C($sp)
    ctx->pc = 0x1b1cf0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 908)));
    // 0x1b1cf4: 0x27a40408  addiu       $a0, $sp, 0x408
    ctx->pc = 0x1b1cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1032));
    // 0x1b1cf8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b1cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1cfc: 0x27a603e0  addiu       $a2, $sp, 0x3E0
    ctx->pc = 0x1b1cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x1b1d00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b1d00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d04: 0xafa20408  sw          $v0, 0x408($sp)
    ctx->pc = 0x1b1d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 2));
    // 0x1b1d08: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b1d0c: 0xafa2040c  sw          $v0, 0x40C($sp)
    ctx->pc = 0x1b1d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1036), GPR_U32(ctx, 2));
    // 0x1b1d10: 0xc06becc  jal         func_1AFB30
    ctx->pc = 0x1B1D10u;
    SET_GPR_U32(ctx, 31, 0x1B1D18u);
    ctx->pc = 0x1B1D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1D10u;
    // 0x1b1d14: 0xffb60000  sd          $s6, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFB30u, 0x1B1D10u, 0x1B1D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D18u;
}
