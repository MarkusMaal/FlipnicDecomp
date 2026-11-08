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

// Function: FUN_001b5270
// Address: 0x1b5270 - 0x1b5378
void FUN_001b5270_0x1b5270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b5270_0x1b5270");
#endif

    switch (ctx->pc) {
        case 0x1b5294u: goto label_1b5294;
        case 0x1b52acu: goto label_1b52ac;
        case 0x1b52f4u: goto label_1b52f4;
        case 0x1b5300u: goto label_1b5300;
        case 0x1b5308u: goto label_1b5308;
        case 0x1b5314u: goto label_1b5314;
        case 0x1b5324u: goto label_1b5324;
        case 0x1b5330u: goto label_1b5330;
        case 0x1b5338u: goto label_1b5338;
        case 0x1b5344u: goto label_1b5344;
        default: break;
    }

    ctx->pc = 0x1b5270u;

    // 0x1b5270: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1b5270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1b5274: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b5274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b5278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b527c: 0x8022ecf8  lb          $v0, -0x1308($at)
    ctx->pc = 0x1b527cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36ECF8u));
    // 0x1b5280: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B5280u;
    {
        const bool branch_taken_0x1b5280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5280) {
            ctx->pc = 0x1B52B8u;
            goto label_1b52b8;
        }
    }
    ctx->pc = 0x1B5288u;
    // 0x1b5288: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b5288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b528c: 0xc04698c  jal         func_11A630
    ctx->pc = 0x1B528Cu;
    SET_GPR_U32(ctx, 31, 0x1B5294u);
    ctx->pc = 0x1B5290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B528Cu;
    // 0x1b5290: 0x2484ed00  addiu       $a0, $a0, -0x1300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A630u, 0x1B528Cu, 0x1B5294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5294u;
label_1b5294:
    // 0x1b5294: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x1b5294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x1b5298: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1b5298u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1b529c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b529cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b52a0: 0x24a5a8a0  addiu       $a1, $a1, -0x5760
    ctx->pc = 0x1b52a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944928));
    // 0x1b52a4: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x1B52A4u;
    SET_GPR_U32(ctx, 31, 0x1B52ACu);
    ctx->pc = 0x1B52A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B52A4u;
    // 0x1b52a8: 0x24c6ece8  addiu       $a2, $a2, -0x1318 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1B52A4u, 0x1B52ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B52ACu;
label_1b52ac:
    // 0x1b52ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b52acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b52b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b52b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b52b4: 0xa022ecf8  sb          $v0, -0x1308($at)
    ctx->pc = 0x1b52b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36ECF8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36ECF8u, _value); } while (0);
label_1b52b8:
    // 0x1b52b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b52b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b52bc: 0x8022f250  lb          $v0, -0xDB0($at)
    ctx->pc = 0x1b52bcu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F250u));
    // 0x1b52c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B52C0u;
    {
        const bool branch_taken_0x1b52c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b52c0) {
            ctx->pc = 0x1B52DCu;
            goto label_1b52dc;
        }
    }
    ctx->pc = 0x1B52C8u;
    // 0x1b52c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b52c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b52cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b52ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b52d0: 0xa020f248  sb          $zero, -0xDB8($at)
    ctx->pc = 0x1b52d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36F248u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F248u, _value); } while (0);
    // 0x1b52d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b52d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b52d8: 0xa022f250  sb          $v0, -0xDB0($at)
    ctx->pc = 0x1b52d8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F250u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F250u, _value); } while (0);
