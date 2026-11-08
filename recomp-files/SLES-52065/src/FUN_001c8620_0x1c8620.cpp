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

// Function: FUN_001c8620
// Address: 0x1c8620 - 0x1c8794
void FUN_001c8620_0x1c8620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c8620_0x1c8620");
#endif

    switch (ctx->pc) {
        case 0x1c8690u: goto label_1c8690;
        case 0x1c86a8u: goto label_1c86a8;
        case 0x1c86d8u: goto label_1c86d8;
        case 0x1c86ecu: goto label_1c86ec;
        case 0x1c8700u: goto label_1c8700;
        case 0x1c8744u: goto label_1c8744;
        case 0x1c8750u: goto label_1c8750;
        case 0x1c875cu: goto label_1c875c;
        case 0x1c8768u: goto label_1c8768;
        case 0x1c877cu: goto label_1c877c;
        default: break;
    }

    ctx->pc = 0x1c8620u;

    // 0x1c8620: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c8620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c8624: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c8624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c8628: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c8628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c862c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c862cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c8630: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c8630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c8634: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c8634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c8638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c863c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c863cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8640: 0x80840070  lb          $a0, 0x70($a0)
    ctx->pc = 0x1c8640u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x1c8644: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c8644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8648: 0x8c23ca84  lw          $v1, -0x357C($at)
    ctx->pc = 0x1c8648u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c864c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C864Cu;
    {
        const bool branch_taken_0x1c864c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C864Cu;
        // 0x1c8650: 0xa064282a  sb          $a0, 0x282A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 10282), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c864c) {
            ctx->pc = 0x1C865Cu;
            goto label_1c865c;
        }
    }
    ctx->pc = 0x1C8654u;
    // 0x1c8654: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1C8654u;
    {
        const bool branch_taken_0x1c8654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8654u;
        // 0x1c8658: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8654) {
            ctx->pc = 0x1C86C0u;
            goto label_1c86c0;
        }
    }
    ctx->pc = 0x1C865Cu;
label_1c865c:
    // 0x1c865c: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x1c865cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1c8660: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c8660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8664: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C8664u;
    {
        const bool branch_taken_0x1c8664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c8664) {
            ctx->pc = 0x1C86BCu;
            goto label_1c86bc;
        }
    }
    ctx->pc = 0x1C866Cu;
    // 0x1c866c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c866cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8670: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C8670u;
    {
        const bool branch_taken_0x1c8670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c8670) {
            ctx->pc = 0x1C86B0u;
            goto label_1c86b0;
        }
    }
    ctx->pc = 0x1C8678u;
    // 0x1c8678: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8678u;
    {
        const bool branch_taken_0x1c8678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8678) {
            ctx->pc = 0x1C8688u;
            goto label_1c8688;
        }
    }
    ctx->pc = 0x1C8680u;
    // 0x1c8680: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C8680u;
    {
        const bool branch_taken_0x1c8680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8680) {
            ctx->pc = 0x1C86C0u;
            goto label_1c86c0;
        }
    }
    ctx->pc = 0x1C8688u;
label_1c8688:
    // 0x1c8688: 0xc06e944  jal         func_1BA510
    ctx->pc = 0x1C8688u;
    SET_GPR_U32(ctx, 31, 0x1C8690u);
    ctx->pc = 0x1C868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8688u;
    // 0x1c868c: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA510u, 0x1C8688u, 0x1C8690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8690u;
label_1c8690:
    // 0x1c8690: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c8690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c8694: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c8694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8698: 0x24a559b0  addiu       $a1, $a1, 0x59B0
    ctx->pc = 0x1c8698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22960));
    // 0x1c869c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1c869cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c86a0: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1C86A0u;
    SET_GPR_U32(ctx, 31, 0x1C86A8u);
    ctx->pc = 0x1C86A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C86A0u;
    // 0x1c86a4: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1C86A0u, 0x1C86A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C86A8u;
label_1c86a8:
    // 0x1c86a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C86A8u;
    {
        const bool branch_taken_0x1c86a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c86a8) {
            ctx->pc = 0x1C86C0u;
            goto label_1c86c0;
        }
    }
    ctx->pc = 0x1C86B0u;
label_1c86b0:
    // 0x1c86b0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1c86b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c86b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C86B4u;
    {
        const bool branch_taken_0x1c86b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C86B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C86B4u;
        // 0x1c86b8: 0x24110012  addiu       $s1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c86b4) {
            ctx->pc = 0x1C86C0u;
            goto label_1c86c0;
        }
    }
    ctx->pc = 0x1C86BCu;
label_1c86bc:
    // 0x1c86bc: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1c86bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c86c0:
    // 0x1c86c0: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C86C0u;
    {
        const bool branch_taken_0x1c86c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C86C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C86C0u;
        // 0x1c86c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c86c0) {
            ctx->pc = 0x1C877Cu;
            goto label_1c877c;
        }
    }
    ctx->pc = 0x1C86C8u;
    // 0x1c86c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c86c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c86cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c86ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c86d0: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1C86D0u;
    SET_GPR_U32(ctx, 31, 0x1C86D8u);
    ctx->pc = 0x1C86D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C86D0u;
    // 0x1c86d4: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1C86D0u, 0x1C86D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C86D8u;
