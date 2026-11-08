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

// Function: FUN_001cc270
// Address: 0x1cc270 - 0x1cc36c
void FUN_001cc270_0x1cc270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc270_0x1cc270");
#endif

    switch (ctx->pc) {
        case 0x1cc2f4u: goto label_1cc2f4;
        case 0x1cc314u: goto label_1cc314;
        case 0x1cc320u: goto label_1cc320;
        case 0x1cc328u: goto label_1cc328;
        case 0x1cc334u: goto label_1cc334;
        case 0x1cc350u: goto label_1cc350;
        default: break;
    }

    ctx->pc = 0x1cc270u;

    // 0x1cc270: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1cc270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1cc274: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1cc274u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x1cc278: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cc278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cc27c: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cc27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cc280: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cc280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cc284: 0x24e78070  addiu       $a3, $a3, -0x7F90
    ctx->pc = 0x1cc284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294934640));
    // 0x1cc288: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cc288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cc28c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1cc28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cc290: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cc290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cc294: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cc294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cc298: 0x8c28ca84  lw          $t0, -0x357C($at)
    ctx->pc = 0x1cc298u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1cc29c: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x1cc29cu;
    { uint32_t bits = FAST_READ32(0x218098u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc2a0: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x1cc2a0u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x218070u));
    // 0x1cc2a4: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x1cc2a4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x218080u));
    // 0x1cc2a8: 0xdce20020  ld          $v0, 0x20($a3)
    ctx->pc = 0x1cc2a8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x218090u));
    // 0x1cc2ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cc2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cc2b0: 0x8c33f950  lw          $s3, -0x6B0($at)
    ctx->pc = 0x1cc2b0u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x36F950u));
    // 0x1cc2b4: 0x250710c8  addiu       $a3, $t0, 0x10C8
    ctx->pc = 0x1cc2b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4296));
    // 0x1cc2b8: 0x134140  sll         $t0, $s3, 5
    ctx->pc = 0x1cc2b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x1cc2bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cc2bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cc2c0: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1cc2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1cc2c4: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x1cc2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1cc2c8: 0x90f00c84  lbu         $s0, 0xC84($a3)
    ctx->pc = 0x1cc2c8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3204)));
    // 0x1cc2cc: 0x90f10e84  lbu         $s1, 0xE84($a3)
    ctx->pc = 0x1cc2ccu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3716)));
    // 0x1cc2d0: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x1cc2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x1cc2d4: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x1cc2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x1cc2d8: 0xfcc20020  sd          $v0, 0x20($a2)
    ctx->pc = 0x1cc2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 2));
    // 0x1cc2dc: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x1cc2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x1cc2e0: 0xac24fa30  sw          $a0, -0x5D0($at)
    ctx->pc = 0x1cc2e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x36FA30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FA30u, _value); } while (0);
    // 0x1cc2e4: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1cc2e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1cc2e8: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CC2E8u;
    {
        const bool branch_taken_0x1cc2e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2E8u;
        // 0x1cc2ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc2e8) {
            ctx->pc = 0x1CC344u;
            goto label_1cc344;
        }
    }
    ctx->pc = 0x1CC2F0u;
    // 0x1cc2f0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1cc2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1cc2f4:
    // 0x1cc2f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cc2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cc2f8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1cc2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1cc2fc: 0x26480001  addiu       $t0, $s2, 0x1
    ctx->pc = 0x1cc2fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1cc300: 0x8c460050  lw          $a2, 0x50($v0)
    ctx->pc = 0x1cc300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1cc304: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cc304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1cc308: 0x24a529e0  addiu       $a1, $a1, 0x29E0
    ctx->pc = 0x1cc308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10720));
    // 0x1cc30c: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1CC30Cu;
    SET_GPR_U32(ctx, 31, 0x1CC314u);
    ctx->pc = 0x1CC310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC30Cu;
    // 0x1cc310: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1CC30Cu, 0x1CC314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC314u;
label_1cc314:
    // 0x1cc314: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cc314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc318: 0xc0714e8  jal         func_1C53A0
    ctx->pc = 0x1CC318u;
    SET_GPR_U32(ctx, 31, 0x1CC320u);
    ctx->pc = 0x1CC31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC318u;
    // 0x1cc31c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C53A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C53A0u, 0x1CC318u, 0x1CC320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC320u;
label_1cc320:
    // 0x1cc320: 0xc0485a8  jal         func_1216A0
    ctx->pc = 0x1CC320u;
    SET_GPR_U32(ctx, 31, 0x1CC328u);
    ctx->pc = 0x1216A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216A0u, 0x1CC320u, 0x1CC328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC328u;
label_1cc328:
    // 0x1cc328: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cc328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc32c: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x1CC32Cu;
    SET_GPR_U32(ctx, 31, 0x1CC334u);
    ctx->pc = 0x1CC330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC32Cu;
    // 0x1cc330: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x1CC32Cu, 0x1CC334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC334u;
label_1cc334:
    // 0x1cc334: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1cc334u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1cc338: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x1cc338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1cc33c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1CC33Cu;
    {
        const bool branch_taken_0x1cc33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC33Cu;
        // 0x1cc340: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc33c) {
            ctx->pc = 0x1CC2F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc2f4;
        }
    }
    ctx->pc = 0x1CC344u;
label_1cc344:
    // 0x1cc344: 0x0  nop
    ctx->pc = 0x1cc344u;
    // NOP
    // 0x1cc348: 0xc0714f0  jal         func_1C53C0
    ctx->pc = 0x1CC348u;
    SET_GPR_U32(ctx, 31, 0x1CC350u);
    ctx->pc = 0x1CC34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC348u;
    // 0x1cc34c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C53C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C53C0u, 0x1CC348u, 0x1CC350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC350u;
label_1cc350:
    // 0x1cc350: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cc350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cc354: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cc354u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc358: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cc358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc35c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cc35cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc364: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC364u;
        // 0x1cc368: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC36Cu;
}
