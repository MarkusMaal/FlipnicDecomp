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

// Function: FUN_0010f120
// Address: 0x10f120 - 0x10f298
void FUN_0010f120_0x10f120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010f120_0x10f120");
#endif

    switch (ctx->pc) {
        case 0x10f15cu: goto label_10f15c;
        case 0x10f19cu: goto label_10f19c;
        case 0x10f1b8u: goto label_10f1b8;
        case 0x10f1d8u: goto label_10f1d8;
        case 0x10f26cu: goto label_10f26c;
        case 0x10f27cu: goto label_10f27c;
        default: break;
    }

    ctx->pc = 0x10f120u;

    // 0x10f120: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10f120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10f124: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10f124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10f128: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10f128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10f12c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10f12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10f130: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10f130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f134: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10f134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10f138: 0x90820230  lbu         $v0, 0x230($a0)
    ctx->pc = 0x10f138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x10f13c: 0x2173c  dsll32      $v0, $v0, 28
    ctx->pc = 0x10f13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 28));
    // 0x10f140: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x10f140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x10f144: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F144u;
    {
        const bool branch_taken_0x10f144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F144u;
        // 0x10f148: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f144) {
            ctx->pc = 0x10F154u;
            goto label_10f154;
        }
    }
    ctx->pc = 0x10F14Cu;
    // 0x10f14c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x10F14Cu;
    {
        const bool branch_taken_0x10f14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F14Cu;
        // 0x10f150: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f14c) {
            ctx->pc = 0x10F280u;
            goto label_10f280;
        }
    }
    ctx->pc = 0x10F154u;
label_10f154:
    // 0x10f154: 0xc059748  jal         func_165D20
    ctx->pc = 0x10F154u;
    SET_GPR_U32(ctx, 31, 0x10F15Cu);
    ctx->pc = 0x165D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165D20u, 0x10F154u, 0x10F15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F15Cu;
label_10f15c:
    // 0x10f15c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f15cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f164: 0x16020045  bne         $s0, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x10F164u;
    {
        const bool branch_taken_0x10f164 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x10f164) {
            ctx->pc = 0x10F27Cu;
            goto label_10f27c;
        }
    }
    ctx->pc = 0x10F16Cu;
    // 0x10f16c: 0x92420230  lbu         $v0, 0x230($s2)
    ctx->pc = 0x10f16cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
    // 0x10f170: 0x2167c  dsll32      $v0, $v0, 25
    ctx->pc = 0x10f170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 25));
    // 0x10f174: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x10f174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x10f178: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x10F178u;
    {
        const bool branch_taken_0x10f178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F178u;
        // 0x10f17c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f178) {
            ctx->pc = 0x10F280u;
            goto label_10f280;
        }
    }
    ctx->pc = 0x10F180u;
    // 0x10f180: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x10f180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x10f184: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10f184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f188: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x10f188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x10f18c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10f18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f190: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10f190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10f194: 0xc059a68  jal         func_1669A0
    ctx->pc = 0x10F194u;
    SET_GPR_U32(ctx, 31, 0x10F19Cu);
    ctx->pc = 0x10F198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F194u;
    // 0x10f198: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1669A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1669A0u, 0x10F194u, 0x10F19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F19Cu;
label_10f19c:
    // 0x10f19c: 0x8e430220  lw          $v1, 0x220($s2)
    ctx->pc = 0x10f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x10f1a0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x10f1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10f1a4: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10f1a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f1a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f1ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10f1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10f1b0: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x10F1B0u;
    SET_GPR_U32(ctx, 31, 0x10F1B8u);
    ctx->pc = 0x10F1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F1B0u;
    // 0x10f1b4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x10F1B0u, 0x10F1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F1B8u;
label_10f1b8:
    // 0x10f1b8: 0x92420230  lbu         $v0, 0x230($s2)
    ctx->pc = 0x10f1b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
    // 0x10f1bc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x10f1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x10f1c0: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x10f1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x10f1c4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x10F1C4u;
    {
        const bool branch_taken_0x10f1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1C4u;
        // 0x10f1c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f1c4) {
            ctx->pc = 0x10F274u;
            goto label_10f274;
        }
    }
    ctx->pc = 0x10F1CCu;
    // 0x10f1cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10f1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f1d0: 0xc042118  jal         func_108460
    ctx->pc = 0x10F1D0u;
    SET_GPR_U32(ctx, 31, 0x10F1D8u);
    ctx->pc = 0x10F1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F1D0u;
    // 0x10f1d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10F1D0u, 0x10F1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F1D8u;
