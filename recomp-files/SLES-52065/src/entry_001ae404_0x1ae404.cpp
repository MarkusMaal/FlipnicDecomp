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

// Function: entry_001ae404
// Address: 0x1ae404 - 0x1ae4a8
void entry_001ae404_0x1ae404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae404_0x1ae404");
#endif

    switch (ctx->pc) {
        case 0x1ae428u: goto label_1ae428;
        case 0x1ae454u: goto label_1ae454;
        case 0x1ae468u: goto label_1ae468;
        case 0x1ae478u: goto label_1ae478;
        default: break;
    }

    ctx->pc = 0x1ae404u;

label_1ae404:
    // 0x1ae404: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1ae404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1ae408:
    // 0x1ae408: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1ae408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1ae40c:
    // 0x1ae40c: 0x8c420300  lw          $v0, 0x300($v0)
    ctx->pc = 0x1ae40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 768)));
label_1ae410:
    // 0x1ae410: 0xae8207e0  sw          $v0, 0x7E0($s4)
    ctx->pc = 0x1ae410u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2016), GPR_U32(ctx, 2));
label_1ae414:
    // 0x1ae414: 0x8e8407e0  lw          $a0, 0x7E0($s4)
    ctx->pc = 0x1ae414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2016)));
label_1ae418:
    // 0x1ae418: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1ae418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ae41c:
    // 0x1ae41c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ae41cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ae420:
    // 0x1ae420: 0x320f809  jalr        $t9
label_1ae424:
    if (ctx->pc == 0x1AE424u) {
        ctx->pc = 0x1AE428u;
        goto label_1ae428;
    }
    ctx->pc = 0x1AE420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE428u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE420u, 0x1AE428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AE428u;
label_1ae428:
    // 0x1ae428: 0x8e8207e0  lw          $v0, 0x7E0($s4)
    ctx->pc = 0x1ae428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2016)));
label_1ae42c:
    // 0x1ae42c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1ae42cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ae430:
    // 0x1ae430: 0x8f828214  lw          $v0, -0x7DEC($gp)
    ctx->pc = 0x1ae430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1ae434:
    // 0x1ae434: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1ae434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1ae438:
    // 0x1ae438: 0x8c420304  lw          $v0, 0x304($v0)
    ctx->pc = 0x1ae438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 772)));
label_1ae43c:
    // 0x1ae43c: 0xae8207e4  sw          $v0, 0x7E4($s4)
    ctx->pc = 0x1ae43cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2020), GPR_U32(ctx, 2));
label_1ae440:
    // 0x1ae440: 0x8e8407e4  lw          $a0, 0x7E4($s4)
    ctx->pc = 0x1ae440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2020)));
label_1ae444:
    // 0x1ae444: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1ae444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ae448:
    // 0x1ae448: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ae448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ae44c:
    // 0x1ae44c: 0x320f809  jalr        $t9
label_1ae450:
    if (ctx->pc == 0x1AE450u) {
        ctx->pc = 0x1AE454u;
        goto label_1ae454;
    }
    ctx->pc = 0x1AE44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AE454u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE44Cu, 0x1AE454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AE454u;
label_1ae454:
    // 0x1ae454: 0x8e8307e4  lw          $v1, 0x7E4($s4)
    ctx->pc = 0x1ae454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2020)));
label_1ae458:
    // 0x1ae458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae45c:
    // 0x1ae45c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1ae45cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ae460:
    // 0x1ae460: 0xc064228  jal         func_1908A0
label_1ae464:
    if (ctx->pc == 0x1AE464u) {
        ctx->pc = 0x1AE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE460u;
        // 0x1ae464: 0xa3828398  sb          $v0, -0x7C68($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935448), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE468u;
        goto label_1ae468;
    }
    ctx->pc = 0x1AE460u;
    SET_GPR_U32(ctx, 31, 0x1AE468u);
    ctx->pc = 0x1AE464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE460u;
    // 0x1ae464: 0xa3828398  sb          $v0, -0x7C68($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935448), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1908A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908A0u, 0x1AE460u, 0x1AE468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE468u;
label_1ae468:
    // 0x1ae468: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ae468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1ae46c:
    // 0x1ae46c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae470:
    // 0x1ae470: 0xc0642e0  jal         func_190B80
label_1ae474:
    if (ctx->pc == 0x1AE474u) {
        ctx->pc = 0x1AE474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE470u;
        // 0x1ae474: 0x24a50af8  addiu       $a1, $a1, 0xAF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE478u;
        goto label_1ae478;
    }
    ctx->pc = 0x1AE470u;
    SET_GPR_U32(ctx, 31, 0x1AE478u);
    ctx->pc = 0x1AE474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE470u;
    // 0x1ae474: 0x24a50af8  addiu       $a1, $a1, 0xAF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190B80u, 0x1AE470u, 0x1AE478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE478u;
label_1ae478:
    // 0x1ae478: 0xae8206cc  sw          $v0, 0x6CC($s4)
    ctx->pc = 0x1ae478u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1740), GPR_U32(ctx, 2));
label_1ae47c:
    // 0x1ae47c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ae47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae480:
    // 0x1ae480: 0xae8006c8  sw          $zero, 0x6C8($s4)
    ctx->pc = 0x1ae480u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1736), GPR_U32(ctx, 0));
label_1ae484:
    // 0x1ae484: 0x10c0  sll         $v0, $zero, 3
    ctx->pc = 0x1ae484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_1ae488:
    // 0x1ae488: 0x8e830664  lw          $v1, 0x664($s4)
    ctx->pc = 0x1ae488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
label_1ae48c:
    // 0x1ae48c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1ae48cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ae490:
    // 0x1ae490: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x1ae490u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ae494:
    // 0x1ae494: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ae494u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae498:
    // 0x1ae498: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ae498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae49c:
    // 0x1ae49c: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x1ae49cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ae4a0:
    // 0x1ae4a0: 0x10000036  b           . + 4 + (0x36 << 2)
label_1ae4a4:
    if (ctx->pc == 0x1AE4A4u) {
        ctx->pc = 0x1AE4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4A0u;
        // 0x1ae4a4: 0x24700040  addiu       $s0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE4A8u;
        goto label_fallthrough_0x1ae4a0;
    }
    ctx->pc = 0x1AE4A0u;
    {
        const bool branch_taken_0x1ae4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4A0u;
        // 0x1ae4a4: 0x24700040  addiu       $s0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4a0) {
            ctx->pc = 0x1AE57Cu;
            return;
        }
    }
label_fallthrough_0x1ae4a0:
    ctx->pc = 0x1AE4A8u;
}
