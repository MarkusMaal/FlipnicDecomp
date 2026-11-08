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

// Function: entry_001b3948
// Address: 0x1b3948 - 0x1b3984
void entry_001b3948_0x1b3948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3948_0x1b3948");
#endif

    switch (ctx->pc) {
        case 0x1b3964u: goto label_1b3964;
        case 0x1b3978u: goto label_1b3978;
        default: break;
    }

    ctx->pc = 0x1b3948u;

    // 0x1b3948: 0xae822780  sw          $v0, 0x2780($s4)
    ctx->pc = 0x1b3948u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 10112), GPR_U32(ctx, 2));
    // 0x1b394c: 0x8e842780  lw          $a0, 0x2780($s4)
    ctx->pc = 0x1b394cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10112)));
    // 0x1b3950: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b3950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b3954: 0x24a50cc0  addiu       $a1, $a1, 0xCC0
    ctx->pc = 0x1b3954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3264));
    // 0x1b3958: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b3958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b395c: 0xc06cfa0  jal         func_1B3E80
    ctx->pc = 0x1B395Cu;
    SET_GPR_U32(ctx, 31, 0x1B3964u);
    ctx->pc = 0x1B3E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3E80u, 0x1B395Cu, 0x1B3964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3964u;
label_1b3964:
    // 0x1b3964: 0x8e842780  lw          $a0, 0x2780($s4)
    ctx->pc = 0x1b3964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10112)));
    // 0x1b3968: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b3968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b396c: 0x24a50cc8  addiu       $a1, $a1, 0xCC8
    ctx->pc = 0x1b396cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3272));
    // 0x1b3970: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1B3970u;
    SET_GPR_U32(ctx, 31, 0x1B3978u);
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1B3970u, 0x1B3978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3978u;
label_1b3978:
    // 0x1b3978: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b397c: 0x6010001  bgez        $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B397Cu;
    {
        const bool branch_taken_0x1b397c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1b397c) {
            ctx->pc = 0x1B3984u;
            return;
        }
    }
    ctx->pc = 0x1B3984u;
}
