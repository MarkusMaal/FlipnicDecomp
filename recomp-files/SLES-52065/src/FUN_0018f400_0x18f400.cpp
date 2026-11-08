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

// Function: FUN_0018f400
// Address: 0x18f400 - 0x18f46c
void FUN_0018f400_0x18f400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018f400_0x18f400");
#endif

    switch (ctx->pc) {
        case 0x18f418u: goto label_18f418;
        case 0x18f460u: goto label_18f460;
        default: break;
    }

    ctx->pc = 0x18f400u;

    // 0x18f400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18f400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f404: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x18f404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x18f408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f40c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x18f40cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18f410: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18f410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f414: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18f414u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f418:
    // 0x18f418: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x18f418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x18f41c: 0x8c6303d0  lw          $v1, 0x3D0($v1)
    ctx->pc = 0x18f41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 976)));
    // 0x18f420: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F420u;
    {
        const bool branch_taken_0x18f420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f420) {
            ctx->pc = 0x18F430u;
            goto label_18f430;
        }
    }
    ctx->pc = 0x18F428u;
    // 0x18f428: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18F428u;
    {
        const bool branch_taken_0x18f428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F428u;
        // 0x18f42c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f428) {
            ctx->pc = 0x18F440u;
            goto label_18f440;
        }
    }
    ctx->pc = 0x18F430u;
label_18f430:
    // 0x18f430: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18f430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18f434: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x18f434u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18f438: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x18F438u;
    {
        const bool branch_taken_0x18f438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F438u;
        // 0x18f43c: 0x25080420  addiu       $t0, $t0, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f438) {
            ctx->pc = 0x18F418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f418;
        }
    }
    ctx->pc = 0x18F440u;
label_18f440:
    // 0x18f440: 0x4e00007  bltz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F440u;
    {
        const bool branch_taken_0x18f440 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x18f440) {
            ctx->pc = 0x18F460u;
            goto label_18f460;
        }
    }
    ctx->pc = 0x18F448u;
    // 0x18f448: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x18f448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x18f44c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18f44cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f450: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x18f450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x18f454: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x18f454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18f458: 0xc05ec7c  jal         func_17B1F0
    ctx->pc = 0x18F458u;
    SET_GPR_U32(ctx, 31, 0x18F460u);
    ctx->pc = 0x18F45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F458u;
    // 0x18f45c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B1F0u, 0x18F458u, 0x18F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F460u;
label_18f460:
    // 0x18f460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f464: 0x3e00008  jr          $ra
    ctx->pc = 0x18F464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F464u;
        // 0x18f468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F46Cu;
}
