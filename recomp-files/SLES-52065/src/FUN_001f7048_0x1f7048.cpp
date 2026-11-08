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

// Function: FUN_001f7048
// Address: 0x1f7048 - 0x1f7100
void FUN_001f7048_0x1f7048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f7048_0x1f7048");
#endif

    switch (ctx->pc) {
        case 0x1f70b0u: goto label_1f70b0;
        case 0x1f70bcu: goto label_1f70bc;
        case 0x1f70c8u: goto label_1f70c8;
        case 0x1f70d8u: goto label_1f70d8;
        default: break;
    }

    ctx->pc = 0x1f7048u;

    // 0x1f7048: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f7048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f704c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f704cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7050: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1f7050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1f7054: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x1f7054u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x1f7058: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f7058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f705c: 0x8e22bb28  lw          $v0, -0x44D8($s1)
    ctx->pc = 0x1f705cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21BB28u));
    // 0x1f7060: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1f7060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1f7064: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7064u;
    {
        const bool branch_taken_0x1f7064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F7068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7064u;
        // 0x1f7068: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7064) {
            ctx->pc = 0x1F7090u;
            goto label_1f7090;
        }
    }
    ctx->pc = 0x1F706Cu;
    // 0x1f706c: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1f706cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x1f7070: 0x8e02bb2c  lw          $v0, -0x44D4($s0)
    ctx->pc = 0x1f7070u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21BB2Cu));
    // 0x1f7074: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7074u;
    {
        const bool branch_taken_0x1f7074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F7078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7074u;
        // 0x1f7078: 0x3c120022  lui         $s2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7074) {
            ctx->pc = 0x1F7094u;
            goto label_1f7094;
        }
    }
    ctx->pc = 0x1F707Cu;
    // 0x1f707c: 0x8e42bb30  lw          $v0, -0x44D0($s2)
    ctx->pc = 0x1f707cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949680)));
    // 0x1f7080: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F7080u;
    {
        const bool branch_taken_0x1f7080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F7084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7080u;
        // 0x1f7084: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7080) {
            ctx->pc = 0x1F70ECu;
            goto label_1f70ec;
        }
    }
    ctx->pc = 0x1F7088u;
    // 0x1f7088: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7088u;
    {
        const bool branch_taken_0x1f7088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7088u;
        // 0x1f708c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7088) {
            ctx->pc = 0x1F709Cu;
            goto label_1f709c;
        }
    }
    ctx->pc = 0x1F7090u;
label_1f7090:
    // 0x1f7090: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1f7090u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
label_1f7094:
    // 0x1f7094: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x1f7094u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x1f7098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f709c:
    // 0x1f709c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1f709cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1f70a0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1f70a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1f70a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f70a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70a8: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F70A8u;
    SET_GPR_U32(ctx, 31, 0x1F70B0u);
    ctx->pc = 0x1F70ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F70A8u;
    // 0x1f70ac: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F70A8u, 0x1F70B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F70B0u;
label_1f70b0:
    // 0x1f70b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f70b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70b4: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F70B4u;
    SET_GPR_U32(ctx, 31, 0x1F70BCu);
    ctx->pc = 0x1F70B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F70B4u;
    // 0x1f70b8: 0xae22bb28  sw          $v0, -0x44D8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294949672), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F70B4u, 0x1F70BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F70BCu;
label_1f70bc:
    // 0x1f70bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f70bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70c0: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F70C0u;
    SET_GPR_U32(ctx, 31, 0x1F70C8u);
    ctx->pc = 0x1F70C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F70C0u;
    // 0x1f70c4: 0xae02bb2c  sw          $v0, -0x44D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294949676), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F70C0u, 0x1F70C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F70C8u;
label_1f70c8:
    // 0x1f70c8: 0xae42bb30  sw          $v0, -0x44D0($s2)
    ctx->pc = 0x1f70c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294949680), GPR_U32(ctx, 2));
    // 0x1f70cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f70ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70d0: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F70D0u;
    SET_GPR_U32(ctx, 31, 0x1F70D8u);
    ctx->pc = 0x1F70D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F70D0u;
    // 0x1f70d4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F70D0u, 0x1F70D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F70D8u;
label_1f70d8:
    // 0x1f70d8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f70d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f70dc: 0xac62bb20  sw          $v0, -0x44E0($v1)
    ctx->pc = 0x1f70dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x21BB20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB20u, _value); } while (0);
    // 0x1f70e0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f70e4: 0xac40bb34  sw          $zero, -0x44CC($v0)
    ctx->pc = 0x1f70e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21BB34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB34u, _value); } while (0);
    // 0x1f70e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f70e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f70ec:
    // 0x1f70ec: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1f70ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f70f0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1f70f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f70f4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1f70f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f70f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F70F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F70FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F70F8u;
        // 0x1f70fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F70F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7100u;
}
