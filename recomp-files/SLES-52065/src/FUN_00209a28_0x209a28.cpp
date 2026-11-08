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

// Function: FUN_00209a28
// Address: 0x209a28 - 0x209a9c
void FUN_00209a28_0x209a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00209a28_0x209a28");
#endif

    switch (ctx->pc) {
        case 0x209a4cu: goto label_209a4c;
        case 0x209a58u: goto label_209a58;
        default: break;
    }

    ctx->pc = 0x209a28u;

    // 0x209a28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x209a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x209a2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209a30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x209a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x209a38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x209a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x209a3c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x209a3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a40: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x209a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x209a44: 0xc08256e  jal         func_2095B8
    ctx->pc = 0x209A44u;
    SET_GPR_U32(ctx, 31, 0x209A4Cu);
    ctx->pc = 0x209A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209A44u;
    // 0x209a48: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2095B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2095B8u, 0x209A44u, 0x209A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A4Cu;
label_209a4c:
    // 0x209a4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x209a4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a50: 0xc082530  jal         func_2094C0
    ctx->pc = 0x209A50u;
    SET_GPR_U32(ctx, 31, 0x209A58u);
    ctx->pc = 0x209A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209A50u;
    // 0x209a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2094C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2094C0u, 0x209A50u, 0x209A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A58u;
label_209a58:
    // 0x209a58: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x209a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x209a5c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x209a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x209a60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x209a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x209a64: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x209A64u;
    {
        const bool branch_taken_0x209a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x209a64) {
            ctx->pc = 0x209A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209A64u;
            // 0x209a68: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209A6Cu;
            goto label_209a6c;
        }
    }
    ctx->pc = 0x209A6Cu;
label_209a6c:
    // 0x209a6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x209a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x209a70: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x209a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x209a74: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x209a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x209a78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x209a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x209a7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x209a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209a80: 0x34420109  ori         $v0, $v0, 0x109
    ctx->pc = 0x209a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)265);
    // 0x209a84: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x209a84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209a88: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x209a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x209a8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x209a8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209a90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209a94: 0x3e00008  jr          $ra
    ctx->pc = 0x209A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A94u;
        // 0x209a98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209A9Cu;
}
