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

// Function: FUN_001c9200
// Address: 0x1c9200 - 0x1c950c
void FUN_001c9200_0x1c9200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c9200_0x1c9200");
#endif

    switch (ctx->pc) {
        case 0x1c9220u: goto label_1c9220;
        case 0x1c9228u: goto label_1c9228;
        case 0x1c9238u: goto label_1c9238;
        case 0x1c9240u: goto label_1c9240;
        case 0x1c9250u: goto label_1c9250;
        case 0x1c9290u: goto label_1c9290;
        case 0x1c92acu: goto label_1c92ac;
        case 0x1c92d4u: goto label_1c92d4;
        case 0x1c92e8u: goto label_1c92e8;
        case 0x1c933cu: goto label_1c933c;
        case 0x1c9388u: goto label_1c9388;
        case 0x1c93a8u: goto label_1c93a8;
        case 0x1c93f4u: goto label_1c93f4;
        case 0x1c9410u: goto label_1c9410;
        case 0x1c9420u: goto label_1c9420;
        case 0x1c9460u: goto label_1c9460;
        case 0x1c9484u: goto label_1c9484;
        case 0x1c94c8u: goto label_1c94c8;
        case 0x1c94e8u: goto label_1c94e8;
        case 0x1c94f8u: goto label_1c94f8;
        default: break;
    }

    ctx->pc = 0x1c9200u;

    // 0x1c9200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c9200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c9204: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c9204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c9208: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c9208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c920c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c920cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c9210: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c9210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c9214: 0x8c860068  lw          $a2, 0x68($a0)
    ctx->pc = 0x1c9214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1c9218: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C9218u;
    SET_GPR_U32(ctx, 31, 0x1C9220u);
    ctx->pc = 0x1C921Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9218u;
    // 0x1c921c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C9218u, 0x1C9220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9220u;
label_1c9220:
    // 0x1c9220: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C9220u;
    SET_GPR_U32(ctx, 31, 0x1C9228u);
    ctx->pc = 0x1C9224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9220u;
    // 0x1c9224: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C9220u, 0x1C9228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9228u;
label_1c9228:
    // 0x1c9228: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x1c9228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1c922c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c922cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9230: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C9230u;
    SET_GPR_U32(ctx, 31, 0x1C9238u);
    ctx->pc = 0x1C9234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9230u;
    // 0x1c9234: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C9230u, 0x1C9238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9238u;
label_1c9238:
    // 0x1c9238: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C9238u;
    SET_GPR_U32(ctx, 31, 0x1C9240u);
    ctx->pc = 0x1C923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9238u;
    // 0x1c923c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C9238u, 0x1C9240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9240u;
label_1c9240:
    // 0x1c9240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9244: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c9244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c9248: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C9248u;
    SET_GPR_U32(ctx, 31, 0x1C9250u);
    ctx->pc = 0x1C924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9248u;
    // 0x1c924c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C9248u, 0x1C9250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9250u;
label_1c9250:
    // 0x1c9250: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9254: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c9254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9258: 0x8c23f8b8  lw          $v1, -0x748($at)
    ctx->pc = 0x1c9258u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c925c: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C925Cu;
    {
        const bool branch_taken_0x1c925c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C925Cu;
        // 0x1c9260: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c925c) {
            ctx->pc = 0x1C92C4u;
            goto label_1c92c4;
        }
    }
    ctx->pc = 0x1C9264u;
    // 0x1c9264: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c9264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9268: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9268u;
    {
        const bool branch_taken_0x1c9268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9268u;
        // 0x1c926c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9268) {
            ctx->pc = 0x1C9288u;
            goto label_1c9288;
        }
    }
    ctx->pc = 0x1C9270u;
    // 0x1c9270: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9270u;
    {
        const bool branch_taken_0x1c9270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c9270) {
            ctx->pc = 0x1C9288u;
            goto label_1c9288;
        }
    }
    ctx->pc = 0x1C9278u;
    // 0x1c9278: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9278u;
    {
        const bool branch_taken_0x1c9278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9278) {
            ctx->pc = 0x1C9288u;
            goto label_1c9288;
        }
    }
    ctx->pc = 0x1C9280u;
    // 0x1c9280: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C9280u;
    {
        const bool branch_taken_0x1c9280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9280u;
        // 0x1c9284: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9280) {
            ctx->pc = 0x1C92C4u;
            goto label_1c92c4;
        }
    }
    ctx->pc = 0x1C9288u;
