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

// Function: FUN_00186550
// Address: 0x186550 - 0x18659c
void FUN_00186550_0x186550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00186550_0x186550");
#endif

    switch (ctx->pc) {
        case 0x186588u: goto label_186588;
        default: break;
    }

    ctx->pc = 0x186550u;

    // 0x186550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x186558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18655c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18655cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186560: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x186560u;
    {
        const bool branch_taken_0x186560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x186564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186560u;
        // 0x186564: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186560) {
            ctx->pc = 0x18658Cu;
            goto label_18658c;
        }
    }
    ctx->pc = 0x186568u;
    // 0x186568: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x186568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x18656c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x18656cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x186570: 0x2463b138  addiu       $v1, $v1, -0x4EC8
    ctx->pc = 0x186570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947128));
    // 0x186574: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x186574u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x186578: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186578u;
    {
        const bool branch_taken_0x186578 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186578u;
        // 0x18657c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186578) {
            ctx->pc = 0x186588u;
            goto label_186588;
        }
    }
    ctx->pc = 0x186580u;
    // 0x186580: 0xc0401a4  jal         func_100690
    ctx->pc = 0x186580u;
    SET_GPR_U32(ctx, 31, 0x186588u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x186580u, 0x186588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186588u;
label_186588:
    // 0x186588: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x186588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18658c:
    // 0x18658c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18658cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186590: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186594: 0x3e00008  jr          $ra
    ctx->pc = 0x186594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186594u;
        // 0x186598: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18659Cu;
}
