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

// Function: entry_0013bc68
// Address: 0x13bc68 - 0x13bc8c
void entry_0013bc68_0x13bc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bc68_0x13bc68");
#endif

    switch (ctx->pc) {
        case 0x13bc80u: goto label_13bc80;
        default: break;
    }

    ctx->pc = 0x13bc68u;

    // 0x13bc68: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x13bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13bc6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13bc70: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x13bc70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x13bc74: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x13bc74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13bc78: 0xc048dec  jal         func_1237B0
    ctx->pc = 0x13BC78u;
    SET_GPR_U32(ctx, 31, 0x13BC80u);
    ctx->pc = 0x13BC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BC78u;
    // 0x13bc7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237B0u, 0x13BC78u, 0x13BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BC80u;
label_13bc80:
    // 0x13bc80: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x13BC80u;
    {
        const bool branch_taken_0x13bc80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BC80u;
        // 0x13bc84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bc80) {
            ctx->pc = 0x13BC8Cu;
            return;
        }
    }
    ctx->pc = 0x13BC88u;
    // 0x13bc88: 0xaeb00008  sw          $s0, 0x8($s5)
    ctx->pc = 0x13bc88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 16));
    ctx->pc = 0x13bc8cu;
}
