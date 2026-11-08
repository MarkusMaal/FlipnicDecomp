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

// Function: FUN_001d1540
// Address: 0x1d1540 - 0x1d15a0
void FUN_001d1540_0x1d1540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d1540_0x1d1540");
#endif

    switch (ctx->pc) {
        case 0x1d1570u: goto label_1d1570;
        case 0x1d1588u: goto label_1d1588;
        default: break;
    }

    ctx->pc = 0x1d1540u;

    // 0x1d1540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d1544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d1544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d1548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d154c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d154cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d1550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1554: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1D1554u;
    {
        const bool branch_taken_0x1d1554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1554u;
        // 0x1d1558: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1554) {
            ctx->pc = 0x1D1588u;
            goto label_1d1588;
        }
    }
    ctx->pc = 0x1D155Cu;
    // 0x1d155c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1d155cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1d1560: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1564: 0x2442c040  addiu       $v0, $v0, -0x3FC0
    ctx->pc = 0x1d1564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950976));
    // 0x1d1568: 0xc06dc54  jal         func_1B7150
    ctx->pc = 0x1D1568u;
    SET_GPR_U32(ctx, 31, 0x1D1570u);
    ctx->pc = 0x1D156Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1568u;
    // 0x1d156c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7150u, 0x1D1568u, 0x1D1570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1570u;
label_1d1570:
    // 0x1d1570: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1d1570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1d1574: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d1574u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d1578: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1578u;
    {
        const bool branch_taken_0x1d1578 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1578u;
        // 0x1d157c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1578) {
            ctx->pc = 0x1D158Cu;
            goto label_1d158c;
        }
    }
    ctx->pc = 0x1D1580u;
    // 0x1d1580: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1D1580u;
    SET_GPR_U32(ctx, 31, 0x1D1588u);
    ctx->pc = 0x1D1584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1580u;
    // 0x1d1584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1D1580u, 0x1D1588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1588u;
label_1d1588:
    // 0x1d1588: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d1588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d158c:
    // 0x1d158c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d158cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1590: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1594: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1598: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1598u;
        // 0x1d159c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D15A0u;
}
