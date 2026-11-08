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

// Function: FUN_0018b930
// Address: 0x18b930 - 0x18b9b4
void FUN_0018b930_0x18b930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018b930_0x18b930");
#endif

    switch (ctx->pc) {
        case 0x18b970u: goto label_18b970;
        case 0x18b99cu: goto label_18b99c;
        default: break;
    }

    ctx->pc = 0x18b930u;

    // 0x18b930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18b930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18b934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18b934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18b938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18b93c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18b940: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18b940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b944: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x18B944u;
    {
        const bool branch_taken_0x18b944 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B944u;
        // 0x18b948: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b944) {
            ctx->pc = 0x18B99Cu;
            goto label_18b99c;
        }
    }
    ctx->pc = 0x18B94Cu;
    // 0x18b94c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x18b94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x18b950: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x18b950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x18b954: 0x2463b160  addiu       $v1, $v1, -0x4EA0
    ctx->pc = 0x18b954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947168));
    // 0x18b958: 0x2442b1b4  addiu       $v0, $v0, -0x4E4C
    ctx->pc = 0x18b958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947252));
    // 0x18b95c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x18b95cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x18b960: 0x26240210  addiu       $a0, $s1, 0x210
    ctx->pc = 0x18b960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x18b964: 0xae220444  sw          $v0, 0x444($s1)
    ctx->pc = 0x18b964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1092), GPR_U32(ctx, 2));
    // 0x18b968: 0xc063f28  jal         func_18FCA0
    ctx->pc = 0x18B968u;
    SET_GPR_U32(ctx, 31, 0x18B970u);
    ctx->pc = 0x18B96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B968u;
    // 0x18b96c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FCA0u, 0x18B968u, 0x18B970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B970u;
label_18b970:
    // 0x18b970: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B970u;
    {
        const bool branch_taken_0x18b970 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B970u;
        // 0x18b974: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b970) {
            ctx->pc = 0x18B988u;
            goto label_18b988;
        }
    }
    ctx->pc = 0x18B978u;
    // 0x18b978: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x18b978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x18b97c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x18b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x18b980: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x18b980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x18b984: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x18b984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_18b988:
    // 0x18b988: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18b988u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18b98c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B98Cu;
    {
        const bool branch_taken_0x18b98c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B98Cu;
        // 0x18b990: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b98c) {
            ctx->pc = 0x18B9A0u;
            goto label_18b9a0;
        }
    }
    ctx->pc = 0x18B994u;
    // 0x18b994: 0xc0401a4  jal         func_100690
    ctx->pc = 0x18B994u;
    SET_GPR_U32(ctx, 31, 0x18B99Cu);
    ctx->pc = 0x18B998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B994u;
    // 0x18b998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x18B994u, 0x18B99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B99Cu;
label_18b99c:
    // 0x18b99c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18b99cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18b9a0:
    // 0x18b9a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18b9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b9a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b9a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b9a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b9a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x18B9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9ACu;
        // 0x18b9b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B9B4u;
}
