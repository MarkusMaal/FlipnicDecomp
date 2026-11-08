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

// Function: FUN_001418f0
// Address: 0x1418f0 - 0x141978
void FUN_001418f0_0x1418f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001418f0_0x1418f0");
#endif

    switch (ctx->pc) {
        case 0x141918u: goto label_141918;
        case 0x141930u: goto label_141930;
        default: break;
    }

    ctx->pc = 0x1418f0u;

    // 0x1418f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1418f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1418f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1418f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1418f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1418f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1418fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1418fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x141900: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x141900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x141904: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x141904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141908: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14190c: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x14190cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x141910: 0xc050664  jal         func_141990
    ctx->pc = 0x141910u;
    SET_GPR_U32(ctx, 31, 0x141918u);
    ctx->pc = 0x141914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141910u;
    // 0x141914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141990u, 0x141910u, 0x141918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141918u;
label_141918:
    // 0x141918: 0x2651002c  addiu       $s1, $s2, 0x2C
    ctx->pc = 0x141918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x14191c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x14191cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x141920: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x141920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141928: 0xc050660  jal         func_141980
    ctx->pc = 0x141928u;
    SET_GPR_U32(ctx, 31, 0x141930u);
    ctx->pc = 0x14192Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141928u;
    // 0x14192c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141980u, 0x141928u, 0x141930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141930u;
label_141930:
    // 0x141930: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x141930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x141934: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x141934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141938: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x141938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x14193c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x14193cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141940: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x141940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x141944: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x141944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x141948: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x141948u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x14194c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x14194cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x141950: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x141950u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x141954: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x141954u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x141958: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x141958u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x14195c: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x14195cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x141960: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x141960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141964: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x141964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14196c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14196cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141970: 0x3e00008  jr          $ra
    ctx->pc = 0x141970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141970u;
        // 0x141974: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141978u;
}
