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

// Function: FUN_001b4000
// Address: 0x1b4000 - 0x1b408c
void FUN_001b4000_0x1b4000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4000_0x1b4000");
#endif

    switch (ctx->pc) {
        case 0x1b4028u: goto label_1b4028;
        case 0x1b4038u: goto label_1b4038;
        case 0x1b4044u: goto label_1b4044;
        case 0x1b4050u: goto label_1b4050;
        case 0x1b405cu: goto label_1b405c;
        case 0x1b4068u: goto label_1b4068;
        case 0x1b4074u: goto label_1b4074;
        default: break;
    }

    ctx->pc = 0x1b4000u;

    // 0x1b4000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b4004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b4008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b4008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b400c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b400cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4010: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1b4010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1b4014: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1b4014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1b4018: 0x24a52eb0  addiu       $a1, $a1, 0x2EB0
    ctx->pc = 0x1b4018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11952));
    // 0x1b401c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1b401cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b4020: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1B4020u;
    SET_GPR_U32(ctx, 31, 0x1B4028u);
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1B4020u, 0x1B4028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4028u;
label_1b4028:
    // 0x1b4028: 0x93828484  lbu         $v0, -0x7B7C($gp)
    ctx->pc = 0x1b4028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935684)));
    // 0x1b402c: 0xa2020013  sb          $v0, 0x13($s0)
    ctx->pc = 0x1b402cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4030: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1B4030u;
    SET_GPR_U32(ctx, 31, 0x1B4038u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1B4030u, 0x1B4038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4038u;
label_1b4038:
    // 0x1b4038: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b4038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b403c: 0xc062944  jal         func_18A510
    ctx->pc = 0x1B403Cu;
    SET_GPR_U32(ctx, 31, 0x1B4044u);
    ctx->pc = 0x18A510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A510u, 0x1B403Cu, 0x1B4044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4044u;
label_1b4044:
    // 0x1b4044: 0xa2020010  sb          $v0, 0x10($s0)
    ctx->pc = 0x1b4044u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4048: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1B4048u;
    SET_GPR_U32(ctx, 31, 0x1B4050u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1B4048u, 0x1B4050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4050u;
label_1b4050:
    // 0x1b4050: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b4050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4054: 0xc062990  jal         func_18A640
    ctx->pc = 0x1B4054u;
    SET_GPR_U32(ctx, 31, 0x1B405Cu);
    ctx->pc = 0x18A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A640u, 0x1B4054u, 0x1B405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B405Cu;
label_1b405c:
    // 0x1b405c: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x1b405cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4060: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1B4060u;
    SET_GPR_U32(ctx, 31, 0x1B4068u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1B4060u, 0x1B4068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4068u;
label_1b4068:
    // 0x1b4068: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b4068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b406c: 0xc0629b8  jal         func_18A6E0
    ctx->pc = 0x1B406Cu;
    SET_GPR_U32(ctx, 31, 0x1B4074u);
    ctx->pc = 0x18A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A6E0u, 0x1B406Cu, 0x1B4074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4074u;
label_1b4074:
    // 0x1b4074: 0xa2020011  sb          $v0, 0x11($s0)
    ctx->pc = 0x1b4074u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4078: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b407c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b407cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4080: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1b4080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b4084: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B408Cu;
}
