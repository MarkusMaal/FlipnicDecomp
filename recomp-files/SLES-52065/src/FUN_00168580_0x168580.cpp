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

// Function: FUN_00168580
// Address: 0x168580 - 0x168600
void FUN_00168580_0x168580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00168580_0x168580");
#endif

    switch (ctx->pc) {
        case 0x1685ecu: goto label_1685ec;
        default: break;
    }

    ctx->pc = 0x168580u;

    // 0x168580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x168588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16858c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16858cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168590: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x168590u;
    {
        const bool branch_taken_0x168590 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x168594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168590u;
        // 0x168594: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168590) {
            ctx->pc = 0x1685F0u;
            goto label_1685f0;
        }
    }
    ctx->pc = 0x168598u;
    // 0x168598: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x168598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x16859c: 0x2442a1f0  addiu       $v0, $v0, -0x5E10
    ctx->pc = 0x16859cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943216));
    // 0x1685a0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1685A0u;
    {
        const bool branch_taken_0x1685a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685A0u;
        // 0x1685a4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685a0) {
            ctx->pc = 0x1685D4u;
            goto label_1685d4;
        }
    }
    ctx->pc = 0x1685A8u;
    // 0x1685a8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1685a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1685ac: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x1685acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x1685b0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1685B0u;
    {
        const bool branch_taken_0x1685b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685B0u;
        // 0x1685b4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685b0) {
            ctx->pc = 0x1685D4u;
            goto label_1685d4;
        }
    }
    ctx->pc = 0x1685B8u;
    // 0x1685b8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1685b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1685bc: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1685bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x1685c0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1685C0u;
    {
        const bool branch_taken_0x1685c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685C0u;
        // 0x1685c4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685c0) {
            ctx->pc = 0x1685D4u;
            goto label_1685d4;
        }
    }
    ctx->pc = 0x1685C8u;
    // 0x1685c8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1685c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1685cc: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x1685ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x1685d0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1685d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1685d4:
    // 0x1685d4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1685d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1685d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1685d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1685dc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1685DCu;
    {
        const bool branch_taken_0x1685dc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1685E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685DCu;
        // 0x1685e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685dc) {
            ctx->pc = 0x1685ECu;
            goto label_1685ec;
        }
    }
    ctx->pc = 0x1685E4u;
    // 0x1685e4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1685E4u;
    SET_GPR_U32(ctx, 31, 0x1685ECu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1685E4u, 0x1685ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1685ECu;
label_1685ec:
    // 0x1685ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1685ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1685f0:
    // 0x1685f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1685f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1685f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1685f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1685f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1685F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1685FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685F8u;
        // 0x1685fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1685F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168600u;
}
