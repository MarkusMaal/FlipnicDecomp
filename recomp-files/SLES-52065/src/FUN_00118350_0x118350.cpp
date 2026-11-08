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

// Function: FUN_00118350
// Address: 0x118350 - 0x118428
void FUN_00118350_0x118350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00118350_0x118350");
#endif

    switch (ctx->pc) {
        case 0x118380u: goto label_118380;
        case 0x1183c0u: goto label_1183c0;
        case 0x1183e8u: goto label_1183e8;
        case 0x1183f4u: goto label_1183f4;
        default: break;
    }

    ctx->pc = 0x118350u;

    // 0x118350: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x118350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x118354: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x118354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x118358: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x118358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x11835c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11835cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x118360: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x118360u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118364: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x118364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x118368: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x118368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x11836c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11836cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x118370: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x118370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118374: 0x24a5e5d8  addiu       $a1, $a1, -0x1A28
    ctx->pc = 0x118374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960600));
    // 0x118378: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x118378u;
    SET_GPR_U32(ctx, 31, 0x118380u);
    ctx->pc = 0x11837Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118378u;
    // 0x11837c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x118378u, 0x118380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118380u;
label_118380:
    // 0x118380: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x118380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118384: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x118384u;
    {
        const bool branch_taken_0x118384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x118384) {
            ctx->pc = 0x118408u;
            goto label_118408;
        }
    }
    ctx->pc = 0x11838Cu;
    // 0x11838c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11838Cu;
    {
        const bool branch_taken_0x11838c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x118390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11838Cu;
        // 0x118390: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11838c) {
            ctx->pc = 0x11839Cu;
            goto label_11839c;
        }
    }
    ctx->pc = 0x118394u;
    // 0x118394: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x118394u;
    {
        const bool branch_taken_0x118394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118394u;
        // 0x118398: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118394) {
            ctx->pc = 0x1183B8u;
            goto label_1183b8;
        }
    }
    ctx->pc = 0x11839Cu;
label_11839c:
    // 0x11839c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x11839cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1183a0: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1183a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1183a4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1183a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1183a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1183a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1183ac: 0x84720008  lh          $s2, 0x8($v1)
    ctx->pc = 0x1183acu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1183b0: 0x0  nop
    ctx->pc = 0x1183b0u;
    // NOP
    // 0x1183b4: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1183b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1183b8:
    // 0x1183b8: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1183B8u;
    {
        const bool branch_taken_0x1183b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1183BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1183B8u;
        // 0x1183bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1183b8) {
            ctx->pc = 0x118404u;
            goto label_118404;
        }
    }
    ctx->pc = 0x1183C0u;
label_1183c0:
    // 0x1183c0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1183c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1183c4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1183c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1183c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1183c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1183cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1183ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1183d0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1183d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1183d4: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x1183d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1183d8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1183d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1183dc: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x1183dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1183e0: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1183E0u;
    SET_GPR_U32(ctx, 31, 0x1183E8u);
    ctx->pc = 0x1183E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1183E0u;
    // 0x1183e4: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1183E0u, 0x1183E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1183E8u;
label_1183e8:
    // 0x1183e8: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x1183e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x1183ec: 0xc062b20  jal         func_18AC80
    ctx->pc = 0x1183ECu;
    SET_GPR_U32(ctx, 31, 0x1183F4u);
    ctx->pc = 0x1183F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1183ECu;
    // 0x1183f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AC80u, 0x1183ECu, 0x1183F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1183F4u;
label_1183f4:
    // 0x1183f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1183f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1183f8: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x1183f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1183fc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1183FCu;
    {
        const bool branch_taken_0x1183fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1183fc) {
            ctx->pc = 0x1183C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1183c0;
        }
    }
    ctx->pc = 0x118404u;
label_118404:
    // 0x118404: 0x0  nop
    ctx->pc = 0x118404u;
    // NOP
label_118408:
    // 0x118408: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x118408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11840c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11840cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118410: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x118410u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118414: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x118414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118418: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x118418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11841c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11841cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118420: 0x3e00008  jr          $ra
    ctx->pc = 0x118420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118420u;
        // 0x118424: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118428u;
}
