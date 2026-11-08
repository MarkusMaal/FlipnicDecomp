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

// Function: entry_0013c528
// Address: 0x13c528 - 0x13c548
void entry_0013c528_0x13c528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c528_0x13c528");
#endif

    switch (ctx->pc) {
        case 0x13c534u: goto label_13c534;
        default: break;
    }

    ctx->pc = 0x13c528u;

    // 0x13c528: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13c528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13c52c: 0xc080874  jal         func_2021D0
    ctx->pc = 0x13C52Cu;
    SET_GPR_U32(ctx, 31, 0x13C534u);
    ctx->pc = 0x13C530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C52Cu;
    // 0x13c530: 0x24a5efe8  addiu       $a1, $a1, -0x1018 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x13C52Cu, 0x13C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C534u;
label_13c534:
    // 0x13c534: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C534u;
    {
        const bool branch_taken_0x13c534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C534u;
        // 0x13c538: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c534) {
            ctx->pc = 0x13C548u;
            return;
        }
    }
    ctx->pc = 0x13C53Cu;
    // 0x13c53c: 0x82620189  lb          $v0, 0x189($s3)
    ctx->pc = 0x13c53cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 393)));
    // 0x13c540: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x13c540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13c544: 0xa2620189  sb          $v0, 0x189($s3)
    ctx->pc = 0x13c544u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 393), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x13c548u;
}
