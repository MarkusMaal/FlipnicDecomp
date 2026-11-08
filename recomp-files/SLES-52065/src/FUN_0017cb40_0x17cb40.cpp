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

// Function: FUN_0017cb40
// Address: 0x17cb40 - 0x17cba0
void FUN_0017cb40_0x17cb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017cb40_0x17cb40");
#endif

    switch (ctx->pc) {
        case 0x17cb8cu: goto label_17cb8c;
        default: break;
    }

    ctx->pc = 0x17cb40u;

    // 0x17cb40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17cb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17cb44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17cb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17cb48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17cb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17cb4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17cb4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb50: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x17CB50u;
    {
        const bool branch_taken_0x17cb50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB50u;
        // 0x17cb54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb50) {
            ctx->pc = 0x17CB90u;
            goto label_17cb90;
        }
    }
    ctx->pc = 0x17CB58u;
    // 0x17cb58: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17cb5c: 0x2442b0c0  addiu       $v0, $v0, -0x4F40
    ctx->pc = 0x17cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947008));
    // 0x17cb60: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CB60u;
    {
        const bool branch_taken_0x17cb60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB60u;
        // 0x17cb64: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb60) {
            ctx->pc = 0x17CB74u;
            goto label_17cb74;
        }
    }
    ctx->pc = 0x17CB68u;
    // 0x17cb68: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17cb6c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x17cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x17cb70: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x17cb70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_17cb74:
    // 0x17cb74: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x17cb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x17cb78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17cb78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17cb7c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17CB7Cu;
    {
        const bool branch_taken_0x17cb7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB7Cu;
        // 0x17cb80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb7c) {
            ctx->pc = 0x17CB8Cu;
            goto label_17cb8c;
        }
    }
    ctx->pc = 0x17CB84u;
    // 0x17cb84: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17CB84u;
    SET_GPR_U32(ctx, 31, 0x17CB8Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17CB84u, 0x17CB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CB8Cu;
label_17cb8c:
    // 0x17cb8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17cb8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17cb90:
    // 0x17cb90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17cb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cb94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17cb94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cb98: 0x3e00008  jr          $ra
    ctx->pc = 0x17CB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB98u;
        // 0x17cb9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CBA0u;
}