label_1c9288:
    // 0x1c9288: 0xc072e84  jal         func_1CBA10
    ctx->pc = 0x1C9288u;
    SET_GPR_U32(ctx, 31, 0x1C9290u);
    ctx->pc = 0x1C928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9288u;
    // 0x1c928c: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBA10u, 0x1C9288u, 0x1C9290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9290u;
label_1c9290:
    // 0x1c9290: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c9290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c9294: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9294u;
    {
        const bool branch_taken_0x1c9294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9294u;
        // 0x1c9298: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9294) {
            ctx->pc = 0x1C92A4u;
            goto label_1c92a4;
        }
    }
    ctx->pc = 0x1C929Cu;
    // 0x1c929c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C929Cu;
    {
        const bool branch_taken_0x1c929c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C929Cu;
        // 0x1c92a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c929c) {
            ctx->pc = 0x1C92C8u;
            goto label_1c92c8;
        }
    }
    ctx->pc = 0x1C92A4u;
label_1c92a4:
    // 0x1c92a4: 0xc072e84  jal         func_1CBA10
    ctx->pc = 0x1C92A4u;
    SET_GPR_U32(ctx, 31, 0x1C92ACu);
    ctx->pc = 0x1C92A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C92A4u;
    // 0x1c92a8: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBA10u, 0x1C92A4u, 0x1C92ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C92ACu;
label_1c92ac:
    // 0x1c92ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c92acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c92b0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1c92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1c92b4: 0x24422400  addiu       $v0, $v0, 0x2400
    ctx->pc = 0x1c92b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9216));
    // 0x1c92b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c92bc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1C92BCu;
    {
        const bool branch_taken_0x1c92bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92BCu;
        // 0x1c92c0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92bc) {
            ctx->pc = 0x1C92C4u;
            goto label_1c92c4;
        }
    }
    ctx->pc = 0x1C92C4u;
label_1c92c4:
    // 0x1c92c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c92c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c92c8:
    // 0x1c92c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c92c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c92cc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C92CCu;
    SET_GPR_U32(ctx, 31, 0x1C92D4u);
    ctx->pc = 0x1C92D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C92CCu;
    // 0x1c92d0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C92CCu, 0x1C92D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C92D4u;
label_1c92d4:
    // 0x1c92d4: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c92d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c92d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c92d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c92dc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1c92dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c92e0: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1C92E0u;
    SET_GPR_U32(ctx, 31, 0x1C92E8u);
    ctx->pc = 0x1C92E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C92E0u;
    // 0x1c92e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1C92E0u, 0x1C92E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C92E8u;
label_1c92e8:
    // 0x1c92e8: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1c92e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1c92ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c92ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c92f0: 0x8c24ca84  lw          $a0, -0x357C($at)
    ctx->pc = 0x1c92f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1c92f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c92f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c92f8: 0x8c23f8b8  lw          $v1, -0x748($at)
    ctx->pc = 0x1c92f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c92fc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C92FCu;
    {
        const bool branch_taken_0x1c92fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92FCu;
        // 0x1c9300: 0x8c842830  lw          $a0, 0x2830($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92fc) {
            ctx->pc = 0x1C9328u;
            goto label_1c9328;
        }
    }
    ctx->pc = 0x1C9304u;
    // 0x1c9304: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c9304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9308: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9308u;
    {
        const bool branch_taken_0x1c9308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9308u;
        // 0x1c930c: 0x2486001e  addiu       $a2, $a0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9308) {
            ctx->pc = 0x1C9320u;
            goto label_1c9320;
        }
    }
    ctx->pc = 0x1C9310u;
    // 0x1c9310: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9310u;
    {
        const bool branch_taken_0x1c9310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9310) {
            ctx->pc = 0x1C9320u;
            goto label_1c9320;
        }
    }
    ctx->pc = 0x1C9318u;
    // 0x1c9318: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9318u;
    {
        const bool branch_taken_0x1c9318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9318u;
        // 0x1c931c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9318) {
            ctx->pc = 0x1C932Cu;
            goto label_1c932c;
        }
    }
    ctx->pc = 0x1C9320u;
