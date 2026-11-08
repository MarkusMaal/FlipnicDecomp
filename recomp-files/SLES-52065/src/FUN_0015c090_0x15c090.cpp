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

// Function: FUN_0015c090
// Address: 0x15c090 - 0x15c100
void FUN_0015c090_0x15c090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015c090_0x15c090");
#endif

    switch (ctx->pc) {
        case 0x15c0d0u: goto label_15c0d0;
        case 0x15c0e8u: goto label_15c0e8;
        default: break;
    }

    ctx->pc = 0x15c090u;

    // 0x15c090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15c090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15c094: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15c094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15c098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15c09c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c0a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15c0a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c0a4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x15C0A4u;
    {
        const bool branch_taken_0x15c0a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0A4u;
        // 0x15c0a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c0a4) {
            ctx->pc = 0x15C0E8u;
            goto label_15c0e8;
        }
    }
    ctx->pc = 0x15C0ACu;
    // 0x15c0ac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x15c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x15c0b0: 0x244299b0  addiu       $v0, $v0, -0x6650
    ctx->pc = 0x15c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941104));
    // 0x15c0b4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C0B4u;
    {
        const bool branch_taken_0x15c0b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0B4u;
        // 0x15c0b8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c0b4) {
            ctx->pc = 0x15C0D0u;
            goto label_15c0d0;
        }
    }
    ctx->pc = 0x15C0BCu;
    // 0x15c0bc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x15c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x15c0c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c0c4: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x15c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x15c0c8: 0xc0418a0  jal         func_106280
    ctx->pc = 0x15C0C8u;
    SET_GPR_U32(ctx, 31, 0x15C0D0u);
    ctx->pc = 0x15C0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C0C8u;
    // 0x15c0cc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106280u, 0x15C0C8u, 0x15C0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C0D0u;
label_15c0d0:
    // 0x15c0d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x15c0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x15c0d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15c0d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15c0d8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C0D8u;
    {
        const bool branch_taken_0x15c0d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0D8u;
        // 0x15c0dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c0d8) {
            ctx->pc = 0x15C0ECu;
            goto label_15c0ec;
        }
    }
    ctx->pc = 0x15C0E0u;
    // 0x15c0e0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x15C0E0u;
    SET_GPR_U32(ctx, 31, 0x15C0E8u);
    ctx->pc = 0x15C0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C0E0u;
    // 0x15c0e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x15C0E0u, 0x15C0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C0E8u;
label_15c0e8:
    // 0x15c0e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15c0e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c0ec:
    // 0x15c0ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15c0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c0f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c0f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c0f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c0f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x15C0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0F8u;
        // 0x15c0fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C100u;
}
