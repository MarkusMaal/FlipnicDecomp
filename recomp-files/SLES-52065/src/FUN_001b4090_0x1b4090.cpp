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

// Function: FUN_001b4090
// Address: 0x1b4090 - 0x1b4128
void FUN_001b4090_0x1b4090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4090_0x1b4090");
#endif

    switch (ctx->pc) {
        case 0x1b40acu: goto label_1b40ac;
        case 0x1b40c4u: goto label_1b40c4;
        case 0x1b40d4u: goto label_1b40d4;
        case 0x1b40e4u: goto label_1b40e4;
        case 0x1b40ecu: goto label_1b40ec;
        case 0x1b40fcu: goto label_1b40fc;
        case 0x1b4104u: goto label_1b4104;
        case 0x1b4114u: goto label_1b4114;
        default: break;
    }

    ctx->pc = 0x1b4090u;

    // 0x1b4090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4094: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b4094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b4098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b4098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b409c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b409cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b40a0: 0x24062780  addiu       $a2, $zero, 0x2780
    ctx->pc = 0x1b40a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10112));
    // 0x1b40a4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1B40A4u;
    SET_GPR_U32(ctx, 31, 0x1B40ACu);
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1B40A4u, 0x1B40ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40ACu;
label_1b40ac:
    // 0x1b40ac: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1b40acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1b40b0: 0x24842eb0  addiu       $a0, $a0, 0x2EB0
    ctx->pc = 0x1b40b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11952));
    // 0x1b40b4: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x1b40b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1b40b8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1b40b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b40bc: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1B40BCu;
    SET_GPR_U32(ctx, 31, 0x1B40C4u);
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1B40BCu, 0x1B40C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40C4u;
label_1b40c4:
    // 0x1b40c4: 0x92020013  lbu         $v0, 0x13($s0)
    ctx->pc = 0x1b40c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x1b40c8: 0xa3828484  sb          $v0, -0x7B7C($gp)
    ctx->pc = 0x1b40c8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935684), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b40cc: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1B40CCu;
    SET_GPR_U32(ctx, 31, 0x1B40D4u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1B40CCu, 0x1B40D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40D4u;
label_1b40d4:
    // 0x1b40d4: 0x92050010  lbu         $a1, 0x10($s0)
    ctx->pc = 0x1b40d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b40d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b40d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b40dc: 0xc062930  jal         func_18A4C0
    ctx->pc = 0x1B40DCu;
    SET_GPR_U32(ctx, 31, 0x1B40E4u);
    ctx->pc = 0x18A4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A4C0u, 0x1B40DCu, 0x1B40E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40E4u;
label_1b40e4:
    // 0x1b40e4: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1B40E4u;
    SET_GPR_U32(ctx, 31, 0x1B40ECu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1B40E4u, 0x1B40ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40ECu;
label_1b40ec:
    // 0x1b40ec: 0x92050012  lbu         $a1, 0x12($s0)
    ctx->pc = 0x1b40ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b40f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b40f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b40f4: 0xc062948  jal         func_18A520
    ctx->pc = 0x1B40F4u;
    SET_GPR_U32(ctx, 31, 0x1B40FCu);
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x1B40F4u, 0x1B40FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40FCu;
label_1b40fc:
    // 0x1b40fc: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1B40FCu;
    SET_GPR_U32(ctx, 31, 0x1B4104u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1B40FCu, 0x1B4104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4104u;
label_1b4104:
    // 0x1b4104: 0x92050011  lbu         $a1, 0x11($s0)
    ctx->pc = 0x1b4104u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x1b4108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b4108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b410c: 0xc062994  jal         func_18A650
    ctx->pc = 0x1B410Cu;
    SET_GPR_U32(ctx, 31, 0x1B4114u);
    ctx->pc = 0x18A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A650u, 0x1B410Cu, 0x1B4114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4114u;
label_1b4114:
    // 0x1b4114: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4118: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b411c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1b411cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b4120: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4128u;
}
