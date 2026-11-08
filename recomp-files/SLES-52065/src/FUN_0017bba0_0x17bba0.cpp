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

// Function: FUN_0017bba0
// Address: 0x17bba0 - 0x17bc10
void FUN_0017bba0_0x17bba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017bba0_0x17bba0");
#endif

    switch (ctx->pc) {
        case 0x17bbfcu: goto label_17bbfc;
        default: break;
    }

    ctx->pc = 0x17bba0u;

    // 0x17bba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17bba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17bba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17bba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17bba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17bbac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17bbacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bbb0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x17BBB0u;
    {
        const bool branch_taken_0x17bbb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBB0u;
        // 0x17bbb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bbb0) {
            ctx->pc = 0x17BC00u;
            goto label_17bc00;
        }
    }
    ctx->pc = 0x17BBB8u;
    // 0x17bbb8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17bbbc: 0x2442ad60  addiu       $v0, $v0, -0x52A0
    ctx->pc = 0x17bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946144));
    // 0x17bbc0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17BBC0u;
    {
        const bool branch_taken_0x17bbc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBC0u;
        // 0x17bbc4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bbc0) {
            ctx->pc = 0x17BBE4u;
            goto label_17bbe4;
        }
    }
    ctx->pc = 0x17BBC8u;
    // 0x17bbc8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17bbcc: 0x2442ae20  addiu       $v0, $v0, -0x51E0
    ctx->pc = 0x17bbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946336));
    // 0x17bbd0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BBD0u;
    {
        const bool branch_taken_0x17bbd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBD0u;
        // 0x17bbd4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bbd0) {
            ctx->pc = 0x17BBE4u;
            goto label_17bbe4;
        }
    }
    ctx->pc = 0x17BBD8u;
    // 0x17bbd8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17bbdc: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x17bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x17bbe0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x17bbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_17bbe4:
    // 0x17bbe4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x17bbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x17bbe8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17bbe8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17bbec: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BBECu;
    {
        const bool branch_taken_0x17bbec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBECu;
        // 0x17bbf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bbec) {
            ctx->pc = 0x17BBFCu;
            goto label_17bbfc;
        }
    }
    ctx->pc = 0x17BBF4u;
    // 0x17bbf4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17BBF4u;
    SET_GPR_U32(ctx, 31, 0x17BBFCu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17BBF4u, 0x17BBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BBFCu;
label_17bbfc:
    // 0x17bbfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17bbfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17bc00:
    // 0x17bc00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17bc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bc04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17bc04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bc08: 0x3e00008  jr          $ra
    ctx->pc = 0x17BC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC08u;
        // 0x17bc0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BC10u;
}
