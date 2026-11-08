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

// Function: entry_001f2714
// Address: 0x1f2714 - 0x1f2758
void entry_001f2714_0x1f2714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2714_0x1f2714");
#endif

    switch (ctx->pc) {
        case 0x1f274cu: goto label_1f274c;
        default: break;
    }

    ctx->pc = 0x1f2714u;

    // 0x1f2714: 0x3c070039  lui         $a3, 0x39
    ctx->pc = 0x1f2714u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57 << 16));
    // 0x1f2718: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f2718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f271c: 0xace5fa40  sw          $a1, -0x5C0($a3)
    ctx->pc = 0x1f271cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x38FA40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38FA40u, _value); } while (0);
    // 0x1f2720: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f2720u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f2724: 0x2484f9c0  addiu       $a0, $a0, -0x640
    ctx->pc = 0x1f2724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965696));
    // 0x1f2728: 0x24e7fa40  addiu       $a3, $a3, -0x5C0
    ctx->pc = 0x1f2728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965824));
    // 0x1f272c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f272cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f2730: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f2730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f2734: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2738: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f2738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f273c: 0x2609fa00  addiu       $t1, $s0, -0x600
    ctx->pc = 0x1f273cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965760));
    // 0x1f2740: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f2740u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2744: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F2744u;
    SET_GPR_U32(ctx, 31, 0x1F274Cu);
    ctx->pc = 0x1F2748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2744u;
    // 0x1f2748: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F2744u, 0x1F274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F274Cu;
label_1f274c:
    // 0x1f274c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F274Cu;
    {
        const bool branch_taken_0x1f274c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F2750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F274Cu;
        // 0x1f2750: 0x8e02fa00  lw          $v0, -0x600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f274c) {
            ctx->pc = 0x1F2758u;
            return;
        }
    }
    ctx->pc = 0x1F2754u;
    // 0x1f2754: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f2754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1f2758u;
}
