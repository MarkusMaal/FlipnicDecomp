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

// Function: entry_001507dc
// Address: 0x1507dc - 0x15082c
void entry_001507dc_0x1507dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001507dc_0x1507dc");
#endif

    switch (ctx->pc) {
        case 0x15080cu: goto label_15080c;
        default: break;
    }

    ctx->pc = 0x1507dcu;

    // 0x1507dc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1507dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1507e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1507e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1507e4: 0x14510018  bne         $v0, $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1507E4u;
    {
        const bool branch_taken_0x1507e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1507e4) {
            ctx->pc = 0x150848u;
            return;
        }
    }
    ctx->pc = 0x1507ECu;
    // 0x1507ec: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x1507ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x1507f0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1507f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1507f4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1507f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1507f8: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1507f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1507fc: 0x24a57430  addiu       $a1, $a1, 0x7430
    ctx->pc = 0x1507fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29744));
    // 0x150800: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x150800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x150804: 0xc04c91c  jal         func_132470
    ctx->pc = 0x150804u;
    SET_GPR_U32(ctx, 31, 0x15080Cu);
    ctx->pc = 0x150808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150804u;
    // 0x150808: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132470u, 0x150804u, 0x15080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15080Cu;
label_15080c:
    // 0x15080c: 0x8f8285e4  lw          $v0, -0x7A1C($gp)
    ctx->pc = 0x15080cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936036)));
    // 0x150810: 0x1451001b  bne         $v0, $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x150810u;
    {
        const bool branch_taken_0x150810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x150814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150810u;
        // 0x150814: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150810) {
            ctx->pc = 0x150880u;
            return;
        }
    }
    ctx->pc = 0x150818u;
    // 0x150818: 0x8c227430  lw          $v0, 0x7430($at)
    ctx->pc = 0x150818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29744)));
    // 0x15081c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15081Cu;
    {
        const bool branch_taken_0x15081c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15081c) {
            ctx->pc = 0x15082Cu;
            return;
        }
    }
    ctx->pc = 0x150824u;
    // 0x150824: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x150824u;
    {
        const bool branch_taken_0x150824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150824u;
        // 0x150828: 0xaf8085e4  sw          $zero, -0x7A1C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936036), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150824) {
            ctx->pc = 0x150880u;
            return;
        }
    }
    ctx->pc = 0x15082Cu;
}
