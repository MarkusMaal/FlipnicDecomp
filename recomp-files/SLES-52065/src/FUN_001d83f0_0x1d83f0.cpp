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

// Function: FUN_001d83f0
// Address: 0x1d83f0 - 0x1d847c
void FUN_001d83f0_0x1d83f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d83f0_0x1d83f0");
#endif

    switch (ctx->pc) {
        case 0x1d8448u: goto label_1d8448;
        case 0x1d845cu: goto label_1d845c;
        default: break;
    }

    ctx->pc = 0x1d83f0u;

    // 0x1d83f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d83f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d83f4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d83f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d83f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d83f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d83fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d83fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d8400: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1d8400u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
    // 0x1d8404: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8408: 0x26310550  addiu       $s1, $s1, 0x550
    ctx->pc = 0x1d8408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x1d840c: 0x8c43054c  lw          $v1, 0x54C($v0)
    ctx->pc = 0x1d840cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d8410: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1d8410u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x370550u));
    // 0x1d8414: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1d8414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d8418: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x1d8418u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1d841c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1d841cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1d8420: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x1d8420u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d8424: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x1d8424u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d8428: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1d8428u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d842c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1d842cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d8430: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1d8430u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d8434: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x1d8434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1d8438: 0xac4402ac  sw          $a0, 0x2AC($v0)
    ctx->pc = 0x1d8438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 684), GPR_U32(ctx, 4));
    // 0x1d843c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d843cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d8440: 0xc0783f6  jal         func_1E0FD8
    ctx->pc = 0x1D8440u;
    SET_GPR_U32(ctx, 31, 0x1D8448u);
    ctx->pc = 0x1D8444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8440u;
    // 0x1d8444: 0x90650001  lbu         $a1, 0x1($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0FD8u, 0x1D8440u, 0x1D8448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8448u;
label_1d8448:
    // 0x1d8448: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d8448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d844c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d844cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8450: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1d8450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d8454: 0xc078422  jal         func_1E1088
    ctx->pc = 0x1D8454u;
    SET_GPR_U32(ctx, 31, 0x1D845Cu);
    ctx->pc = 0x1D8458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8454u;
    // 0x1d8458: 0xac620310  sw          $v0, 0x310($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 784), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1088u, 0x1D8454u, 0x1D845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D845Cu;
label_1d845c:
    // 0x1d845c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d845cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d8460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8464: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1d8464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d8468: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d846c: 0xae020314  sw          $v0, 0x314($s0)
    ctx->pc = 0x1d846cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 788), GPR_U32(ctx, 2));
    // 0x1d8470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8474: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8474u;
        // 0x1d8478: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D847Cu;
}
