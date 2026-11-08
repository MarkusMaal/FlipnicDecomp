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

// Function: entry_0016af64
// Address: 0x16af64 - 0x16af8c
void entry_0016af64_0x16af64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016af64_0x16af64");
#endif

    switch (ctx->pc) {
        case 0x16af84u: goto label_16af84;
        default: break;
    }

    ctx->pc = 0x16af64u;

    // 0x16af64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16af64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16af68: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x16af68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16af6c: 0x8066006c  lb          $a2, 0x6C($v1)
    ctx->pc = 0x16af6cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x16af70: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16AF70u;
    {
        const bool branch_taken_0x16af70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x16af70) {
            ctx->pc = 0x16AF8Cu;
            return;
        }
    }
    ctx->pc = 0x16AF78u;
    // 0x16af78: 0x24840220  addiu       $a0, $a0, 0x220
    ctx->pc = 0x16af78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
    // 0x16af7c: 0xc05a924  jal         func_16A490
    ctx->pc = 0x16AF7Cu;
    SET_GPR_U32(ctx, 31, 0x16AF84u);
    ctx->pc = 0x16AF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AF7Cu;
    // 0x16af80: 0x24a50078  addiu       $a1, $a1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A490u, 0x16AF7Cu, 0x16AF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AF84u;
label_16af84:
    // 0x16af84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16AF84u;
    {
        const bool branch_taken_0x16af84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF84u;
        // 0x16af88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af84) {
            ctx->pc = 0x16AF98u;
            return;
        }
    }
    ctx->pc = 0x16AF8Cu;
}
