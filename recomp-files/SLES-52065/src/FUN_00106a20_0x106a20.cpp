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

// Function: FUN_00106a20
// Address: 0x106a20 - 0x106a6c
void FUN_00106a20_0x106a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106a20_0x106a20");
#endif

    switch (ctx->pc) {
        case 0x106a4cu: goto label_106a4c;
        case 0x106a58u: goto label_106a58;
        default: break;
    }

    ctx->pc = 0x106a20u;

    // 0x106a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106a24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x106a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x106a28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x106a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x106a2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x106a30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x106a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x106a38: 0x80420022  lb          $v0, 0x22($v0)
    ctx->pc = 0x106a38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x106a3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106A3Cu;
    {
        const bool branch_taken_0x106a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A3Cu;
        // 0x106a40: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a3c) {
            ctx->pc = 0x106A4Cu;
            goto label_106a4c;
        }
    }
    ctx->pc = 0x106A44u;
    // 0x106a44: 0xc05a200  jal         func_168800
    ctx->pc = 0x106A44u;
    SET_GPR_U32(ctx, 31, 0x106A4Cu);
    ctx->pc = 0x168800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168800u, 0x106A44u, 0x106A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A4Cu;
label_106a4c:
    // 0x106a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a50: 0xc05a200  jal         func_168800
    ctx->pc = 0x106A50u;
    SET_GPR_U32(ctx, 31, 0x106A58u);
    ctx->pc = 0x106A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A50u;
    // 0x106a54: 0x26050078  addiu       $a1, $s0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168800u, 0x106A50u, 0x106A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A58u;
label_106a58:
    // 0x106a58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x106a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106a5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x106a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106a60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106a64: 0x3e00008  jr          $ra
    ctx->pc = 0x106A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A64u;
        // 0x106a68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106A6Cu;
}
