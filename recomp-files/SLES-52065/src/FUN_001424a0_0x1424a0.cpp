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

// Function: FUN_001424a0
// Address: 0x1424a0 - 0x142540
void FUN_001424a0_0x1424a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001424a0_0x1424a0");
#endif

    switch (ctx->pc) {
        case 0x1424dcu: goto label_1424dc;
        case 0x142504u: goto label_142504;
        case 0x142528u: goto label_142528;
        default: break;
    }

    ctx->pc = 0x1424a0u;

    // 0x1424a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1424a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1424a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1424a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1424a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1424a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1424ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1424acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1424b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1424b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1424b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1424b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1424b8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1424b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1424bc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1424BCu;
    {
        const bool branch_taken_0x1424bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1424C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1424BCu;
        // 0x1424c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1424bc) {
            ctx->pc = 0x1424DCu;
            goto label_1424dc;
        }
    }
    ctx->pc = 0x1424C4u;
    // 0x1424c4: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x1424c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1424c8: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x1424c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1424cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1424ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1424d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1424d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1424d4: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x1424D4u;
    SET_GPR_U32(ctx, 31, 0x1424DCu);
    ctx->pc = 0x1424D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1424D4u;
    // 0x1424d8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x1424D4u, 0x1424DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1424DCu;
label_1424dc:
    // 0x1424dc: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1424dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1424e0: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1424E0u;
    {
        const bool branch_taken_0x1424e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1424e0) {
            ctx->pc = 0x142520u;
            goto label_142520;
        }
    }
    ctx->pc = 0x1424E8u;
    // 0x1424e8: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x1424e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1424ec: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x1424ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1424f0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1424f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1424f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1424f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1424f8: 0xc44c007c  lwc1        $f12, 0x7C($v0)
    ctx->pc = 0x1424f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1424fc: 0xc04c730  jal         func_131CC0
    ctx->pc = 0x1424FCu;
    SET_GPR_U32(ctx, 31, 0x142504u);
    ctx->pc = 0x142500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1424FCu;
    // 0x142500: 0x26320034  addiu       $s2, $s1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CC0u, 0x1424FCu, 0x142504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142504u;
label_142504:
    // 0x142504: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x142504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142508: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x142508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x14250c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x14250cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x142510: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x142510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x142514: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x142514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x142518: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x142518u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14251c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x14251cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_142520:
    // 0x142520: 0xc050950  jal         func_142540
    ctx->pc = 0x142520u;
    SET_GPR_U32(ctx, 31, 0x142528u);
    ctx->pc = 0x142524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142520u;
    // 0x142524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142540u, 0x142520u, 0x142528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142528u;
label_142528:
    // 0x142528: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x142528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14252c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14252cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x142530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142538: 0x3e00008  jr          $ra
    ctx->pc = 0x142538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142538u;
        // 0x14253c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142540u;
}
