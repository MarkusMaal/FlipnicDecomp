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

// Function: FUN_00201888
// Address: 0x201888 - 0x201908
void FUN_00201888_0x201888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00201888_0x201888");
#endif

    switch (ctx->pc) {
        case 0x2018c8u: goto label_2018c8;
        case 0x2018e8u: goto label_2018e8;
        default: break;
    }

    ctx->pc = 0x201888u;

    // 0x201888: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x201888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20188c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20188cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x201890: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x201890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x201894: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x201894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20189c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20189cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2018a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2018a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2018a4: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2018a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2018a8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2018a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2018ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2018ACu;
    {
        const bool branch_taken_0x2018ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2018B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018ACu;
        // 0x2018b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2018ac) {
            ctx->pc = 0x2018C8u;
            goto label_2018c8;
        }
    }
    ctx->pc = 0x2018B4u;
    // 0x2018b4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2018b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2018b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2018b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2018bc: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x2018bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2018c0: 0xc07fa22  jal         func_1FE888
    ctx->pc = 0x2018C0u;
    SET_GPR_U32(ctx, 31, 0x2018C8u);
    ctx->pc = 0x2018C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2018C0u;
    // 0x2018c4: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE888u, 0x2018C0u, 0x2018C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2018C8u;
label_2018c8:
    // 0x2018c8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2018c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2018cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2018ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2018d0: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x2018d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2018d4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2018d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2018d8: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x2018d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x2018dc: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2018dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2018e0: 0xc0817f4  jal         func_205FD0
    ctx->pc = 0x2018E0u;
    SET_GPR_U32(ctx, 31, 0x2018E8u);
    ctx->pc = 0x2018E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2018E0u;
    // 0x2018e4: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205FD0u, 0x2018E0u, 0x2018E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2018E8u;
label_2018e8:
    // 0x2018e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2018e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2018ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2018ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2018f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2018f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2018f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2018f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2018f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2018f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2018fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2018fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201900: 0x3e00008  jr          $ra
    ctx->pc = 0x201900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201900u;
        // 0x201904: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201908u;
}
