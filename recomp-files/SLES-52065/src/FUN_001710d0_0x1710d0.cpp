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

// Function: FUN_001710d0
// Address: 0x1710d0 - 0x171134
void FUN_001710d0_0x1710d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001710d0_0x1710d0");
#endif

    switch (ctx->pc) {
        case 0x1710f8u: goto label_1710f8;
        case 0x171108u: goto label_171108;
        case 0x171114u: goto label_171114;
        case 0x171120u: goto label_171120;
        default: break;
    }

    ctx->pc = 0x1710d0u;

    // 0x1710d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1710d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1710d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1710d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1710d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1710d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1710dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1710dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1710e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1710e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1710e4: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x1710e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x1710e8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1710E8u;
    {
        const bool branch_taken_0x1710e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1710ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710E8u;
        // 0x1710ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1710e8) {
            ctx->pc = 0x171120u;
            goto label_171120;
        }
    }
    ctx->pc = 0x1710F0u;
    // 0x1710f0: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1710F0u;
    SET_GPR_U32(ctx, 31, 0x1710F8u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1710F0u, 0x1710F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1710F8u;
label_1710f8:
    // 0x1710f8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1710f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1710fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1710fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171100: 0xc049ed4  jal         func_127B50
    ctx->pc = 0x171100u;
    SET_GPR_U32(ctx, 31, 0x171108u);
    ctx->pc = 0x171104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171100u;
    // 0x171104: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B50u, 0x171100u, 0x171108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171108u;
label_171108:
    // 0x171108: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x171108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17110c: 0xc07d334  jal         func_1F4CD0
    ctx->pc = 0x17110Cu;
    SET_GPR_U32(ctx, 31, 0x171114u);
    ctx->pc = 0x171110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17110Cu;
    // 0x171110: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4CD0u, 0x17110Cu, 0x171114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171114u;
label_171114:
    // 0x171114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171118: 0xc055fd8  jal         func_157F60
    ctx->pc = 0x171118u;
    SET_GPR_U32(ctx, 31, 0x171120u);
    ctx->pc = 0x17111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171118u;
    // 0x17111c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157F60u, 0x171118u, 0x171120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171120u;
label_171120:
    // 0x171120: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x171120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171124: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x171124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171128: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17112c: 0x3e00008  jr          $ra
    ctx->pc = 0x17112Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17112Cu;
        // 0x171130: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17112Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171134u;
}
