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

// Function: FUN_0011b240
// Address: 0x11b240 - 0x11b344
void FUN_0011b240_0x11b240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011b240_0x11b240");
#endif

    switch (ctx->pc) {
        case 0x11b264u: goto label_11b264;
        case 0x11b278u: goto label_11b278;
        case 0x11b290u: goto label_11b290;
        case 0x11b2b8u: goto label_11b2b8;
        case 0x11b2c4u: goto label_11b2c4;
        case 0x11b2d4u: goto label_11b2d4;
        case 0x11b2f8u: goto label_11b2f8;
        case 0x11b300u: goto label_11b300;
        case 0x11b318u: goto label_11b318;
        default: break;
    }

    ctx->pc = 0x11b240u;

    // 0x11b240: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x11b240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
    // 0x11b244: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x11b244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b248: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11b248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11b24c: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x11b24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x11b250: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11b250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11b254: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11b254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11b258: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11b258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b25c: 0xc046d2c  jal         func_11B4B0
    ctx->pc = 0x11B25Cu;
    SET_GPR_U32(ctx, 31, 0x11B264u);
    ctx->pc = 0x11B260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B25Cu;
    // 0x11b260: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B4B0u, 0x11B25Cu, 0x11B264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B264u;
label_11b264:
    // 0x11b264: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11b264u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11b268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b26c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b270: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11B270u;
    SET_GPR_U32(ctx, 31, 0x11B278u);
    ctx->pc = 0x11B274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B270u;
    // 0x11b274: 0x24c6e6d0  addiu       $a2, $a2, -0x1930 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11B270u, 0x11B278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B278u;
label_11b278:
    // 0x11b278: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b27c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11b27cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11b280: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11b280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11b284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b288: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11B288u;
    SET_GPR_U32(ctx, 31, 0x11B290u);
    ctx->pc = 0x11B28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B288u;
    // 0x11b28c: 0x24c6e728  addiu       $a2, $a2, -0x18D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11B288u, 0x11B290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B290u;
label_11b290:
    // 0x11b290: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11b290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b294: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B294u;
    {
        const bool branch_taken_0x11b294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B294u;
        // 0x11b298: 0x2a010002  slti        $at, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b294) {
            ctx->pc = 0x11B2A4u;
            goto label_11b2a4;
        }
    }
    ctx->pc = 0x11B29Cu;
    // 0x11b29c: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x11B29Cu;
    {
        const bool branch_taken_0x11b29c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b29c) {
            ctx->pc = 0x11B2DCu;
            goto label_11b2dc;
        }
    }
    ctx->pc = 0x11B2A4u;
label_11b2a4:
    // 0x11b2a4: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11B2A4u;
    {
        const bool branch_taken_0x11b2a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2A4u;
        // 0x11b2a8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2a4) {
            ctx->pc = 0x11B2CCu;
            goto label_11b2cc;
        }
    }
    ctx->pc = 0x11B2ACu;
    // 0x11b2ac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11b2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11b2b0: 0xc080702  jal         func_201C08
    ctx->pc = 0x11B2B0u;
    SET_GPR_U32(ctx, 31, 0x11B2B8u);
    ctx->pc = 0x11B2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B2B0u;
    // 0x11b2b4: 0x262503c4  addiu       $a1, $s1, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11B2B0u, 0x11B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B2B8u;
label_11b2b8:
    // 0x11b2b8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x11b2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11b2bc: 0xc080664  jal         func_201990
    ctx->pc = 0x11B2BCu;
    SET_GPR_U32(ctx, 31, 0x11B2C4u);
    ctx->pc = 0x11B2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B2BCu;
    // 0x11b2c0: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11B2BCu, 0x11B2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B2C4u;
label_11b2c4:
    // 0x11b2c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11B2C4u;
    {
        const bool branch_taken_0x11b2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2C4u;
        // 0x11b2c8: 0x8e3000fc  lw          $s0, 0xFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2c4) {
            ctx->pc = 0x11B2FCu;
            goto label_11b2fc;
        }
    }
    ctx->pc = 0x11B2CCu;
