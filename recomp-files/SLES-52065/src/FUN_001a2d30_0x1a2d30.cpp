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

// Function: FUN_001a2d30
// Address: 0x1a2d30 - 0x1a2d90
void FUN_001a2d30_0x1a2d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a2d30_0x1a2d30");
#endif

    switch (ctx->pc) {
        case 0x1a2d60u: goto label_1a2d60;
        case 0x1a2d78u: goto label_1a2d78;
        default: break;
    }

    ctx->pc = 0x1a2d30u;

    // 0x1a2d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a2d34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a2d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a2d38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a2d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a2d3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a2d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2d40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a2d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d44: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A2D44u;
    {
        const bool branch_taken_0x1a2d44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D44u;
        // 0x1a2d48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2d44) {
            ctx->pc = 0x1A2D78u;
            goto label_1a2d78;
        }
    }
    ctx->pc = 0x1A2D4Cu;
    // 0x1a2d4c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a2d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a2d50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d54: 0x2442b3c0  addiu       $v0, $v0, -0x4C40
    ctx->pc = 0x1a2d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947776));
    // 0x1a2d58: 0xc064324  jal         func_190C90
    ctx->pc = 0x1A2D58u;
    SET_GPR_U32(ctx, 31, 0x1A2D60u);
    ctx->pc = 0x1A2D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2D58u;
    // 0x1a2d5c: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1A2D58u, 0x1A2D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2D60u;
label_1a2d60:
    // 0x1a2d60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1a2d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1a2d64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a2d64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a2d68: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2D68u;
    {
        const bool branch_taken_0x1a2d68 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A2D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D68u;
        // 0x1a2d6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2d68) {
            ctx->pc = 0x1A2D7Cu;
            goto label_1a2d7c;
        }
    }
    ctx->pc = 0x1A2D70u;
    // 0x1a2d70: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1A2D70u;
    SET_GPR_U32(ctx, 31, 0x1A2D78u);
    ctx->pc = 0x1A2D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2D70u;
    // 0x1a2d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1A2D70u, 0x1A2D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2D78u;
label_1a2d78:
    // 0x1a2d78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a2d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a2d7c:
    // 0x1a2d7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a2d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2d80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a2d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2d84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a2d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2d88: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D88u;
        // 0x1a2d8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D90u;
}
