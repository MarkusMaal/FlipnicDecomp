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

// Function: FUN_001443a0
// Address: 0x1443a0 - 0x144454
void FUN_001443a0_0x1443a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001443a0_0x1443a0");
#endif

    switch (ctx->pc) {
        case 0x1443b8u: goto label_1443b8;
        case 0x1443d4u: goto label_1443d4;
        case 0x1443e8u: goto label_1443e8;
        case 0x14441cu: goto label_14441c;
        default: break;
    }

    ctx->pc = 0x1443a0u;

    // 0x1443a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1443a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1443a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1443a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1443a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1443a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1443ac: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x1443acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x1443b0: 0xc04ceb4  jal         func_133AD0
    ctx->pc = 0x1443B0u;
    SET_GPR_U32(ctx, 31, 0x1443B8u);
    ctx->pc = 0x1443B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1443B0u;
    // 0x1443b4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133AD0u, 0x1443B0u, 0x1443B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443B8u;
label_1443b8:
    // 0x1443b8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1443b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1443bc: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1443bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1443c0: 0x246391c0  addiu       $v1, $v1, -0x6E40
    ctx->pc = 0x1443c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939072));
    // 0x1443c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1443c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1443c8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1443c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1443cc: 0xc0505b8  jal         func_1416E0
    ctx->pc = 0x1443CCu;
    SET_GPR_U32(ctx, 31, 0x1443D4u);
    ctx->pc = 0x1443D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1443CCu;
    // 0x1443d0: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1416E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1416E0u, 0x1443CCu, 0x1443D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443D4u;
label_1443d4:
    // 0x1443d4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1443d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1443d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1443d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1443dc: 0x245000e8  addiu       $s0, $v0, 0xE8
    ctx->pc = 0x1443dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1443e0: 0xc049dd8  jal         func_127760
    ctx->pc = 0x1443E0u;
    SET_GPR_U32(ctx, 31, 0x1443E8u);
    ctx->pc = 0x1443E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1443E0u;
    // 0x1443e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127760u, 0x1443E0u, 0x1443E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443E8u;
label_1443e8:
    // 0x1443e8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1443e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1443ec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1443ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1443f0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1443f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1443f4: 0x24a5f160  addiu       $a1, $a1, -0xEA0
    ctx->pc = 0x1443f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963552));
    // 0x1443f8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1443f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1443fc: 0xac4000e4  sw          $zero, 0xE4($v0)
    ctx->pc = 0x1443fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 0));
    // 0x144400: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x144400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x144404: 0xac4000f4  sw          $zero, 0xF4($v0)
    ctx->pc = 0x144404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 0));
    // 0x144408: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x144408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14440c: 0xac4000f8  sw          $zero, 0xF8($v0)
    ctx->pc = 0x14440cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 0));
    // 0x144410: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x144410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x144414: 0xc080702  jal         func_201C08
    ctx->pc = 0x144414u;
    SET_GPR_U32(ctx, 31, 0x14441Cu);
    ctx->pc = 0x144418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144414u;
    // 0x144418: 0x244400fc  addiu       $a0, $v0, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x144414u, 0x14441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14441Cu;
label_14441c:
    // 0x14441c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x14441cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x144420: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x144420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x144424: 0xac400148  sw          $zero, 0x148($v0)
    ctx->pc = 0x144424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 0));
    // 0x144428: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x144428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14442c: 0xac400144  sw          $zero, 0x144($v0)
    ctx->pc = 0x14442cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 0));
    // 0x144430: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x144430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x144434: 0xac400140  sw          $zero, 0x140($v0)
    ctx->pc = 0x144434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 0));
    // 0x144438: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x144438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x14443c: 0xac43014c  sw          $v1, 0x14C($v0)
    ctx->pc = 0x14443cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
    // 0x144440: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x144440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x144444: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x144444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14444c: 0x3e00008  jr          $ra
    ctx->pc = 0x14444Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14444Cu;
        // 0x144450: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14444Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144454u;
}
