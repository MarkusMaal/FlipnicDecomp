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

// Function: FUN_00132300
// Address: 0x132300 - 0x1323b8
void FUN_00132300_0x132300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00132300_0x132300");
#endif

    switch (ctx->pc) {
        case 0x132300u: goto label_132300;
        case 0x132304u: goto label_132304;
        case 0x132308u: goto label_132308;
        case 0x13230cu: goto label_13230c;
        case 0x132310u: goto label_132310;
        case 0x132314u: goto label_132314;
        case 0x132318u: goto label_132318;
        case 0x13231cu: goto label_13231c;
        case 0x132320u: goto label_132320;
        case 0x132324u: goto label_132324;
        case 0x132328u: goto label_132328;
        case 0x13232cu: goto label_13232c;
        case 0x132330u: goto label_132330;
        case 0x132334u: goto label_132334;
        case 0x132338u: goto label_132338;
        case 0x13233cu: goto label_13233c;
        case 0x132340u: goto label_132340;
        case 0x132344u: goto label_132344;
        case 0x132348u: goto label_132348;
        case 0x13234cu: goto label_13234c;
        case 0x132350u: goto label_132350;
        case 0x132354u: goto label_132354;
        case 0x132358u: goto label_132358;
        case 0x13235cu: goto label_13235c;
        case 0x132360u: goto label_132360;
        case 0x132364u: goto label_132364;
        case 0x132368u: goto label_132368;
        case 0x13236cu: goto label_13236c;
        case 0x132370u: goto label_132370;
        case 0x132374u: goto label_132374;
        case 0x132378u: goto label_132378;
        case 0x13237cu: goto label_13237c;
        case 0x132380u: goto label_132380;
        case 0x132384u: goto label_132384;
        case 0x132388u: goto label_132388;
        case 0x13238cu: goto label_13238c;
        case 0x132390u: goto label_132390;
        case 0x132394u: goto label_132394;
        case 0x132398u: goto label_132398;
        case 0x13239cu: goto label_13239c;
        case 0x1323a0u: goto label_1323a0;
        case 0x1323a4u: goto label_1323a4;
        case 0x1323a8u: goto label_1323a8;
        case 0x1323acu: goto label_1323ac;
        case 0x1323b0u: goto label_1323b0;
        case 0x1323b4u: goto label_1323b4;
        default: break;
    }

    ctx->pc = 0x132300u;

label_132300:
    // 0x132300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x132300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_132304:
    // 0x132304: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x132304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_132308:
    // 0x132308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13230c:
    // 0x13230c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13230cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_132310:
    // 0x132310: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x132310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_132314:
    // 0x132314: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x132314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_132318:
    // 0x132318: 0x8f3900a4  lw          $t9, 0xA4($t9)
    ctx->pc = 0x132318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 164)));
label_13231c:
    // 0x13231c: 0x320f809  jalr        $t9
label_132320:
    if (ctx->pc == 0x132320u) {
        ctx->pc = 0x132320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13231Cu;
        // 0x132320: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132324u;
        goto label_132324;
    }
    ctx->pc = 0x13231Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x132324u);
        ctx->pc = 0x132320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13231Cu;
        // 0x132320: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13231Cu, 0x132324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x132324u;
label_132324:
    // 0x132324: 0xc04c554  jal         func_131550
label_132328:
    if (ctx->pc == 0x132328u) {
        ctx->pc = 0x132328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132324u;
        // 0x132328: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13232Cu;
        goto label_13232c;
    }
    ctx->pc = 0x132324u;
    SET_GPR_U32(ctx, 31, 0x13232Cu);
    ctx->pc = 0x132328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132324u;
    // 0x132328: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x132324u, 0x13232Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13232Cu;
label_13232c:
    // 0x13232c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13232cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132330:
    // 0x132330: 0xc04c550  jal         func_131540
label_132334:
    if (ctx->pc == 0x132334u) {
        ctx->pc = 0x132334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132330u;
        // 0x132334: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132338u;
        goto label_132338;
    }
    ctx->pc = 0x132330u;
    SET_GPR_U32(ctx, 31, 0x132338u);
    ctx->pc = 0x132334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132330u;
    // 0x132334: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x132330u, 0x132338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132338u;
