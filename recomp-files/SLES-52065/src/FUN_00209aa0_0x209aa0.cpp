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

// Function: FUN_00209aa0
// Address: 0x209aa0 - 0x209ae8
void FUN_00209aa0_0x209aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00209aa0_0x209aa0");
#endif

    switch (ctx->pc) {
        case 0x209ab4u: goto label_209ab4;
        default: break;
    }

    ctx->pc = 0x209aa0u;

    // 0x209aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209aa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209aa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x209aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x209aac: 0xc082530  jal         func_2094C0
    ctx->pc = 0x209AACu;
    SET_GPR_U32(ctx, 31, 0x209AB4u);
    ctx->pc = 0x209AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AACu;
    // 0x209ab0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2094C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2094C0u, 0x209AACu, 0x209AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AB4u;
label_209ab4:
    // 0x209ab4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x209ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x209ab8: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x209ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x209abc: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x209abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x209ac0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x209ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x209ac4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x209ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x209ac8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209acc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x209accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x209ad0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x209ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x209ad4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x209ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x209ad8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x209ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x209adc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209adcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x209AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AE0u;
        // 0x209ae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209AE8u;
}
