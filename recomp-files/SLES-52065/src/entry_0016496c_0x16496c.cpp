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

// Function: entry_0016496c
// Address: 0x16496c - 0x164990
void entry_0016496c_0x16496c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016496c_0x16496c");
#endif

    switch (ctx->pc) {
        case 0x164980u: goto label_164980;
        default: break;
    }

    ctx->pc = 0x16496cu;

    // 0x16496c: 0x862201e8  lh          $v0, 0x1E8($s1)
    ctx->pc = 0x16496cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x164970: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x164970u;
    {
        const bool branch_taken_0x164970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164970) {
            ctx->pc = 0x164994u;
            return;
        }
    }
    ctx->pc = 0x164978u;
    // 0x164978: 0xc058c90  jal         func_163240
    ctx->pc = 0x164978u;
    SET_GPR_U32(ctx, 31, 0x164980u);
    ctx->pc = 0x163240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163240u, 0x164978u, 0x164980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164980u;
label_164980:
    // 0x164980: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164980u;
    {
        const bool branch_taken_0x164980 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x164980) {
            ctx->pc = 0x164990u;
            return;
        }
    }
    ctx->pc = 0x164988u;
    // 0x164988: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x164988u;
    {
        const bool branch_taken_0x164988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164988u;
        // 0x16498c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164988) {
            ctx->pc = 0x164C60u;
            return;
        }
    }
    ctx->pc = 0x164990u;
}
