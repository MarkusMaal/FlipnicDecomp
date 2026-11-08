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

// Function: FUN_0017abe0
// Address: 0x17abe0 - 0x17ac50
void FUN_0017abe0_0x17abe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017abe0_0x17abe0");
#endif

    switch (ctx->pc) {
        case 0x17abf4u: goto label_17abf4;
        case 0x17ac14u: goto label_17ac14;
        default: break;
    }

    ctx->pc = 0x17abe0u;

    // 0x17abe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17abe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17abe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17abe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17abe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17abe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17abec: 0xc055ec8  jal         func_157B20
    ctx->pc = 0x17ABECu;
    SET_GPR_U32(ctx, 31, 0x17ABF4u);
    ctx->pc = 0x17ABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ABECu;
    // 0x17abf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157B20u, 0x17ABECu, 0x17ABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ABF4u;
label_17abf4:
    // 0x17abf4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x17abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x17abf8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17abfc: 0x2463ad48  addiu       $v1, $v1, -0x52B8
    ctx->pc = 0x17abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946120));
    // 0x17ac00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ac00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac04: 0xae03040c  sw          $v1, 0x40C($s0)
    ctx->pc = 0x17ac04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1036), GPR_U32(ctx, 3));
    // 0x17ac08: 0xae0003d0  sw          $zero, 0x3D0($s0)
    ctx->pc = 0x17ac08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 976), GPR_U32(ctx, 0));
    // 0x17ac0c: 0xc055ed4  jal         func_157B50
    ctx->pc = 0x17AC0Cu;
    SET_GPR_U32(ctx, 31, 0x17AC14u);
    ctx->pc = 0x17AC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC0Cu;
    // 0x17ac10: 0xae020404  sw          $v0, 0x404($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157B50u, 0x17AC0Cu, 0x17AC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AC14u;
label_17ac14:
    // 0x17ac14: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x17ac14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x17ac18: 0xae000400  sw          $zero, 0x400($s0)
    ctx->pc = 0x17ac18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 0));
    // 0x17ac1c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x17ac1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x17ac20: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x17ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x17ac24: 0xae0301e0  sw          $v1, 0x1E0($s0)
    ctx->pc = 0x17ac24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 3));
    // 0x17ac28: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x17ac28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x17ac2c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17ac30: 0xae0201c0  sw          $v0, 0x1C0($s0)
    ctx->pc = 0x17ac30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 2));
    // 0x17ac34: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x17ac34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x17ac38: 0xae0301d0  sw          $v1, 0x1D0($s0)
    ctx->pc = 0x17ac38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 3));
    // 0x17ac3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17ac3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17ac40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ac44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ac44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ac48: 0x3e00008  jr          $ra
    ctx->pc = 0x17AC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC48u;
        // 0x17ac4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AC50u;
}
