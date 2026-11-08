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

// Function: FUN_0017a080
// Address: 0x17a080 - 0x17a128
void FUN_0017a080_0x17a080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017a080_0x17a080");
#endif

    switch (ctx->pc) {
        case 0x17a09cu: goto label_17a09c;
        case 0x17a0d8u: goto label_17a0d8;
        case 0x17a0e8u: goto label_17a0e8;
        case 0x17a0f8u: goto label_17a0f8;
        case 0x17a104u: goto label_17a104;
        default: break;
    }

    ctx->pc = 0x17a080u;

    // 0x17a080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17a080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17a084: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17a088: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a08c: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x17a08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x17a090: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x17a090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x17a094: 0xc056360  jal         func_158D80
    ctx->pc = 0x17A094u;
    SET_GPR_U32(ctx, 31, 0x17A09Cu);
    ctx->pc = 0x17A098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A094u;
    // 0x17a098: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x17A094u, 0x17A09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A09Cu;
label_17a09c:
    // 0x17a09c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x17a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x17a0a0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17a0a4: 0x24639f50  addiu       $v1, $v1, -0x60B0
    ctx->pc = 0x17a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942544));
    // 0x17a0a8: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x17a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x17a0ac: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x17a0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x17a0b0: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x17a0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x17a0b4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x17a0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x17a0b8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x17a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x17a0bc: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x17a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x17a0c0: 0x2463aaf0  addiu       $v1, $v1, -0x5510
    ctx->pc = 0x17a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945520));
    // 0x17a0c4: 0x27868350  addiu       $a2, $gp, -0x7CB0
    ctx->pc = 0x17a0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935376));
    // 0x17a0c8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x17a0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x17a0cc: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x17a0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x17a0d0: 0xc0621c0  jal         func_188700
    ctx->pc = 0x17A0D0u;
    SET_GPR_U32(ctx, 31, 0x17A0D8u);
    ctx->pc = 0x17A0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A0D0u;
    // 0x17a0d4: 0x24440360  addiu       $a0, $v0, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x17A0D0u, 0x17A0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A0D8u;
label_17a0d8:
    // 0x17a0d8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x17a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x17a0dc: 0x24046040  addiu       $a0, $zero, 0x6040
    ctx->pc = 0x17a0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24640));
    // 0x17a0e0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x17A0E0u;
    SET_GPR_U32(ctx, 31, 0x17A0E8u);
    ctx->pc = 0x17A0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A0E0u;
    // 0x17a0e4: 0xac400424  sw          $zero, 0x424($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1060), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x17A0E0u, 0x17A0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A0E8u;
label_17a0e8:
    // 0x17a0e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A0E8u;
    {
        const bool branch_taken_0x17a0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0E8u;
        // 0x17a0ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a0e8) {
            ctx->pc = 0x17A0F8u;
            goto label_17a0f8;
        }
    }
    ctx->pc = 0x17A0F0u;
    // 0x17a0f0: 0xc05c788  jal         func_171E20
    ctx->pc = 0x17A0F0u;
    SET_GPR_U32(ctx, 31, 0x17A0F8u);
    ctx->pc = 0x171E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171E20u, 0x17A0F0u, 0x17A0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A0F8u;
label_17a0f8:
    // 0x17a0f8: 0xaf828630  sw          $v0, -0x79D0($gp)
    ctx->pc = 0x17a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936112), GPR_U32(ctx, 2));
    // 0x17a0fc: 0xc05c9ac  jal         func_1726B0
    ctx->pc = 0x17A0FCu;
    SET_GPR_U32(ctx, 31, 0x17A104u);
    ctx->pc = 0x17A100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A0FCu;
    // 0x17a100: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1726B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1726B0u, 0x17A0FCu, 0x17A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A104u;
label_17a104:
    // 0x17a104: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x17a104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x17a108: 0x8f828630  lw          $v0, -0x79D0($gp)
    ctx->pc = 0x17a108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    // 0x17a10c: 0xac434024  sw          $v1, 0x4024($v0)
    ctx->pc = 0x17a10cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16420), GPR_U32(ctx, 3));
    // 0x17a110: 0xaf808624  sw          $zero, -0x79DC($gp)
    ctx->pc = 0x17a110u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936100), GPR_U32(ctx, 0));
    // 0x17a114: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x17a114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x17a118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a11c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a120: 0x3e00008  jr          $ra
    ctx->pc = 0x17A120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A120u;
        // 0x17a124: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A128u;
}