label_1c9320:
    // 0x1c9320: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9320u;
    {
        const bool branch_taken_0x1c9320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9320u;
        // 0x1c9324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9320) {
            ctx->pc = 0x1C9330u;
            goto label_1c9330;
        }
    }
    ctx->pc = 0x1C9328u;
label_1c9328:
    // 0x1c9328: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c9328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c932c:
    // 0x1c932c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c932cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9330:
    // 0x1c9330: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1c9330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c9334: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C9334u;
    SET_GPR_U32(ctx, 31, 0x1C933Cu);
    ctx->pc = 0x1C9338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9334u;
    // 0x1c9338: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C9334u, 0x1C933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C933Cu;
label_1c933c:
    // 0x1c933c: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c933cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c9340: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9344: 0x8c23f8b8  lw          $v1, -0x748($at)
    ctx->pc = 0x1c9344u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c9348: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c9348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c934c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C934Cu;
    {
        const bool branch_taken_0x1c934c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C934Cu;
        // 0x1c9350: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c934c) {
            ctx->pc = 0x1C9398u;
            goto label_1c9398;
        }
    }
    ctx->pc = 0x1C9354u;
    // 0x1c9354: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c9354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9358: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9358u;
    {
        const bool branch_taken_0x1c9358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c9358) {
            ctx->pc = 0x1C937Cu;
            goto label_1c937c;
        }
    }
    ctx->pc = 0x1C9360u;
    // 0x1c9360: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c9360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9364: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9364u;
    {
        const bool branch_taken_0x1c9364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c9364) {
            ctx->pc = 0x1C937Cu;
            goto label_1c937c;
        }
    }
    ctx->pc = 0x1C936Cu;
    // 0x1c936c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C936Cu;
    {
        const bool branch_taken_0x1c936c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c936c) {
            ctx->pc = 0x1C937Cu;
            goto label_1c937c;
        }
    }
    ctx->pc = 0x1C9374u;
    // 0x1c9374: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9374u;
    {
        const bool branch_taken_0x1c9374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9374) {
            ctx->pc = 0x1C9394u;
            goto label_1c9394;
        }
    }
    ctx->pc = 0x1C937Cu;
label_1c937c:
    // 0x1c937c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c937cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9380: 0xc07307c  jal         func_1CC1F0
    ctx->pc = 0x1C9380u;
    SET_GPR_U32(ctx, 31, 0x1C9388u);
    ctx->pc = 0x1C9384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9380u;
    // 0x1c9384: 0x8c24f8b0  lw          $a0, -0x750($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC1F0u, 0x1C9380u, 0x1C9388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9388u;
label_1c9388:
    // 0x1c9388: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c938c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C938Cu;
    {
        const bool branch_taken_0x1c938c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C938Cu;
        // 0x1c9390: 0x8c26f8b0  lw          $a2, -0x750($at) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c938c) {
            ctx->pc = 0x1C9398u;
            goto label_1c9398;
        }
    }
    ctx->pc = 0x1C9394u;
label_1c9394:
    // 0x1c9394: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c9394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c9398:
    // 0x1c9398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c939c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1c939cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c93a0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C93A0u;
    SET_GPR_U32(ctx, 31, 0x1C93A8u);
    ctx->pc = 0x1C93A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C93A0u;
    // 0x1c93a4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C93A0u, 0x1C93A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C93A8u;
