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

// Function: entry_001f66e8
// Address: 0x1f66e8 - 0x1f6744
void entry_001f66e8_0x1f66e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f66e8_0x1f66e8");
#endif

    switch (ctx->pc) {
        case 0x1f6734u: goto label_1f6734;
        default: break;
    }

    ctx->pc = 0x1f66e8u;

label_1f66e8:
    // 0x1f66e8: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x1f66e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f66ec: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x1f66ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1f66f0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f66f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f66f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f66f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f66f8: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x1f66f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1f66fc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1f66fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f6700: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F6700u;
    {
        const bool branch_taken_0x1f6700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6700) {
            ctx->pc = 0x1F66E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f66e8;
        }
    }
    ctx->pc = 0x1F6708u;
    // 0x1f6708: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f6708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f670c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f670cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f6710: 0x24841080  addiu       $a0, $a0, 0x1080
    ctx->pc = 0x1f6710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4224));
    // 0x1f6714: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f6714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6718: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f671c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f671cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6720: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f6720u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f6724: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f6724u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6728: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1f6728u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f672c: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F672Cu;
    SET_GPR_U32(ctx, 31, 0x1F6734u);
    ctx->pc = 0x1F6730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F672Cu;
    // 0x1f6730: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F672Cu, 0x1F6734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6734u;
label_1f6734:
    // 0x1f6734: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6734u;
    {
        const bool branch_taken_0x1f6734 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f6734) {
            ctx->pc = 0x1F6738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6734u;
            // 0x1f6738: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6744u;
            return;
        }
    }
    ctx->pc = 0x1F673Cu;
    // 0x1f673c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F673Cu;
    {
        const bool branch_taken_0x1f673c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F673Cu;
        // 0x1f6740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f673c) {
            ctx->pc = 0x1F6768u;
            return;
        }
    }
    ctx->pc = 0x1F6744u;
}
