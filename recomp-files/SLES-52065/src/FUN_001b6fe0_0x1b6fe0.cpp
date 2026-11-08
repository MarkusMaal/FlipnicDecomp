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

// Function: FUN_001b6fe0
// Address: 0x1b6fe0 - 0x1b70dc
void FUN_001b6fe0_0x1b6fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b6fe0_0x1b6fe0");
#endif

    switch (ctx->pc) {
        case 0x1b7014u: goto label_1b7014;
        case 0x1b7060u: goto label_1b7060;
        default: break;
    }

    ctx->pc = 0x1b6fe0u;

    // 0x1b6fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b6fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b6fe4: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1b6fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1b6fe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b6fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b6fec: 0x2463b960  addiu       $v1, $v1, -0x46A0
    ctx->pc = 0x1b6fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949216));
    // 0x1b6ff0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b6ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b6ff4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ff8: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x1b6ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x1b6ffc: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b6ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b7000: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b7000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1b7004: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b7004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b7008: 0x24500030  addiu       $s0, $v0, 0x30
    ctx->pc = 0x1b7008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1b700c: 0xc049dd8  jal         func_127760
    ctx->pc = 0x1B700Cu;
    SET_GPR_U32(ctx, 31, 0x1B7014u);
    ctx->pc = 0x1B7010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B700Cu;
    // 0x1b7010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127760u, 0x1B700Cu, 0x1B7014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7014u;
label_1b7014:
    // 0x1b7014: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1b7014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1b7018: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b7018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b701c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1b701cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1b7020: 0x8c23f268  lw          $v1, -0xD98($at)
    ctx->pc = 0x1b7020u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F268u));
    // 0x1b7024: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b7024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b7028: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b7028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b702c: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1b702cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x1b7030: 0x8c23f278  lw          $v1, -0xD88($at)
    ctx->pc = 0x1b7030u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F278u));
    // 0x1b7034: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b7034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b7038: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b7038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b703c: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x1b703cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x1b7040: 0x8c23f4e0  lw          $v1, -0xB20($at)
    ctx->pc = 0x1b7040u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F4E0u));
    // 0x1b7044: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b7044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b7048: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x1b7048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x1b704c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b704cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b7050: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1b7050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1b7054: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b7054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b7058: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1B7058u;
    SET_GPR_U32(ctx, 31, 0x1B7060u);
    ctx->pc = 0x1B705Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7058u;
    // 0x1b705c: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1B7058u, 0x1B7060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7060u;
label_1b7060:
    // 0x1b7060: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x1b7060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b7064: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b7064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7068: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b7068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b706c: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x1b706cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x1b7070: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b7070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b7074: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x1b7074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x1b7078: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b7078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b707c: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1b707cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x1b7080: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b7080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b7084: 0xa0440040  sb          $a0, 0x40($v0)
    ctx->pc = 0x1b7084u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b7088: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b7088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b708c: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x1b708cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x1b7090: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b7090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b7094: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x1b7094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
    // 0x1b7098: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b7098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b709c: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x1b709cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x1b70a0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b70a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b70a4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1b70a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1b70a8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b70a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b70ac: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1b70acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1b70b0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b70b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b70b4: 0xa044000c  sb          $a0, 0xC($v0)
    ctx->pc = 0x1b70b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b70b8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b70b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b70bc: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1b70bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1b70c0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b70c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b70c4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1b70c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1b70c8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b70c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b70cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b70ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b70d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b70d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b70d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B70D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B70D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B70D4u;
        // 0x1b70d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B70D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B70DCu;
}