label_10f1d8:
    // 0x10f1d8: 0x92440230  lbu         $a0, 0x230($s2)
    ctx->pc = 0x10f1d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
    // 0x10f1dc: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x10f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x10f1e0: 0x64030040  daddiu      $v1, $zero, 0x40
    ctx->pc = 0x10f1e0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x10f1e4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x10f1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10f1e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10f1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10f1ec: 0xa2420230  sb          $v0, 0x230($s2)
    ctx->pc = 0x10f1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 560), (uint8_t)GPR_U32(ctx, 2));
    // 0x10f1f0: 0x92440230  lbu         $a0, 0x230($s2)
    ctx->pc = 0x10f1f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
    // 0x10f1f4: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x10f1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x10f1f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F1F8u;
    {
        const bool branch_taken_0x10f1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1F8u;
        // 0x10f1fc: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f1f8) {
            ctx->pc = 0x10F214u;
            goto label_10f214;
        }
    }
    ctx->pc = 0x10F200u;
    // 0x10f200: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x10f200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x10f204: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x10f204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x10f208: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x10f208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10f20c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10f20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10f210: 0xa2420230  sb          $v0, 0x230($s2)
    ctx->pc = 0x10f210u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 560), (uint8_t)GPR_U32(ctx, 2));
label_10f214:
    // 0x10f214: 0x92440230  lbu         $a0, 0x230($s2)
    ctx->pc = 0x10f214u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
    // 0x10f218: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x10f218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x10f21c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10F21Cu;
    {
        const bool branch_taken_0x10f21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F21Cu;
        // 0x10f220: 0x416bc  dsll32      $v0, $a0, 26 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f21c) {
            ctx->pc = 0x10F260u;
            goto label_10f260;
        }
    }
    ctx->pc = 0x10F224u;
    // 0x10f224: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x10f224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x10f228: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10F228u;
    {
        const bool branch_taken_0x10f228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f228) {
            ctx->pc = 0x10F248u;
            goto label_10f248;
        }
    }
    ctx->pc = 0x10F230u;
    // 0x10f230: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x10f230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x10f234: 0x64030008  daddiu      $v1, $zero, 0x8
    ctx->pc = 0x10f234u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x10f238: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x10f238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10f23c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10f23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10f240: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x10F240u;
    {
        const bool branch_taken_0x10f240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F240u;
        // 0x10f244: 0xa2420230  sb          $v0, 0x230($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 560), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f240) {
            ctx->pc = 0x10F27Cu;
            goto label_10f27c;
        }
    }
    ctx->pc = 0x10F248u;
label_10f248:
    // 0x10f248: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x10f248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x10f24c: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x10f24cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x10f250: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x10f250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10f254: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10f254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10f258: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10F258u;
    {
        const bool branch_taken_0x10f258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F258u;
        // 0x10f25c: 0xa2420230  sb          $v0, 0x230($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 560), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f258) {
            ctx->pc = 0x10F27Cu;
            goto label_10f27c;
        }
    }
    ctx->pc = 0x10F260u;
label_10f260:
    // 0x10f260: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10f260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f264: 0xc043ca8  jal         func_10F2A0
    ctx->pc = 0x10F264u;
    SET_GPR_U32(ctx, 31, 0x10F26Cu);
    ctx->pc = 0x10F268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F264u;
    // 0x10f268: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2A0u, 0x10F264u, 0x10F26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F26Cu;
label_10f26c:
    // 0x10f26c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10F26Cu;
    {
        const bool branch_taken_0x10f26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f26c) {
            ctx->pc = 0x10F27Cu;
            goto label_10f27c;
        }
    }
    ctx->pc = 0x10F274u;
label_10f274:
    // 0x10f274: 0xc042118  jal         func_108460
    ctx->pc = 0x10F274u;
    SET_GPR_U32(ctx, 31, 0x10F27Cu);
    ctx->pc = 0x10F278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F274u;
    // 0x10f278: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10F274u, 0x10F27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F27Cu;
label_10f27c:
    // 0x10f27c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10f27cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f280:
    // 0x10f280: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10f280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f284: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10f284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f288: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10f288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f28c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10f28cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f290: 0x3e00008  jr          $ra
    ctx->pc = 0x10F290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F290u;
        // 0x10f294: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F298u;
}
