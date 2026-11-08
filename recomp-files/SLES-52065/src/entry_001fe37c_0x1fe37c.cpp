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

// Function: entry_001fe37c
// Address: 0x1fe37c - 0x1fe394
void entry_001fe37c_0x1fe37c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe37c_0x1fe37c");
#endif

    switch (ctx->pc) {
        case 0x1fe384u: goto label_1fe384;
        default: break;
    }

    ctx->pc = 0x1fe37cu;

    // 0x1fe37c: 0xc08180c  jal         func_206030
    ctx->pc = 0x1FE37Cu;
    SET_GPR_U32(ctx, 31, 0x1FE384u);
    ctx->pc = 0x1FE380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE37Cu;
    // 0x1fe380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206030u, 0x1FE37Cu, 0x1FE384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE384u;
label_1fe384:
    // 0x1fe384: 0x144000d3  bnez        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x1FE384u;
    {
        const bool branch_taken_0x1fe384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE384u;
        // 0x1fe388: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe384) {
            ctx->pc = 0x1FE6D4u;
            return;
        }
    }
    ctx->pc = 0x1FE38Cu;
    // 0x1fe38c: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1fe38cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1fe390: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x1fe390u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->pc = 0x1fe394u;
}
