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

// Function: FUN_001d0320
// Address: 0x1d0320 - 0x1d03b4
void FUN_001d0320_0x1d0320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d0320_0x1d0320");
#endif

    switch (ctx->pc) {
        case 0x1d0338u: goto label_1d0338;
        case 0x1d035cu: goto label_1d035c;
        case 0x1d0374u: goto label_1d0374;
        case 0x1d038cu: goto label_1d038c;
        case 0x1d03a0u: goto label_1d03a0;
        default: break;
    }

    ctx->pc = 0x1d0320u;

    // 0x1d0320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d0324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d0324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d0328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d0328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d032c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d032cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0330: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x1D0330u;
    SET_GPR_U32(ctx, 31, 0x1D0338u);
    ctx->pc = 0x1D0334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0330u;
    // 0x1d0334: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1D0330u, 0x1D0338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0338u;
label_1d0338:
    // 0x1d0338: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d0338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d033c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d033cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0340: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1d0340u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d0344: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d034c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d034cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0350: 0x1010  mfhi        $v0
    ctx->pc = 0x1d0350u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d0354: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1D0354u;
    SET_GPR_U32(ctx, 31, 0x1D035Cu);
    ctx->pc = 0x1D0358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0354u;
    // 0x1d0358: 0xac22fbe0  sw          $v0, -0x420($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1D0354u, 0x1D035Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D035Cu;
label_1d035c:
    // 0x1d035c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d035cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0364: 0x8c26fbe0  lw          $a2, -0x420($at)
    ctx->pc = 0x1d0364u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36FBE0u));
    // 0x1d0368: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d036c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1D036Cu;
    SET_GPR_U32(ctx, 31, 0x1D0374u);
    ctx->pc = 0x1D0370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D036Cu;
    // 0x1d0370: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1D036Cu, 0x1D0374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0374u;
label_1d0374:
    // 0x1d0374: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d0374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d0378: 0xa0500008  sb          $s0, 0x8($v0)
    ctx->pc = 0x1d0378u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x1d037c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d037cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0380: 0x24a59940  addiu       $a1, $a1, -0x66C0
    ctx->pc = 0x1d0380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940992));
    // 0x1d0384: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1D0384u;
    SET_GPR_U32(ctx, 31, 0x1D038Cu);
    ctx->pc = 0x1D0388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0384u;
    // 0x1d0388: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1D0384u, 0x1D038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D038Cu;
label_1d038c:
    // 0x1d038c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d038cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d0390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0394: 0x24a59980  addiu       $a1, $a1, -0x6680
    ctx->pc = 0x1d0394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941056));
    // 0x1d0398: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1D0398u;
    SET_GPR_U32(ctx, 31, 0x1D03A0u);
    ctx->pc = 0x1D039Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0398u;
    // 0x1d039c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1D0398u, 0x1D03A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D03A0u;
label_1d03a0:
    // 0x1d03a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d03a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d03a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d03a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d03a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d03a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d03ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D03ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D03B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D03ACu;
        // 0x1d03b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D03ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D03B4u;
}
