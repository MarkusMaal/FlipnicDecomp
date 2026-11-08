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

// Function: FUN_00201908
// Address: 0x201908 - 0x201970
void FUN_00201908_0x201908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00201908_0x201908");
#endif

    switch (ctx->pc) {
        case 0x201930u: goto label_201930;
        default: break;
    }

    ctx->pc = 0x201908u;

    // 0x201908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20190c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20190cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201910: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201914: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x201914u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201918: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x201918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20191c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20191cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201920: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x201920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201924: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x201924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x201928: 0xc07fa22  jal         func_1FE888
    ctx->pc = 0x201928u;
    SET_GPR_U32(ctx, 31, 0x201930u);
    ctx->pc = 0x20192Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201928u;
    // 0x20192c: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE888u, 0x201928u, 0x201930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201930u;
label_201930:
    // 0x201930: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x201930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201934: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x201934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201938: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201938u;
    {
        const bool branch_taken_0x201938 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201938u;
        // 0x20193c: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201938) {
            ctx->pc = 0x201948u;
            goto label_201948;
        }
    }
    ctx->pc = 0x201940u;
    // 0x201940: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x201940u;
    {
        const bool branch_taken_0x201940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201940u;
        // 0x201944: 0x3042efff  andi        $v0, $v0, 0xEFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201940) {
            ctx->pc = 0x201958u;
            goto label_201958;
        }
    }
    ctx->pc = 0x201948u;
label_201948:
    // 0x201948: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x201948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20194c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20194cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x201950: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x201950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x201954: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x201954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_201958:
    // 0x201958: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x201958u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x20195c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20195cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201960: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x201960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201964: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201968: 0x3e00008  jr          $ra
    ctx->pc = 0x201968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201968u;
        // 0x20196c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201970u;
}