label_1c86d8:
    // 0x1c86d8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c86d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c86dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c86dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c86e0: 0x24a55df0  addiu       $a1, $a1, 0x5DF0
    ctx->pc = 0x1c86e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24048));
    // 0x1c86e4: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C86E4u;
    SET_GPR_U32(ctx, 31, 0x1C86ECu);
    ctx->pc = 0x1C86E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C86E4u;
    // 0x1c86e8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C86E4u, 0x1C86ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C86ECu;
label_1c86ec:
    // 0x1c86ec: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c86ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c86f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c86f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c86f4: 0x24a55f70  addiu       $a1, $a1, 0x5F70
    ctx->pc = 0x1c86f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24432));
    // 0x1c86f8: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1C86F8u;
    SET_GPR_U32(ctx, 31, 0x1C8700u);
    ctx->pc = 0x1C86FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C86F8u;
    // 0x1c86fc: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1C86F8u, 0x1C8700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8700u;
label_1c8700:
    // 0x1c8700: 0x3c080021  lui         $t0, 0x21
    ctx->pc = 0x1c8700u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33 << 16));
    // 0x1c8704: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1c8704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c8708: 0x250860b0  addiu       $t0, $t0, 0x60B0
    ctx->pc = 0x1c8708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24752));
    // 0x1c870c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c870cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8710: 0x79060000  lq          $a2, 0x0($t0)
    ctx->pc = 0x1c8710u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x2160B0u));
    // 0x1c8714: 0x79050010  lq          $a1, 0x10($t0)
    ctx->pc = 0x1c8714u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x2160C0u));
    // 0x1c8718: 0x79030020  lq          $v1, 0x20($t0)
    ctx->pc = 0x1c8718u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x2160D0u));
    // 0x1c871c: 0x79020030  lq          $v0, 0x30($t0)
    ctx->pc = 0x1c871cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x2160E0u));
    // 0x1c8720: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1c8720u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x1c8724: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x1c8724u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x1c8728: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x1c8728u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x1c872c: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x1c872cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    // 0x1c8730: 0x79030040  lq          $v1, 0x40($t0)
    ctx->pc = 0x1c8730u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x2160F0u));
    // 0x1c8734: 0x79020050  lq          $v0, 0x50($t0)
    ctx->pc = 0x1c8734u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x216100u));
    // 0x1c8738: 0x7ce30040  sq          $v1, 0x40($a3)
    ctx->pc = 0x1c8738u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 3));
    // 0x1c873c: 0xc0721e8  jal         func_1C87A0
    ctx->pc = 0x1C873Cu;
    SET_GPR_U32(ctx, 31, 0x1C8744u);
    ctx->pc = 0x1C8740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C873Cu;
    // 0x1c8740: 0x7ce20050  sq          $v0, 0x50($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C87A0u, 0x1C873Cu, 0x1C8744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8744u;
label_1c8744:
    // 0x1c8744: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1c8744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1c8748: 0xc0721ec  jal         func_1C87B0
    ctx->pc = 0x1C8748u;
    SET_GPR_U32(ctx, 31, 0x1C8750u);
    ctx->pc = 0x1C874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8748u;
    // 0x1c874c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C87B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C87B0u, 0x1C8748u, 0x1C8750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8750u;
label_1c8750:
    // 0x1c8750: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x1c8750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x1c8754: 0xc0721f4  jal         func_1C87D0
    ctx->pc = 0x1C8754u;
    SET_GPR_U32(ctx, 31, 0x1C875Cu);
    ctx->pc = 0x1C8758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8754u;
    // 0x1c8758: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C87D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C87D0u, 0x1C8754u, 0x1C875Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C875Cu;
label_1c875c:
    // 0x1c875c: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1c875cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x1c8760: 0xc0721f8  jal         func_1C87E0
    ctx->pc = 0x1C8760u;
    SET_GPR_U32(ctx, 31, 0x1C8768u);
    ctx->pc = 0x1C8764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8760u;
    // 0x1c8764: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C87E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C87E0u, 0x1C8760u, 0x1C8768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8768u;
label_1c8768:
    // 0x1c8768: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c8768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c876c: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1c876cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x1c8770: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1c8770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c8774: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C8774u;
    SET_GPR_U32(ctx, 31, 0x1C877Cu);
    ctx->pc = 0x1C8778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8774u;
    // 0x1c8778: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C8774u, 0x1C877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C877Cu;
label_1c877c:
    // 0x1c877c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c877cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c8780: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c8780u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8784: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c8784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8788: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c8788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c878c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C878Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C878Cu;
        // 0x1c8790: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C878Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8794u;
}
