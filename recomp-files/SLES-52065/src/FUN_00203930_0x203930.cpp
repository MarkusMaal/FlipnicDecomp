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

// Function: FUN_00203930
// Address: 0x203930 - 0x203974
void FUN_00203930_0x203930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00203930_0x203930");
#endif

    switch (ctx->pc) {
        case 0x20395cu: goto label_20395c;
        default: break;
    }

    ctx->pc = 0x203930u;

    // 0x203930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x203934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20393c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20393cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203940: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x203940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x203944: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x203944u;
    {
        const bool branch_taken_0x203944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203944u;
        // 0x203948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203944) {
            ctx->pc = 0x203954u;
            goto label_203954;
        }
    }
    ctx->pc = 0x20394Cu;
    // 0x20394c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20394Cu;
    {
        const bool branch_taken_0x20394c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20394Cu;
        // 0x203950: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20394c) {
            ctx->pc = 0x203964u;
            goto label_203964;
        }
    }
    ctx->pc = 0x203954u;
label_203954:
    // 0x203954: 0xc07f8ca  jal         func_1FE328
    ctx->pc = 0x203954u;
    SET_GPR_U32(ctx, 31, 0x20395Cu);
    ctx->pc = 0x203958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203954u;
    // 0x203958: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE328u, 0x203954u, 0x20395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20395Cu;
label_20395c:
    // 0x20395c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20395cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x203960: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x203960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_203964:
    // 0x203964: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20396c: 0x3e00008  jr          $ra
    ctx->pc = 0x20396Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20396Cu;
        // 0x203970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20396Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203974u;
}
