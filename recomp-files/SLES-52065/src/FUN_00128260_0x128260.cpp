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

// Function: FUN_00128260
// Address: 0x128260 - 0x128364
void FUN_00128260_0x128260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00128260_0x128260");
#endif

    switch (ctx->pc) {
        case 0x1282b4u: goto label_1282b4;
        case 0x1282bcu: goto label_1282bc;
        case 0x1282ccu: goto label_1282cc;
        case 0x1282ecu: goto label_1282ec;
        case 0x1282f4u: goto label_1282f4;
        case 0x128318u: goto label_128318;
        case 0x128340u: goto label_128340;
        default: break;
    }

    ctx->pc = 0x128260u;

    // 0x128260: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x128260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x128264: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x128264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x128268: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x128268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12826c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12826cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x128270: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x128270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x128274: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x128274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x128278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x128278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12827c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12827cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128280: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x128280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x128284: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x128284u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x128288: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x128288u;
    {
        const bool branch_taken_0x128288 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128288u;
        // 0x12828c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128288) {
            ctx->pc = 0x128344u;
            goto label_128344;
        }
    }
    ctx->pc = 0x128290u;
    // 0x128290: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x128290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x128294: 0x221082b  sltu        $at, $s1, $at
    ctx->pc = 0x128294u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x128298: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x128298u;
    {
        const bool branch_taken_0x128298 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128298u;
        // 0x12829c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128298) {
            ctx->pc = 0x1282BCu;
            goto label_1282bc;
        }
    }
    ctx->pc = 0x1282A0u;
    // 0x1282a0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1282a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1282a4: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1282a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1282a8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1282a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1282ac: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1282ACu;
    SET_GPR_U32(ctx, 31, 0x1282B4u);
    ctx->pc = 0x1282B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1282ACu;
    // 0x1282b0: 0x24a5ebc0  addiu       $a1, $a1, -0x1440 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1282ACu, 0x1282B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1282B4u;
label_1282b4:
    // 0x1282b4: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1282B4u;
    SET_GPR_U32(ctx, 31, 0x1282BCu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1282B4u, 0x1282BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1282BCu;
label_1282bc:
    // 0x1282bc: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x1282bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1282c0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1282c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1282c4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1282C4u;
    SET_GPR_U32(ctx, 31, 0x1282CCu);
    ctx->pc = 0x1282C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1282C4u;
    // 0x1282c8: 0x26530008  addiu       $s3, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1282C4u, 0x1282CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1282CCu;
label_1282cc:
    // 0x1282cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1282ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1282d0: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1282D0u;
    {
        const bool branch_taken_0x1282d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1282D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282D0u;
        // 0x1282d4: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282d0) {
            ctx->pc = 0x1282F4u;
            goto label_1282f4;
        }
    }
    ctx->pc = 0x1282D8u;
    // 0x1282d8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1282d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1282dc: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1282dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1282e0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1282e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1282e4: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1282E4u;
    SET_GPR_U32(ctx, 31, 0x1282ECu);
    ctx->pc = 0x1282E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1282E4u;
    // 0x1282e8: 0x24a5eba0  addiu       $a1, $a1, -0x1460 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1282E4u, 0x1282ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1282ECu;
label_1282ec:
    // 0x1282ec: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1282ECu;
    SET_GPR_U32(ctx, 31, 0x1282F4u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1282ECu, 0x1282F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1282F4u;
label_1282f4:
    // 0x1282f4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1282F4u;
    {
        const bool branch_taken_0x1282f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1282F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282F4u;
        // 0x1282f8: 0xae740000  sw          $s4, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282f4) {
            ctx->pc = 0x128340u;
            goto label_128340;
        }
    }
    ctx->pc = 0x1282FCu;
    // 0x1282fc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1282fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x128300: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x128300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x128304: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x128304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x128308: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x128308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12830c: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x12830cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x128310: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x128310u;
    {
        const bool branch_taken_0x128310 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x128314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128310u;
        // 0x128314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128310) {
            ctx->pc = 0x128334u;
            goto label_128334;
        }
    }
    ctx->pc = 0x128318u;
label_128318:
    // 0x128318: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x128318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12831c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x12831cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x128320: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x128320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x128324: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x128324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x128328: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x128328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x12832c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12832Cu;
    {
        const bool branch_taken_0x12832c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12832c) {
            ctx->pc = 0x128318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128318;
        }
    }
    ctx->pc = 0x128334u;
label_128334:
    // 0x128334: 0x0  nop
    ctx->pc = 0x128334u;
    // NOP
    // 0x128338: 0xc0401a4  jal         func_100690
    ctx->pc = 0x128338u;
    SET_GPR_U32(ctx, 31, 0x128340u);
    ctx->pc = 0x12833Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128338u;
    // 0x12833c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x128338u, 0x128340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128340u;
label_128340:
    // 0x128340: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x128340u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_128344:
    // 0x128344: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x128344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x128348: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x128348u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12834c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12834cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128350: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x128350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128354: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x128354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x128358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12835c: 0x3e00008  jr          $ra
    ctx->pc = 0x12835Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12835Cu;
        // 0x128360: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12835Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128364u;
}
