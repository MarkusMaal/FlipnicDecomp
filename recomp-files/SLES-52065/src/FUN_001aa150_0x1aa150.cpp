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

// Function: FUN_001aa150
// Address: 0x1aa150 - 0x1aa24c
void FUN_001aa150_0x1aa150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aa150_0x1aa150");
#endif

    switch (ctx->pc) {
        case 0x1aa1a4u: goto label_1aa1a4;
        case 0x1aa1bcu: goto label_1aa1bc;
        case 0x1aa1ecu: goto label_1aa1ec;
        case 0x1aa204u: goto label_1aa204;
        case 0x1aa210u: goto label_1aa210;
        case 0x1aa21cu: goto label_1aa21c;
        case 0x1aa234u: goto label_1aa234;
        default: break;
    }

    ctx->pc = 0x1aa150u;

    // 0x1aa150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aa150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aa154: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aa154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aa158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aa158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aa15c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aa15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aa160: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aa160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa164: 0x12200033  beqz        $s1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1AA164u;
    {
        const bool branch_taken_0x1aa164 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA164u;
        // 0x1aa168: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa164) {
            ctx->pc = 0x1AA234u;
            goto label_1aa234;
        }
    }
    ctx->pc = 0x1AA16Cu;
    // 0x1aa16c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1aa16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1aa170: 0x26240930  addiu       $a0, $s1, 0x930
    ctx->pc = 0x1aa170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2352));
    // 0x1aa174: 0x2442b5f0  addiu       $v0, $v0, -0x4A10
    ctx->pc = 0x1aa174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948336));
    // 0x1aa178: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AA178u;
    {
        const bool branch_taken_0x1aa178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA178u;
        // 0x1aa17c: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa178) {
            ctx->pc = 0x1AA1A4u;
            goto label_1aa1a4;
        }
    }
    ctx->pc = 0x1AA180u;
    // 0x1aa180: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1aa180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1aa184: 0x2442b590  addiu       $v0, $v0, -0x4A70
    ctx->pc = 0x1aa184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948240));
    // 0x1aa188: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AA188u;
    {
        const bool branch_taken_0x1aa188 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA188u;
        // 0x1aa18c: 0xae22093c  sw          $v0, 0x93C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2364), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa188) {
            ctx->pc = 0x1AA1A4u;
            goto label_1aa1a4;
        }
    }
    ctx->pc = 0x1AA190u;
    // 0x1aa190: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1aa190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1aa194: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa198: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1aa198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1aa19c: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1AA19Cu;
    SET_GPR_U32(ctx, 31, 0x1AA1A4u);
    ctx->pc = 0x1AA1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA19Cu;
    // 0x1aa1a0: 0xae22093c  sw          $v0, 0x93C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2364), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1AA19Cu, 0x1AA1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA1A4u;
label_1aa1a4:
    // 0x1aa1a4: 0x26220820  addiu       $v0, $s1, 0x820
    ctx->pc = 0x1aa1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
    // 0x1aa1a8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AA1A8u;
    {
        const bool branch_taken_0x1aa1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa1a8) {
            ctx->pc = 0x1AA1ECu;
            goto label_1aa1ec;
        }
    }
    ctx->pc = 0x1AA1B0u;
    // 0x1aa1b0: 0x26240840  addiu       $a0, $s1, 0x840
    ctx->pc = 0x1aa1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
    // 0x1aa1b4: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1AA1B4u;
    SET_GPR_U32(ctx, 31, 0x1AA1BCu);
    ctx->pc = 0x1AA1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA1B4u;
    // 0x1aa1b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1AA1B4u, 0x1AA1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA1BCu;
label_1aa1bc:
    // 0x1aa1bc: 0x26240820  addiu       $a0, $s1, 0x820
    ctx->pc = 0x1aa1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
    // 0x1aa1c0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AA1C0u;
    {
        const bool branch_taken_0x1aa1c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa1c0) {
            ctx->pc = 0x1AA1ECu;
            goto label_1aa1ec;
        }
    }
    ctx->pc = 0x1AA1C8u;
    // 0x1aa1c8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1aa1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1aa1cc: 0x2442b4f0  addiu       $v0, $v0, -0x4B10
    ctx->pc = 0x1aa1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948080));
    // 0x1aa1d0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AA1D0u;
    {
        const bool branch_taken_0x1aa1d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1D0u;
        // 0x1aa1d4: 0xae22082c  sw          $v0, 0x82C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa1d0) {
            ctx->pc = 0x1AA1ECu;
            goto label_1aa1ec;
        }
    }
    ctx->pc = 0x1AA1D8u;
    // 0x1aa1d8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1aa1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1aa1dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa1e0: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1aa1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1aa1e4: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1AA1E4u;
    SET_GPR_U32(ctx, 31, 0x1AA1ECu);
    ctx->pc = 0x1AA1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA1E4u;
    // 0x1aa1e8: 0xae22082c  sw          $v0, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1AA1E4u, 0x1AA1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA1ECu;
label_1aa1ec:
    // 0x1aa1ec: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1aa1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x1aa1f0: 0x26240770  addiu       $a0, $s1, 0x770
    ctx->pc = 0x1aa1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1904));
    // 0x1aa1f4: 0x24a56dd0  addiu       $a1, $a1, 0x6DD0
    ctx->pc = 0x1aa1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28112));
    // 0x1aa1f8: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x1aa1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1aa1fc: 0xc07a3bc  jal         func_1E8EF0
    ctx->pc = 0x1AA1FCu;
    SET_GPR_U32(ctx, 31, 0x1AA204u);
    ctx->pc = 0x1AA200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA1FCu;
    // 0x1aa200: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EF0u, 0x1AA1FCu, 0x1AA204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA204u;
label_1aa204:
    // 0x1aa204: 0x262406d0  addiu       $a0, $s1, 0x6D0
    ctx->pc = 0x1aa204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
    // 0x1aa208: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1AA208u;
    SET_GPR_U32(ctx, 31, 0x1AA210u);
    ctx->pc = 0x1AA20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA208u;
    // 0x1aa20c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1AA208u, 0x1AA210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA210u;
label_1aa210:
    // 0x1aa210: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa214: 0xc064324  jal         func_190C90
    ctx->pc = 0x1AA214u;
    SET_GPR_U32(ctx, 31, 0x1AA21Cu);
    ctx->pc = 0x1AA218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA214u;
    // 0x1aa218: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1AA214u, 0x1AA21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA21Cu;
label_1aa21c:
    // 0x1aa21c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1aa21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1aa220: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1aa220u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1aa224: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA224u;
    {
        const bool branch_taken_0x1aa224 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AA228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA224u;
        // 0x1aa228: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa224) {
            ctx->pc = 0x1AA238u;
            goto label_1aa238;
        }
    }
    ctx->pc = 0x1AA22Cu;
    // 0x1aa22c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1AA22Cu;
    SET_GPR_U32(ctx, 31, 0x1AA234u);
    ctx->pc = 0x1AA230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA22Cu;
    // 0x1aa230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1AA22Cu, 0x1AA234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA234u;
label_1aa234:
    // 0x1aa234: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1aa234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aa238:
    // 0x1aa238: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aa238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa23c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aa23cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa240: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aa240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa244: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA244u;
        // 0x1aa248: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA24Cu;
}
