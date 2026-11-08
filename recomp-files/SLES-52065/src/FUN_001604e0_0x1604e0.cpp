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

// Function: FUN_001604e0
// Address: 0x1604e0 - 0x160550
void FUN_001604e0_0x1604e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001604e0_0x1604e0");
#endif

    switch (ctx->pc) {
        case 0x160510u: goto label_160510;
        case 0x160538u: goto label_160538;
        default: break;
    }

    ctx->pc = 0x1604e0u;

    // 0x1604e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1604e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1604e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1604e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1604e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1604e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1604ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1604ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1604f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1604f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1604f4: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1604F4u;
    {
        const bool branch_taken_0x1604f4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1604F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604F4u;
        // 0x1604f8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604f4) {
            ctx->pc = 0x160504u;
            goto label_160504;
        }
    }
    ctx->pc = 0x1604FCu;
    // 0x1604fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1604FCu;
    {
        const bool branch_taken_0x1604fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604FCu;
        // 0x160500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604fc) {
            ctx->pc = 0x160518u;
            goto label_160518;
        }
    }
    ctx->pc = 0x160504u;
label_160504:
    // 0x160504: 0xc4ad0008  lwc1        $f13, 0x8($a1)
    ctx->pc = 0x160504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x160508: 0xc05835c  jal         func_160D70
    ctx->pc = 0x160508u;
    SET_GPR_U32(ctx, 31, 0x160510u);
    ctx->pc = 0x16050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160508u;
    // 0x16050c: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x160D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D70u, 0x160508u, 0x160510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160510u;
label_160510:
    // 0x160510: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x160510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160514: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x160514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160518:
    // 0x160518: 0x4c00002  bltz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x160518u;
    {
        const bool branch_taken_0x160518 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x160518) {
            ctx->pc = 0x160524u;
            goto label_160524;
        }
    }
    ctx->pc = 0x160520u;
    // 0x160520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160524:
    // 0x160524: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x160524u;
    {
        const bool branch_taken_0x160524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160524u;
        // 0x160528: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160524) {
            ctx->pc = 0x160538u;
            goto label_160538;
        }
    }
    ctx->pc = 0x16052Cu;
    // 0x16052c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16052cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160530: 0xc0583f0  jal         func_160FC0
    ctx->pc = 0x160530u;
    SET_GPR_U32(ctx, 31, 0x160538u);
    ctx->pc = 0x160534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160530u;
    // 0x160534: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160FC0u, 0x160530u, 0x160538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160538u;
label_160538:
    // 0x160538: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x160538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16053c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16053cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160540: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160548: 0x3e00008  jr          $ra
    ctx->pc = 0x160548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160548u;
        // 0x16054c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160550u;
}
