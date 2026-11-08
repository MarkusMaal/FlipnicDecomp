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

// Function: FUN_001c7910
// Address: 0x1c7910 - 0x1c79e4
void FUN_001c7910_0x1c7910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c7910_0x1c7910");
#endif

    switch (ctx->pc) {
        case 0x1c7928u: goto label_1c7928;
        case 0x1c7934u: goto label_1c7934;
        case 0x1c7940u: goto label_1c7940;
        case 0x1c794cu: goto label_1c794c;
        case 0x1c795cu: goto label_1c795c;
        case 0x1c7964u: goto label_1c7964;
        case 0x1c7974u: goto label_1c7974;
        case 0x1c797cu: goto label_1c797c;
        case 0x1c7994u: goto label_1c7994;
        case 0x1c79a0u: goto label_1c79a0;
        case 0x1c79c0u: goto label_1c79c0;
        case 0x1c79d4u: goto label_1c79d4;
        default: break;
    }

    ctx->pc = 0x1c7910u;

    // 0x1c7910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c7910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7914: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c7914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7918: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c7918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c791c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c791cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c7920: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C7920u;
    SET_GPR_U32(ctx, 31, 0x1C7928u);
    ctx->pc = 0x1C7924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7920u;
    // 0x1c7924: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C7920u, 0x1C7928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7928u;
label_1c7928:
    // 0x1c7928: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c792c: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C792Cu;
    SET_GPR_U32(ctx, 31, 0x1C7934u);
    ctx->pc = 0x1C7930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C792Cu;
    // 0x1c7930: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C792Cu, 0x1C7934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7934u;
label_1c7934:
    // 0x1c7934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7938: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C7938u;
    SET_GPR_U32(ctx, 31, 0x1C7940u);
    ctx->pc = 0x1C793Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7938u;
    // 0x1c793c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C7938u, 0x1C7940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7940u;
label_1c7940:
    // 0x1c7940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7944: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C7944u;
    SET_GPR_U32(ctx, 31, 0x1C794Cu);
    ctx->pc = 0x1C7948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7944u;
    // 0x1c7948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C7944u, 0x1C794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C794Cu;
label_1c794c:
    // 0x1c794c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c794cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7950: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c7950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c7954: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C7954u;
    SET_GPR_U32(ctx, 31, 0x1C795Cu);
    ctx->pc = 0x1C7958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7954u;
    // 0x1c7958: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C7954u, 0x1C795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C795Cu;
label_1c795c:
    // 0x1c795c: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C795Cu;
    SET_GPR_U32(ctx, 31, 0x1C7964u);
    ctx->pc = 0x1C7960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C795Cu;
    // 0x1c7960: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C795Cu, 0x1C7964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7964u;
label_1c7964:
    // 0x1c7964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7968: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c7968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c796c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C796Cu;
    SET_GPR_U32(ctx, 31, 0x1C7974u);
    ctx->pc = 0x1C7970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C796Cu;
    // 0x1c7970: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C796Cu, 0x1C7974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7974u;
label_1c7974:
    // 0x1c7974: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C7974u;
    SET_GPR_U32(ctx, 31, 0x1C797Cu);
    ctx->pc = 0x1C7978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7974u;
    // 0x1c7978: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C7974u, 0x1C797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C797Cu;
label_1c797c:
    // 0x1c797c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c797cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7980: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c7980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c7984: 0xac22f4d8  sw          $v0, -0xB28($at)
    ctx->pc = 0x1c7984u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F4D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F4D8u, _value); } while (0);
    // 0x1c7988: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1c7988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c798c: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1C798Cu;
    SET_GPR_U32(ctx, 31, 0x1C7994u);
    ctx->pc = 0x1C7990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C798Cu;
    // 0x1c7990: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1C798Cu, 0x1C7994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7994u;
label_1c7994:
    // 0x1c7994: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1c7994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c7998: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1C7998u;
    SET_GPR_U32(ctx, 31, 0x1C79A0u);
    ctx->pc = 0x1C799Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7998u;
    // 0x1c799c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1C7998u, 0x1C79A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79A0u;
label_1c79a0:
    // 0x1c79a0: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c79a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c79a4: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1c79a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c79a8: 0x9042282b  lbu         $v0, 0x282B($v0)
    ctx->pc = 0x1c79a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10283)));
    // 0x1c79ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C79ACu;
    {
        const bool branch_taken_0x1c79ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c79ac) {
            ctx->pc = 0x1C79C8u;
            goto label_1c79c8;
        }
    }
    ctx->pc = 0x1C79B4u;
    // 0x1c79b4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1c79b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c79b8: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1C79B8u;
    SET_GPR_U32(ctx, 31, 0x1C79C0u);
    ctx->pc = 0x1C79BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C79B8u;
    // 0x1c79bc: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1C79B8u, 0x1C79C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79C0u;
label_1c79c0:
    // 0x1c79c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C79C0u;
    {
        const bool branch_taken_0x1c79c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C79C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79C0u;
        // 0x1c79c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c79c0) {
            ctx->pc = 0x1C79D8u;
            goto label_1c79d8;
        }
    }
    ctx->pc = 0x1C79C8u;
label_1c79c8:
    // 0x1c79c8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1c79c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c79cc: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1C79CCu;
    SET_GPR_U32(ctx, 31, 0x1C79D4u);
    ctx->pc = 0x1C79D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C79CCu;
    // 0x1c79d0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1C79CCu, 0x1C79D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C79D4u;
label_1c79d4:
    // 0x1c79d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c79d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c79d8:
    // 0x1c79d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c79d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c79dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C79DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C79E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79DCu;
        // 0x1c79e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C79DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C79E4u;
}
