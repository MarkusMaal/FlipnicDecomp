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

// Function: FUN_001419a0
// Address: 0x1419a0 - 0x141a24
void FUN_001419a0_0x1419a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001419a0_0x1419a0");
#endif

    switch (ctx->pc) {
        case 0x1419d8u: goto label_1419d8;
        case 0x1419f4u: goto label_1419f4;
        case 0x141a0cu: goto label_141a0c;
        default: break;
    }

    ctx->pc = 0x1419a0u;

    // 0x1419a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1419a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1419a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1419a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1419a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1419a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1419ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1419acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1419b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1419b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1419b4: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1419B4u;
    {
        const bool branch_taken_0x1419b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1419B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1419B4u;
        // 0x1419b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1419b4) {
            ctx->pc = 0x141A0Cu;
            goto label_141a0c;
        }
    }
    ctx->pc = 0x1419BCu;
    // 0x1419bc: 0x2624002c  addiu       $a0, $s1, 0x2C
    ctx->pc = 0x1419bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x1419c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1419C0u;
    {
        const bool branch_taken_0x1419c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1419c0) {
            ctx->pc = 0x1419D8u;
            goto label_1419d8;
        }
    }
    ctx->pc = 0x1419C8u;
    // 0x1419c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1419C8u;
    {
        const bool branch_taken_0x1419c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1419CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1419C8u;
        // 0x1419cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1419c8) {
            ctx->pc = 0x1419D8u;
            goto label_1419d8;
        }
    }
    ctx->pc = 0x1419D0u;
    // 0x1419d0: 0xc050ea8  jal         func_143AA0
    ctx->pc = 0x1419D0u;
    SET_GPR_U32(ctx, 31, 0x1419D8u);
    ctx->pc = 0x143AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143AA0u, 0x1419D0u, 0x1419D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1419D8u;
label_1419d8:
    // 0x1419d8: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x1419d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1419dc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1419DCu;
    {
        const bool branch_taken_0x1419dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1419E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1419DCu;
        // 0x1419e0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1419dc) {
            ctx->pc = 0x1419F8u;
            goto label_1419f8;
        }
    }
    ctx->pc = 0x1419E4u;
    // 0x1419e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1419E4u;
    {
        const bool branch_taken_0x1419e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1419E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1419E4u;
        // 0x1419e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1419e4) {
            ctx->pc = 0x1419F4u;
            goto label_1419f4;
        }
    }
    ctx->pc = 0x1419ECu;
    // 0x1419ec: 0xc04d95c  jal         func_136570
    ctx->pc = 0x1419ECu;
    SET_GPR_U32(ctx, 31, 0x1419F4u);
    ctx->pc = 0x136570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136570u, 0x1419ECu, 0x1419F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1419F4u;
label_1419f4:
    // 0x1419f4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1419f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1419f8:
    // 0x1419f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1419f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1419fc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1419FCu;
    {
        const bool branch_taken_0x1419fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x141A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1419FCu;
        // 0x141a00: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1419fc) {
            ctx->pc = 0x141A10u;
            goto label_141a10;
        }
    }
    ctx->pc = 0x141A04u;
    // 0x141a04: 0xc0401a4  jal         func_100690
    ctx->pc = 0x141A04u;
    SET_GPR_U32(ctx, 31, 0x141A0Cu);
    ctx->pc = 0x141A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141A04u;
    // 0x141a08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x141A04u, 0x141A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A0Cu;
label_141a0c:
    // 0x141a0c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x141a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_141a10:
    // 0x141a10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x141a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x141A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141A1Cu;
        // 0x141a20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141A24u;
}
