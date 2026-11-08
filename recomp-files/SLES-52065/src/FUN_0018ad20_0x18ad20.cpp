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

// Function: FUN_0018ad20
// Address: 0x18ad20 - 0x18ad6c
void FUN_0018ad20_0x18ad20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018ad20_0x18ad20");
#endif

    switch (ctx->pc) {
        case 0x18ad58u: goto label_18ad58;
        default: break;
    }

    ctx->pc = 0x18ad20u;

    // 0x18ad20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ad20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ad24: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x18ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x18ad28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18ad28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18ad2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18ad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ad30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ad30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ad34: 0x24700480  addiu       $s0, $v1, 0x480
    ctx->pc = 0x18ad34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x18ad38: 0x80630480  lb          $v1, 0x480($v1)
    ctx->pc = 0x18ad38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1152)));
    // 0x18ad3c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18AD3Cu;
    {
        const bool branch_taken_0x18ad3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ad3c) {
            ctx->pc = 0x18AD5Cu;
            goto label_18ad5c;
        }
    }
    ctx->pc = 0x18AD44u;
    // 0x18ad44: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x18ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18ad48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18ad4c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x18ad4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x18ad50: 0xc046c14  jal         func_11B050
    ctx->pc = 0x18AD50u;
    SET_GPR_U32(ctx, 31, 0x18AD58u);
    ctx->pc = 0x18AD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AD50u;
    // 0x18ad54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x18AD50u, 0x18AD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AD58u;
label_18ad58:
    // 0x18ad58: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x18ad58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_18ad5c:
    // 0x18ad5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18ad5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ad60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ad60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ad64: 0x3e00008  jr          $ra
    ctx->pc = 0x18AD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD64u;
        // 0x18ad68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AD6Cu;
}