label_11b2cc:
    // 0x11b2cc: 0xc080702  jal         func_201C08
    ctx->pc = 0x11B2CCu;
    SET_GPR_U32(ctx, 31, 0x11B2D4u);
    ctx->pc = 0x11B2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B2CCu;
    // 0x11b2d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11B2CCu, 0x11B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B2D4u;
label_11b2d4:
    // 0x11b2d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11B2D4u;
    {
        const bool branch_taken_0x11b2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b2d4) {
            ctx->pc = 0x11B2F8u;
            goto label_11b2f8;
        }
    }
    ctx->pc = 0x11B2DCu;
label_11b2dc:
    // 0x11b2dc: 0x822203c4  lb          $v0, 0x3C4($s1)
    ctx->pc = 0x11b2dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 964)));
    // 0x11b2e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B2E0u;
    {
        const bool branch_taken_0x11b2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2E0u;
        // 0x11b2e4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2e0) {
            ctx->pc = 0x11B2F0u;
            goto label_11b2f0;
        }
    }
    ctx->pc = 0x11B2E8u;
    // 0x11b2e8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x11B2E8u;
    {
        const bool branch_taken_0x11b2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2E8u;
        // 0x11b2ec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2e8) {
            ctx->pc = 0x11B330u;
            goto label_11b330;
        }
    }
    ctx->pc = 0x11B2F0u;
label_11b2f0:
    // 0x11b2f0: 0xc080702  jal         func_201C08
    ctx->pc = 0x11B2F0u;
    SET_GPR_U32(ctx, 31, 0x11B2F8u);
    ctx->pc = 0x11B2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B2F0u;
    // 0x11b2f4: 0x262503c4  addiu       $a1, $s1, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11B2F0u, 0x11B2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B2F8u;
label_11b2f8:
    // 0x11b2f8: 0x8e3000fc  lw          $s0, 0xFC($s1)
    ctx->pc = 0x11b2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_11b2fc:
    // 0x11b2fc: 0x0  nop
    ctx->pc = 0x11b2fcu;
    // NOP
label_11b300:
    // 0x11b300: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B300u;
    {
        const bool branch_taken_0x11b300 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B300u;
        // 0x11b304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b300) {
            ctx->pc = 0x11B310u;
            goto label_11b310;
        }
    }
    ctx->pc = 0x11B308u;
    // 0x11b308: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11B308u;
    {
        const bool branch_taken_0x11b308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B308u;
        // 0x11b30c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b308) {
            ctx->pc = 0x11B330u;
            goto label_11b330;
        }
    }
    ctx->pc = 0x11B310u;
label_11b310:
    // 0x11b310: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x11B310u;
    SET_GPR_U32(ctx, 31, 0x11B318u);
    ctx->pc = 0x11B314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B310u;
    // 0x11b314: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x11B310u, 0x11B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B318u;
label_11b318:
    // 0x11b318: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B318u;
    {
        const bool branch_taken_0x11b318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b318) {
            ctx->pc = 0x11B328u;
            goto label_11b328;
        }
    }
    ctx->pc = 0x11B320u;
    // 0x11b320: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11B320u;
    {
        const bool branch_taken_0x11b320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B320u;
        // 0x11b324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b320) {
            ctx->pc = 0x11B330u;
            goto label_11b330;
        }
    }
    ctx->pc = 0x11B328u;
label_11b328:
    // 0x11b328: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x11B328u;
    {
        const bool branch_taken_0x11b328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B328u;
        // 0x11b32c: 0x8e100038  lw          $s0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b328) {
            ctx->pc = 0x11B300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b300;
        }
    }
    ctx->pc = 0x11B330u;
label_11b330:
    // 0x11b330: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11b330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b334: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11b334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b338: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11b338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b33c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B33Cu;
        // 0x11b340: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B344u;
}
