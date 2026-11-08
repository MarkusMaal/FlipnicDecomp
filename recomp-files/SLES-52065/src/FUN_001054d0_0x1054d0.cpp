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

// Function: FUN_001054d0
// Address: 0x1054d0 - 0x105530
void FUN_001054d0_0x1054d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001054d0_0x1054d0");
#endif

    switch (ctx->pc) {
        case 0x10551cu: goto label_10551c;
        default: break;
    }

    ctx->pc = 0x1054d0u;

    // 0x1054d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1054d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1054d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1054d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1054d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1054d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1054dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1054dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1054e0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1054E0u;
    {
        const bool branch_taken_0x1054e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054E0u;
        // 0x1054e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054e0) {
            ctx->pc = 0x105520u;
            goto label_105520;
        }
    }
    ctx->pc = 0x1054E8u;
    // 0x1054e8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1054e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1054ec: 0x2442ae20  addiu       $v0, $v0, -0x51E0
    ctx->pc = 0x1054ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946336));
    // 0x1054f0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1054F0u;
    {
        const bool branch_taken_0x1054f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054F0u;
        // 0x1054f4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054f0) {
            ctx->pc = 0x105504u;
            goto label_105504;
        }
    }
    ctx->pc = 0x1054F8u;
    // 0x1054f8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1054f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1054fc: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x1054fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x105500: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_105504:
    // 0x105504: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x105504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x105508: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105508u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10550c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10550Cu;
    {
        const bool branch_taken_0x10550c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10550Cu;
        // 0x105510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10550c) {
            ctx->pc = 0x10551Cu;
            goto label_10551c;
        }
    }
    ctx->pc = 0x105514u;
    // 0x105514: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105514u;
    SET_GPR_U32(ctx, 31, 0x10551Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105514u, 0x10551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10551Cu;
label_10551c:
    // 0x10551c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10551cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105520:
    // 0x105520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x105524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105528: 0x3e00008  jr          $ra
    ctx->pc = 0x105528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105528u;
        // 0x10552c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105530u;
}
