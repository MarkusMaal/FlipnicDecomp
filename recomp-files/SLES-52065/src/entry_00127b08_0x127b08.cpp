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

// Function: entry_00127b08
// Address: 0x127b08 - 0x127b28
void entry_00127b08_0x127b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127b08_0x127b08");
#endif

    switch (ctx->pc) {
        case 0x127b24u: goto label_127b24;
        default: break;
    }

    ctx->pc = 0x127b08u;

label_127b08:
    // 0x127b08: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x127b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_127b0c:
    // 0x127b0c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_127b10:
    if (ctx->pc == 0x127B10u) {
        ctx->pc = 0x127B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B0Cu;
        // 0x127b10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127B14u;
        goto label_127b14;
    }
    ctx->pc = 0x127B0Cu;
    {
        const bool branch_taken_0x127b0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B0Cu;
        // 0x127b10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b0c) {
            ctx->pc = 0x127B28u;
            return;
        }
    }
    ctx->pc = 0x127B14u;
label_127b14:
    // 0x127b14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127b14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127b18:
    // 0x127b18: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x127b18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_127b1c:
    // 0x127b1c: 0x320f809  jalr        $t9
label_127b20:
    if (ctx->pc == 0x127B20u) {
        ctx->pc = 0x127B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B1Cu;
        // 0x127b20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127B24u;
        goto label_127b24;
    }
    ctx->pc = 0x127B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127B24u);
        ctx->pc = 0x127B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B1Cu;
        // 0x127b20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127B1Cu, 0x127B24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127B24u;
label_127b24:
    // 0x127b24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x127b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x127b28u;
}