label_1c93a8:
    // 0x1c93a8: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c93a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c93ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c93acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c93b0: 0x8c23f8b8  lw          $v1, -0x748($at)
    ctx->pc = 0x1c93b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c93b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c93b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c93b8: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C93B8u;
    {
        const bool branch_taken_0x1c93b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C93BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C93B8u;
        // 0x1c93bc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c93b8) {
            ctx->pc = 0x1C9404u;
            goto label_1c9404;
        }
    }
    ctx->pc = 0x1C93C0u;
    // 0x1c93c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c93c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c93c4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C93C4u;
    {
        const bool branch_taken_0x1c93c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c93c4) {
            ctx->pc = 0x1C93E8u;
            goto label_1c93e8;
        }
    }
    ctx->pc = 0x1C93CCu;
    // 0x1c93cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c93ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c93d0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C93D0u;
    {
        const bool branch_taken_0x1c93d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c93d0) {
            ctx->pc = 0x1C93E8u;
            goto label_1c93e8;
        }
    }
    ctx->pc = 0x1C93D8u;
    // 0x1c93d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C93D8u;
    {
        const bool branch_taken_0x1c93d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c93d8) {
            ctx->pc = 0x1C93E8u;
            goto label_1c93e8;
        }
    }
    ctx->pc = 0x1C93E0u;
    // 0x1c93e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C93E0u;
    {
        const bool branch_taken_0x1c93e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c93e0) {
            ctx->pc = 0x1C9400u;
            goto label_1c9400;
        }
    }
    ctx->pc = 0x1C93E8u;
label_1c93e8:
    // 0x1c93e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c93e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c93ec: 0xc07307c  jal         func_1CC1F0
    ctx->pc = 0x1C93ECu;
    SET_GPR_U32(ctx, 31, 0x1C93F4u);
    ctx->pc = 0x1C93F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C93ECu;
    // 0x1c93f0: 0x8c24f8b0  lw          $a0, -0x750($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC1F0u, 0x1C93ECu, 0x1C93F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C93F4u;
label_1c93f4:
    // 0x1c93f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c93f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c93f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C93F8u;
    {
        const bool branch_taken_0x1c93f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C93FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C93F8u;
        // 0x1c93fc: 0x8c26f8b0  lw          $a2, -0x750($at) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c93f8) {
            ctx->pc = 0x1C9404u;
            goto label_1c9404;
        }
    }
    ctx->pc = 0x1C9400u;
label_1c9400:
    // 0x1c9400: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c9400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c9404:
    // 0x1c9404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9408: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C9408u;
    SET_GPR_U32(ctx, 31, 0x1C9410u);
    ctx->pc = 0x1C940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9408u;
    // 0x1c940c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C9408u, 0x1C9410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9410u;
label_1c9410:
    // 0x1c9410: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c9410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c9414: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c9414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9418: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C9418u;
    SET_GPR_U32(ctx, 31, 0x1C9420u);
    ctx->pc = 0x1C941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9418u;
    // 0x1c941c: 0x24a56110  addiu       $a1, $a1, 0x6110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C9418u, 0x1C9420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9420u;
label_1c9420:
    // 0x1c9420: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9424: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c9424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9428: 0x8c24f8b8  lw          $a0, -0x748($at)
    ctx->pc = 0x1c9428u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c942c: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C942Cu;
    {
        const bool branch_taken_0x1c942c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C942Cu;
        // 0x1c9430: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c942c) {
            ctx->pc = 0x1C9474u;
            goto label_1c9474;
        }
    }
    ctx->pc = 0x1C9434u;
    // 0x1c9434: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c9434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9438: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9438u;
    {
        const bool branch_taken_0x1c9438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9438u;
        // 0x1c943c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9438) {
            ctx->pc = 0x1C9458u;
            goto label_1c9458;
        }
    }
    ctx->pc = 0x1C9440u;
    // 0x1c9440: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9440u;
    {
        const bool branch_taken_0x1c9440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c9440) {
            ctx->pc = 0x1C9458u;
            goto label_1c9458;
        }
    }
    ctx->pc = 0x1C9448u;
    // 0x1c9448: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9448u;
    {
        const bool branch_taken_0x1c9448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9448) {
            ctx->pc = 0x1C9458u;
            goto label_1c9458;
        }
    }
    ctx->pc = 0x1C9450u;
    // 0x1c9450: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9450u;
    {
        const bool branch_taken_0x1c9450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9450) {
            ctx->pc = 0x1C9470u;
            goto label_1c9470;
        }
    }
    ctx->pc = 0x1C9458u;
label_1c9458:
    // 0x1c9458: 0xc073084  jal         func_1CC210
    ctx->pc = 0x1C9458u;
    SET_GPR_U32(ctx, 31, 0x1C9460u);
    ctx->pc = 0x1CC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC210u, 0x1C9458u, 0x1C9460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9460u;
