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

// Function: entry_001a46ec
// Address: 0x1a46ec - 0x1a4738
void entry_001a46ec_0x1a46ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a46ec_0x1a46ec");
#endif

    switch (ctx->pc) {
        case 0x1a4718u: goto label_1a4718;
        default: break;
    }

    ctx->pc = 0x1a46ecu;

    // 0x1a46ec: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x1a46ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a46f0: 0x8cc2093c  lw          $v0, 0x93C($a2)
    ctx->pc = 0x1a46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2364)));
    // 0x1a46f4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A46F4u;
    {
        const bool branch_taken_0x1a46f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a46f4) {
            ctx->pc = 0x1A4768u;
            return;
        }
    }
    ctx->pc = 0x1A46FCu;
    // 0x1a46fc: 0x8cc4097c  lw          $a0, 0x97C($a2)
    ctx->pc = 0x1a46fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2428)));
    // 0x1a4700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4704: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1a4704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1a4708: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A4708u;
    {
        const bool branch_taken_0x1a4708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4708u;
        // 0x1a470c: 0x24d2097c  addiu       $s2, $a2, 0x97C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 2428));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4708) {
            ctx->pc = 0x1A4748u;
            return;
        }
    }
    ctx->pc = 0x1A4710u;
    // 0x1a4710: 0xc04ae90  jal         func_12BA40
    ctx->pc = 0x1A4710u;
    SET_GPR_U32(ctx, 31, 0x1A4718u);
    ctx->pc = 0x1A4714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4710u;
    // 0x1a4714: 0x8e240690  lw          $a0, 0x690($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA40u, 0x1A4710u, 0x1A4718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4718u;
label_1a4718:
    // 0x1a4718: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4718u;
    {
        const bool branch_taken_0x1a4718 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a4718) {
            ctx->pc = 0x1A4738u;
            return;
        }
    }
    ctx->pc = 0x1A4720u;
    // 0x1a4720: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a4720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a4724: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1a4724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a4728: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1a4728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1a472c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a472cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a4730: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A4730u;
    {
        const bool branch_taken_0x1a4730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4730u;
        // 0x1a4734: 0xae220320  sw          $v0, 0x320($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4730) {
            ctx->pc = 0x1A4794u;
            return;
        }
    }
    ctx->pc = 0x1A4738u;
}
