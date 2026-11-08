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

// Function: FUN_001863f0
// Address: 0x1863f0 - 0x18645c
void FUN_001863f0_0x1863f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001863f0_0x1863f0");
#endif

    switch (ctx->pc) {
        case 0x186438u: goto label_186438;
        case 0x18644cu: goto label_18644c;
        default: break;
    }

    ctx->pc = 0x1863f0u;

    // 0x1863f0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1863f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1863f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1863f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1863f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1863f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1863fc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1863fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x186400: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x186400u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x186404: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x186408: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x186408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x18640c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x18640cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x186410: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x186410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x186414: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186418: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x186418u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18641c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x18641cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x186420: 0x280c0  sll         $s0, $v0, 3
    ctx->pc = 0x186420u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x186424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x186424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186428: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x186428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x18642c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18642cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186430: 0xc04b1c8  jal         func_12C720
    ctx->pc = 0x186430u;
    SET_GPR_U32(ctx, 31, 0x186438u);
    ctx->pc = 0x186434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186430u;
    // 0x186434: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C720u, 0x186430u, 0x186438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186438u;
label_186438:
    // 0x186438: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x186438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x18643c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18643cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186440: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x186440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186444: 0xc04b1c8  jal         func_12C720
    ctx->pc = 0x186444u;
    SET_GPR_U32(ctx, 31, 0x18644Cu);
    ctx->pc = 0x186448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186444u;
    // 0x186448: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C720u, 0x186444u, 0x18644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18644Cu;
label_18644c:
    // 0x18644c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18644cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186450: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186454: 0x3e00008  jr          $ra
    ctx->pc = 0x186454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186454u;
        // 0x186458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18645Cu;
}
