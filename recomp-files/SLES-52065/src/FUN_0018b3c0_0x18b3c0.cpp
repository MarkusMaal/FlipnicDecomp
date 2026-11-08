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

// Function: FUN_0018b3c0
// Address: 0x18b3c0 - 0x18b478
void FUN_0018b3c0_0x18b3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018b3c0_0x18b3c0");
#endif

    switch (ctx->pc) {
        case 0x18b3fcu: goto label_18b3fc;
        case 0x18b428u: goto label_18b428;
        case 0x18b434u: goto label_18b434;
        default: break;
    }

    ctx->pc = 0x18b3c0u;

    // 0x18b3c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x18b3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18b3c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x18b3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x18b3c8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18b3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18b3cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18b3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18b3d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18b3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18b3d4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x18b3d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b3d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18b3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18b3dc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x18b3dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b3e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18b3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18b3e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18b3e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18b3ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18b3ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b3f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18b3f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18b3f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b3f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18b3f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b3fc:
    // 0x18b3fc: 0x151a40  sll         $v1, $s5, 9
    ctx->pc = 0x18b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 9));
    // 0x18b400: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x18b400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x18b404: 0x719821  addu        $s3, $v1, $s1
    ctx->pc = 0x18b404u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x18b408: 0x82630acc  lb          $v1, 0xACC($s3)
    ctx->pc = 0x18b408u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2764)));
    // 0x18b40c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x18B40Cu;
    {
        const bool branch_taken_0x18b40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B40Cu;
        // 0x18b410: 0x26770acc  addiu       $s7, $s3, 0xACC (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 2764));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b40c) {
            ctx->pc = 0x18B438u;
            goto label_18b438;
        }
    }
    ctx->pc = 0x18B414u;
    // 0x18b414: 0x151140  sll         $v0, $s5, 5
    ctx->pc = 0x18b414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x18b418: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x18b418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x18b41c: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x18b41cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18b420: 0xc077ca6  jal         func_1DF298
    ctx->pc = 0x18B420u;
    SET_GPR_U32(ctx, 31, 0x18B428u);
    ctx->pc = 0x18B424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B420u;
    // 0x18b424: 0x8e842acc  lw          $a0, 0x2ACC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10956)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF298u, 0x18B420u, 0x18B428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B428u;
label_18b428:
    // 0x18b428: 0x8e8408cc  lw          $a0, 0x8CC($s4)
    ctx->pc = 0x18b428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2252)));
    // 0x18b42c: 0xc046c14  jal         func_11B050
    ctx->pc = 0x18B42Cu;
    SET_GPR_U32(ctx, 31, 0x18B434u);
    ctx->pc = 0x18B430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B42Cu;
    // 0x18b430: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x18B42Cu, 0x18B434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B434u;
label_18b434:
    // 0x18b434: 0xa2e00000  sb          $zero, 0x0($s7)
    ctx->pc = 0x18b434u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 0));
label_18b438:
    // 0x18b438: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b43c: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x18b43cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18b440: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x18b440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x18b444: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x18B444u;
    {
        const bool branch_taken_0x18b444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B444u;
        // 0x18b448: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b444) {
            ctx->pc = 0x18B3FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b3fc;
        }
    }
    ctx->pc = 0x18B44Cu;
    // 0x18b44c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x18b44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18b450: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18b450u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18b454: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18b454u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b458: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18b458u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b45c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18b45cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b460: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18b460u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b464: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b464u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b468: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b46c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b46cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b470: 0x3e00008  jr          $ra
    ctx->pc = 0x18B470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B470u;
        // 0x18b474: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B478u;
}