label_1c9460:
    // 0x1c9460: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9464: 0x8c22f8b8  lw          $v0, -0x748($at)
    ctx->pc = 0x1c9464u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c9468: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9468u;
    {
        const bool branch_taken_0x1c9468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9468u;
        // 0x1c946c: 0x2446000a  addiu       $a2, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9468) {
            ctx->pc = 0x1C9474u;
            goto label_1c9474;
        }
    }
    ctx->pc = 0x1C9470u;
label_1c9470:
    // 0x1c9470: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c9470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c9474:
    // 0x1c9474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9478: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1c9478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c947c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C947Cu;
    SET_GPR_U32(ctx, 31, 0x1C9484u);
    ctx->pc = 0x1C9480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C947Cu;
    // 0x1c9480: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C947Cu, 0x1C9484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9484u;
label_1c9484:
    // 0x1c9484: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1c9484u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c9488: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c948c: 0x8c24f8b8  lw          $a0, -0x748($at)
    ctx->pc = 0x1c948cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c9490: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c9490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9494: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C9494u;
    {
        const bool branch_taken_0x1c9494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9494u;
        // 0x1c9498: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9494) {
            ctx->pc = 0x1C94DCu;
            goto label_1c94dc;
        }
    }
    ctx->pc = 0x1C949Cu;
    // 0x1c949c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c949cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c94a0: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C94A0u;
    {
        const bool branch_taken_0x1c94a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C94A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94A0u;
        // 0x1c94a4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c94a0) {
            ctx->pc = 0x1C94C0u;
            goto label_1c94c0;
        }
    }
    ctx->pc = 0x1C94A8u;
    // 0x1c94a8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C94A8u;
    {
        const bool branch_taken_0x1c94a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c94a8) {
            ctx->pc = 0x1C94C0u;
            goto label_1c94c0;
        }
    }
    ctx->pc = 0x1C94B0u;
    // 0x1c94b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C94B0u;
    {
        const bool branch_taken_0x1c94b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c94b0) {
            ctx->pc = 0x1C94C0u;
            goto label_1c94c0;
        }
    }
    ctx->pc = 0x1C94B8u;
    // 0x1c94b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C94B8u;
    {
        const bool branch_taken_0x1c94b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c94b8) {
            ctx->pc = 0x1C94D8u;
            goto label_1c94d8;
        }
    }
    ctx->pc = 0x1C94C0u;
label_1c94c0:
    // 0x1c94c0: 0xc073084  jal         func_1CC210
    ctx->pc = 0x1C94C0u;
    SET_GPR_U32(ctx, 31, 0x1C94C8u);
    ctx->pc = 0x1CC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC210u, 0x1C94C0u, 0x1C94C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C94C8u;
label_1c94c8:
    // 0x1c94c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c94c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c94cc: 0x8c22f8b8  lw          $v0, -0x748($at)
    ctx->pc = 0x1c94ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c94d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C94D0u;
    {
        const bool branch_taken_0x1c94d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C94D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C94D0u;
        // 0x1c94d4: 0x2446000a  addiu       $a2, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c94d0) {
            ctx->pc = 0x1C94DCu;
            goto label_1c94dc;
        }
    }
    ctx->pc = 0x1C94D8u;
label_1c94d8:
    // 0x1c94d8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c94d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c94dc:
    // 0x1c94dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c94dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c94e0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C94E0u;
    SET_GPR_U32(ctx, 31, 0x1C94E8u);
    ctx->pc = 0x1C94E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C94E0u;
    // 0x1c94e4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C94E0u, 0x1C94E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C94E8u;
label_1c94e8:
    // 0x1c94e8: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c94e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c94ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c94ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c94f0: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C94F0u;
    SET_GPR_U32(ctx, 31, 0x1C94F8u);
    ctx->pc = 0x1C94F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C94F0u;
    // 0x1c94f4: 0x24a56110  addiu       $a1, $a1, 0x6110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C94F0u, 0x1C94F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C94F8u;
label_1c94f8:
    // 0x1c94f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c94f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c94fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c94fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c9500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9504: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9504u;
        // 0x1c9508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C950Cu;
}
