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

// Function: FUN_001d4288
// Address: 0x1d4288 - 0x1d4314
void FUN_001d4288_0x1d4288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d4288_0x1d4288");
#endif

    switch (ctx->pc) {
        case 0x1d42c0u: goto label_1d42c0;
        case 0x1d42ecu: goto label_1d42ec;
        default: break;
    }

    ctx->pc = 0x1d4288u;

    // 0x1d4288: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d4288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d428c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d428cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d4290: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d4290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d4294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d4298: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d4298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d429c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d429cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d42a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d42a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d42a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d42a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d42a8: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1d42a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d42ac: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D42ACu;
    {
        const bool branch_taken_0x1d42ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d42ac) {
            ctx->pc = 0x1D42B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D42ACu;
            // 0x1d42b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D42FCu;
            goto label_1d42fc;
        }
    }
    ctx->pc = 0x1D42B4u;
    // 0x1d42b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d42b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d42b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d42b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d42bc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1d42bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d42c0:
    // 0x1d42c0: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x1d42c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1d42c4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d42c4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1d42c8: 0xde2200a0  ld          $v0, 0xA0($s1)
    ctx->pc = 0x1d42c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1d42cc: 0xb31814  dsllv       $v1, $s3, $a1
    ctx->pc = 0x1d42ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x1d42d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d42d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d42d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D42D4u;
    {
        const bool branch_taken_0x1d42d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D42D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42D4u;
        // 0x1d42d8: 0x66100001  daddiu      $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42d4) {
            ctx->pc = 0x1D42ECu;
            goto label_1d42ec;
        }
    }
    ctx->pc = 0x1D42DCu;
    // 0x1d42dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d42dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d42e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d42e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d42e4: 0xc074f80  jal         func_1D3E00
    ctx->pc = 0x1D42E4u;
    SET_GPR_U32(ctx, 31, 0x1D42ECu);
    ctx->pc = 0x1D42E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D42E4u;
    // 0x1d42e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3E00u, 0x1D42E4u, 0x1D42ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D42ECu;
label_1d42ec:
    // 0x1d42ec: 0x2e020030  sltiu       $v0, $s0, 0x30
    ctx->pc = 0x1d42ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1d42f0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D42F0u;
    {
        const bool branch_taken_0x1d42f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d42f0) {
            ctx->pc = 0x1D42C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d42c0;
        }
    }
    ctx->pc = 0x1D42F8u;
    // 0x1d42f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d42f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d42fc:
    // 0x1d42fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d42fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d4300: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d4300u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4304: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d4304u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d4308: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d4308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d430c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D430Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D430Cu;
        // 0x1d4310: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D430Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4314u;
}
