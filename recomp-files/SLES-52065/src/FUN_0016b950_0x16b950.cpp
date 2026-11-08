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

// Function: FUN_0016b950
// Address: 0x16b950 - 0x16b9d0
void FUN_0016b950_0x16b950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016b950_0x16b950");
#endif

    switch (ctx->pc) {
        case 0x16b994u: goto label_16b994;
        case 0x16b9a0u: goto label_16b9a0;
        case 0x16b9b8u: goto label_16b9b8;
        default: break;
    }

    ctx->pc = 0x16b950u;

    // 0x16b950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16b950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16b954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16b954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16b958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16b958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16b95c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16b960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16b960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b964: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x16B964u;
    {
        const bool branch_taken_0x16b964 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B964u;
        // 0x16b968: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b964) {
            ctx->pc = 0x16B9B8u;
            goto label_16b9b8;
        }
    }
    ctx->pc = 0x16B96Cu;
    // 0x16b96c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16b970: 0x2442a670  addiu       $v0, $v0, -0x5990
    ctx->pc = 0x16b970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944368));
    // 0x16b974: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x16B974u;
    {
        const bool branch_taken_0x16b974 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B974u;
        // 0x16b978: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b974) {
            ctx->pc = 0x16B9A0u;
            goto label_16b9a0;
        }
    }
    ctx->pc = 0x16B97Cu;
    // 0x16b97c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x16b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16b980: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x16b980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x16b984: 0x2442a6d0  addiu       $v0, $v0, -0x5930
    ctx->pc = 0x16b984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944464));
    // 0x16b988: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16b988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b98c: 0xc0417f0  jal         func_105FC0
    ctx->pc = 0x16B98Cu;
    SET_GPR_U32(ctx, 31, 0x16B994u);
    ctx->pc = 0x16B990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B98Cu;
    // 0x16b990: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105FC0u, 0x16B98Cu, 0x16B994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B994u;
label_16b994:
    // 0x16b994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b998: 0xc041808  jal         func_106020
    ctx->pc = 0x16B998u;
    SET_GPR_U32(ctx, 31, 0x16B9A0u);
    ctx->pc = 0x16B99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B998u;
    // 0x16b99c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106020u, 0x16B998u, 0x16B9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B9A0u;
label_16b9a0:
    // 0x16b9a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x16b9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x16b9a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16b9a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16b9a8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B9A8u;
    {
        const bool branch_taken_0x16b9a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B9A8u;
        // 0x16b9ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b9a8) {
            ctx->pc = 0x16B9BCu;
            goto label_16b9bc;
        }
    }
    ctx->pc = 0x16B9B0u;
    // 0x16b9b0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x16B9B0u;
    SET_GPR_U32(ctx, 31, 0x16B9B8u);
    ctx->pc = 0x16B9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B9B0u;
    // 0x16b9b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x16B9B0u, 0x16B9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B9B8u;
label_16b9b8:
    // 0x16b9b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x16b9b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16b9bc:
    // 0x16b9bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16b9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b9c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b9c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b9c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b9c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x16B9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B9C8u;
        // 0x16b9cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B9D0u;
}