label_1b52dc:
    // 0x1b52dc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b52dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b52e0: 0x9022f248  lbu         $v0, -0xDB8($at)
    ctx->pc = 0x1b52e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x36F248u));
    // 0x1b52e4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B52E4u;
    {
        const bool branch_taken_0x1b52e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b52e4) {
            ctx->pc = 0x1B5364u;
            goto label_1b5364;
        }
    }
    ctx->pc = 0x1B52ECu;
    // 0x1b52ec: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1B52ECu;
    SET_GPR_U32(ctx, 31, 0x1B52F4u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1B52ECu, 0x1B52F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B52F4u;
label_1b52f4:
    // 0x1b52f4: 0x24450104  addiu       $a1, $v0, 0x104
    ctx->pc = 0x1b52f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
    // 0x1b52f8: 0xc080702  jal         func_201C08
    ctx->pc = 0x1B52F8u;
    SET_GPR_U32(ctx, 31, 0x1B5300u);
    ctx->pc = 0x1B52FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B52F8u;
    // 0x1b52fc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1B52F8u, 0x1B5300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5300u;
label_1b5300:
    // 0x1b5300: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1B5300u;
    SET_GPR_U32(ctx, 31, 0x1B5308u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1B5300u, 0x1B5308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5308u;
label_1b5308:
    // 0x1b5308: 0x24450264  addiu       $a1, $v0, 0x264
    ctx->pc = 0x1b5308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 612));
    // 0x1b530c: 0xc080664  jal         func_201990
    ctx->pc = 0x1B530Cu;
    SET_GPR_U32(ctx, 31, 0x1B5314u);
    ctx->pc = 0x1B5310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B530Cu;
    // 0x1b5310: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1B530Cu, 0x1B5314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5314u;
label_1b5314:
    // 0x1b5314: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b5314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b5318: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1b5318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b531c: 0xc046b28  jal         func_11ACA0
    ctx->pc = 0x1B531Cu;
    SET_GPR_U32(ctx, 31, 0x1B5324u);
    ctx->pc = 0x1B5320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B531Cu;
    // 0x1b5320: 0x2484ed00  addiu       $a0, $a0, -0x1300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ACA0u, 0x1B531Cu, 0x1B5324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5324u;
label_1b5324:
    // 0x1b5324: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b5324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b5328: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1B5328u;
    SET_GPR_U32(ctx, 31, 0x1B5330u);
    ctx->pc = 0x1B532Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5328u;
    // 0x1b532c: 0x2484ed00  addiu       $a0, $a0, -0x1300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1B5328u, 0x1B5330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5330u;
label_1b5330:
    // 0x1b5330: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5330u;
    {
        const bool branch_taken_0x1b5330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5330) {
            ctx->pc = 0x1B5354u;
            goto label_1b5354;
        }
    }
    ctx->pc = 0x1B5338u;
label_1b5338:
    // 0x1b5338: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b5338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b533c: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1B533Cu;
    SET_GPR_U32(ctx, 31, 0x1B5344u);
    ctx->pc = 0x1B5340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B533Cu;
    // 0x1b5340: 0x2484ed00  addiu       $a0, $a0, -0x1300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1B533Cu, 0x1B5344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5344u;
label_1b5344:
    // 0x1b5344: 0x0  nop
    ctx->pc = 0x1b5344u;
    // NOP
    // 0x1b5348: 0x0  nop
    ctx->pc = 0x1b5348u;
    // NOP
    // 0x1b534c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B534Cu;
    {
        const bool branch_taken_0x1b534c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b534c) {
            ctx->pc = 0x1B5338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5338;
        }
    }
    ctx->pc = 0x1B5354u;
label_1b5354:
    // 0x1b5354: 0x0  nop
    ctx->pc = 0x1b5354u;
    // NOP
    // 0x1b5358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b535c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b535cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b5360: 0xa022f248  sb          $v0, -0xDB8($at)
    ctx->pc = 0x1b5360u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F248u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F248u, _value); } while (0);
label_1b5364:
    // 0x1b5364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5368: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b5368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b536c: 0x2442ed00  addiu       $v0, $v0, -0x1300
    ctx->pc = 0x1b536cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962432));
    // 0x1b5370: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5370u;
        // 0x1b5374: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5378u;
}