label_132338:
    // 0x132338: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x132338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_13233c:
    // 0x13233c: 0xc04c554  jal         func_131550
label_132340:
    if (ctx->pc == 0x132340u) {
        ctx->pc = 0x132340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13233Cu;
        // 0x132340: 0x8fb00028  lw          $s0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132344u;
        goto label_132344;
    }
    ctx->pc = 0x13233Cu;
    SET_GPR_U32(ctx, 31, 0x132344u);
    ctx->pc = 0x132340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13233Cu;
    // 0x132340: 0x8fb00028  lw          $s0, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x13233Cu, 0x132344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132344u;
label_132344:
    // 0x132344: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x132344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_132348:
    // 0x132348: 0xc04c54c  jal         func_131530
label_13234c:
    if (ctx->pc == 0x13234Cu) {
        ctx->pc = 0x13234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132348u;
        // 0x13234c: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132350u;
        goto label_132350;
    }
    ctx->pc = 0x132348u;
    SET_GPR_U32(ctx, 31, 0x132350u);
    ctx->pc = 0x13234Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132348u;
    // 0x13234c: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x132348u, 0x132350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132350u;
label_132350:
    // 0x132350: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x132350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_132354:
    // 0x132354: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x132354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_132358:
    // 0x132358: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x132358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_13235c:
    // 0x13235c: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x13235cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
label_132360:
    // 0x132360: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x132360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132364:
    // 0x132364: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x132364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_132368:
    // 0x132368: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x132368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13236c:
    // 0x13236c: 0x1070000d  beq         $v1, $s0, . + 4 + (0xD << 2)
label_132370:
    if (ctx->pc == 0x132370u) {
        ctx->pc = 0x132374u;
        goto label_132374;
    }
    ctx->pc = 0x13236Cu;
    {
        const bool branch_taken_0x13236c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x13236c) {
            ctx->pc = 0x1323A4u;
            goto label_1323a4;
        }
    }
    ctx->pc = 0x132374u;
label_132374:
    // 0x132374: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x132374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_132378:
    // 0x132378: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x132378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13237c:
    // 0x13237c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13237cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_132380:
    // 0x132380: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x132380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_132384:
    // 0x132384: 0x320f809  jalr        $t9
label_132388:
    if (ctx->pc == 0x132388u) {
        ctx->pc = 0x13238Cu;
        goto label_13238c;
    }
    ctx->pc = 0x132384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13238Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132384u, 0x13238Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13238Cu;
label_13238c:
    // 0x13238c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x13238cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_132390:
    // 0x132390: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x132390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_132394:
    // 0x132394: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x132394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_132398:
    // 0x132398: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x132398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_13239c:
    // 0x13239c: 0x1470fff5  bne         $v1, $s0, . + 4 + (-0xB << 2)
label_1323a0:
    if (ctx->pc == 0x1323A0u) {
        ctx->pc = 0x1323A4u;
        goto label_1323a4;
    }
    ctx->pc = 0x13239Cu;
    {
        const bool branch_taken_0x13239c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x13239c) {
            ctx->pc = 0x132374u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132374;
        }
    }
    ctx->pc = 0x1323A4u;
label_1323a4:
    // 0x1323a4: 0x0  nop
    ctx->pc = 0x1323a4u;
    // NOP
label_1323a8:
    // 0x1323a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1323a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1323ac:
    // 0x1323ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1323acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1323b0:
    // 0x1323b0: 0x3e00008  jr          $ra
label_1323b4:
    if (ctx->pc == 0x1323B4u) {
        ctx->pc = 0x1323B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323B0u;
        // 0x1323b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1323B8u;
        goto label_fallthrough_0x1323b0;
    }
    ctx->pc = 0x1323B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1323B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323B0u;
        // 0x1323b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1323B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1323b0:
    ctx->pc = 0x1323B8u;
}
