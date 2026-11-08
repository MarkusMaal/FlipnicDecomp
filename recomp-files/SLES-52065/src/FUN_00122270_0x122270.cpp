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

// Function: FUN_00122270
// Address: 0x122270 - 0x12231c
void FUN_00122270_0x122270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00122270_0x122270");
#endif

    switch (ctx->pc) {
        case 0x1222a0u: goto label_1222a0;
        case 0x1222dcu: goto label_1222dc;
        case 0x1222e4u: goto label_1222e4;
        case 0x1222fcu: goto label_1222fc;
        default: break;
    }

    ctx->pc = 0x122270u;

    // 0x122270: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x122270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x122274: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x122274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x122278: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x122278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12227c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12227cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x122280: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x122280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122284: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x122284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x122288: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x122288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12228c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12228cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x122290: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x122290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122294: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x122294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x122298: 0xc080748  jal         func_201D20
    ctx->pc = 0x122298u;
    SET_GPR_U32(ctx, 31, 0x1222A0u);
    ctx->pc = 0x12229Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122298u;
    // 0x12229c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x122298u, 0x1222A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1222A0u;
label_1222a0:
    // 0x1222a0: 0x34010000  ori         $at, $zero, 0x0
    ctx->pc = 0x1222a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
    // 0x1222a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1222a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1222a8: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1222a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1222ac: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1222acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1222b0: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1222b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1222b4: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1222b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1222b8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1222b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1222bc: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x1222bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1222c0: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1222C0u;
    {
        const bool branch_taken_0x1222c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1222C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1222C0u;
        // 0x1222c4: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1222c0) {
            ctx->pc = 0x1222E4u;
            goto label_1222e4;
        }
    }
    ctx->pc = 0x1222C8u;
    // 0x1222c8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1222c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1222cc: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1222ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1222d0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1222d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1222d4: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1222D4u;
    SET_GPR_U32(ctx, 31, 0x1222DCu);
    ctx->pc = 0x1222D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1222D4u;
    // 0x1222d8: 0x24a5e9a0  addiu       $a1, $a1, -0x1660 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1222D4u, 0x1222DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1222DCu;
label_1222dc:
    // 0x1222dc: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1222DCu;
    SET_GPR_U32(ctx, 31, 0x1222E4u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1222DCu, 0x1222E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1222E4u;
label_1222e4:
    // 0x1222e4: 0x83a8005c  lb          $t0, 0x5C($sp)
    ctx->pc = 0x1222e4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1222e8: 0x2503021  addu        $a2, $s2, $s0
    ctx->pc = 0x1222e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1222ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1222ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1222f0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1222f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1222f4: 0xc048ab8  jal         func_122AE0
    ctx->pc = 0x1222F4u;
    SET_GPR_U32(ctx, 31, 0x1222FCu);
    ctx->pc = 0x1222F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1222F4u;
    // 0x1222f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122AE0u, 0x1222F4u, 0x1222FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1222FCu;
label_1222fc:
    // 0x1222fc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1222fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122300: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x122300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122304: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x122304u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122308: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x122308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12230c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12230cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x122310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122314: 0x3e00008  jr          $ra
    ctx->pc = 0x122314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122314u;
        // 0x122318: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12231Cu;
}
