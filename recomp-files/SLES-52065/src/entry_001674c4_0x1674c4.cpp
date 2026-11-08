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

// Function: entry_001674c4
// Address: 0x1674c4 - 0x1674e8
void entry_001674c4_0x1674c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001674c4_0x1674c4");
#endif

    switch (ctx->pc) {
        case 0x1674e0u: goto label_1674e0;
        default: break;
    }

    ctx->pc = 0x1674c4u;

    // 0x1674c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1674C4u;
    {
        const bool branch_taken_0x1674c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1674c4) {
            ctx->pc = 0x1674E8u;
            return;
        }
    }
    ctx->pc = 0x1674CCu;
    // 0x1674cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1674ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1674d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1674d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1674d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1674d8: 0xc0425a4  jal         func_109690
    ctx->pc = 0x1674D8u;
    SET_GPR_U32(ctx, 31, 0x1674E0u);
    ctx->pc = 0x1674DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1674D8u;
    // 0x1674dc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x1674D8u, 0x1674E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1674E0u;
label_1674e0:
    // 0x1674e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1674E0u;
    {
        const bool branch_taken_0x1674e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1674E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674E0u;
        // 0x1674e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674e0) {
            ctx->pc = 0x16750Cu;
            return;
        }
    }
    ctx->pc = 0x1674E8u;
}
