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

// Function: entry_001e5b14
// Address: 0x1e5b14 - 0x1e5b40
void entry_001e5b14_0x1e5b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5b14_0x1e5b14");
#endif

    switch (ctx->pc) {
        case 0x1e5b2cu: goto label_1e5b2c;
        default: break;
    }

    ctx->pc = 0x1e5b14u;

    // 0x1e5b14: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e5b14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e5b18: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x1e5b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1e5b1c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e5b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e5b20: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x1e5b20u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5b24: 0xc080dea  jal         func_2037A8
    ctx->pc = 0x1E5B24u;
    SET_GPR_U32(ctx, 31, 0x1E5B2Cu);
    ctx->pc = 0x1E5B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5B24u;
    // 0x1e5b28: 0x8e850024  lw          $a1, 0x24($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x1E5B24u, 0x1E5B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5B2Cu;
label_1e5b2c:
    // 0x1e5b2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e5b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5b30: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5B30u;
    {
        const bool branch_taken_0x1e5b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e5b30) {
            ctx->pc = 0x1E5B40u;
            return;
        }
    }
    ctx->pc = 0x1E5B38u;
    // 0x1e5b38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5B38u;
    {
        const bool branch_taken_0x1e5b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B38u;
        // 0x1e5b3c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b38) {
            ctx->pc = 0x1E5B50u;
            return;
        }
    }
    ctx->pc = 0x1E5B40u;
}
