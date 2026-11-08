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

// Function: FUN_001bba00
// Address: 0x1bba00 - 0x1bba54
void FUN_001bba00_0x1bba00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bba00_0x1bba00");
#endif

    switch (ctx->pc) {
        case 0x1bba24u: goto label_1bba24;
        case 0x1bba3cu: goto label_1bba3c;
        default: break;
    }

    ctx->pc = 0x1bba00u;

    // 0x1bba00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bba00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bba04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bba04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bba08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bba08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bba0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bba0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bba10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bba10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bba14: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BBA14u;
    {
        const bool branch_taken_0x1bba14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA14u;
        // 0x1bba18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba14) {
            ctx->pc = 0x1BBA3Cu;
            goto label_1bba3c;
        }
    }
    ctx->pc = 0x1BBA1Cu;
    // 0x1bba1c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BBA1Cu;
    SET_GPR_U32(ctx, 31, 0x1BBA24u);
    ctx->pc = 0x1BBA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBA1Cu;
    // 0x1bba20: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BBA1Cu, 0x1BBA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBA24u;
label_1bba24:
    // 0x1bba24: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1bba24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1bba28: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1bba28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1bba2c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BBA2Cu;
    {
        const bool branch_taken_0x1bba2c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BBA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA2Cu;
        // 0x1bba30: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba2c) {
            ctx->pc = 0x1BBA40u;
            goto label_1bba40;
        }
    }
    ctx->pc = 0x1BBA34u;
    // 0x1bba34: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BBA34u;
    SET_GPR_U32(ctx, 31, 0x1BBA3Cu);
    ctx->pc = 0x1BBA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBA34u;
    // 0x1bba38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BBA34u, 0x1BBA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBA3Cu;
label_1bba3c:
    // 0x1bba3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1bba3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bba40:
    // 0x1bba40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bba40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bba44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bba44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bba48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bba48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bba4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA4Cu;
        // 0x1bba50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBA54u;
}
