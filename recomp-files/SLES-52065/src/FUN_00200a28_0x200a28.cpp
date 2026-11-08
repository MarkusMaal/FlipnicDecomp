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

// Function: FUN_00200a28
// Address: 0x200a28 - 0x200a94
void FUN_00200a28_0x200a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00200a28_0x200a28");
#endif

    switch (ctx->pc) {
        case 0x200a68u: goto label_200a68;
        case 0x200a78u: goto label_200a78;
        default: break;
    }

    ctx->pc = 0x200a28u;

    // 0x200a28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x200a2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200a30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x200a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a34: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x200a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x200a38: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x200a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x200a3c: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x200a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x200a40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x200A40u;
    {
        const bool branch_taken_0x200a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A40u;
        // 0x200a44: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a40) {
            ctx->pc = 0x200A60u;
            goto label_200a60;
        }
    }
    ctx->pc = 0x200A48u;
    // 0x200a48: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x200a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x200a4c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x200a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x200a50: 0x24424f98  addiu       $v0, $v0, 0x4F98
    ctx->pc = 0x200a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20376));
    // 0x200a54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x200a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x200a58: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x200A58u;
    {
        const bool branch_taken_0x200a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A58u;
        // 0x200a5c: 0xdc620000  ld          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a58) {
            ctx->pc = 0x200A84u;
            goto label_200a84;
        }
    }
    ctx->pc = 0x200A60u;
label_200a60:
    // 0x200a60: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x200A60u;
    {
        const bool branch_taken_0x200a60 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x200A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A60u;
        // 0x200a64: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a60) {
            ctx->pc = 0x200A84u;
            goto label_200a84;
        }
    }
    ctx->pc = 0x200A68u;
label_200a68:
    // 0x200a68: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x200a68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x200a6c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x200a6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x200a70: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x200A70u;
    SET_GPR_U32(ctx, 31, 0x200A78u);
    ctx->pc = 0x200A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A70u;
    // 0x200a74: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x200A70u, 0x200A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A78u;
label_200a78:
    // 0x200a78: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x200A78u;
    {
        const bool branch_taken_0x200a78 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x200A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A78u;
        // 0x200a7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200a78) {
            ctx->pc = 0x200A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200a68;
        }
    }
    ctx->pc = 0x200A80u;
    // 0x200a80: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x200a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_200a84:
    // 0x200a84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x200a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200a88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200a88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x200A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A8Cu;
        // 0x200a90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200A94u;
}
