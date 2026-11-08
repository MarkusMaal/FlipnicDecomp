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

// Function: entry_00162ac4
// Address: 0x162ac4 - 0x162ae4
void entry_00162ac4_0x162ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162ac4_0x162ac4");
#endif

    switch (ctx->pc) {
        case 0x162adcu: goto label_162adc;
        default: break;
    }

    ctx->pc = 0x162ac4u;

    // 0x162ac4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x162ac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x162ac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162acc: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x162accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x162ad0: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x162ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x162ad4: 0xc055b84  jal         func_156E10
    ctx->pc = 0x162AD4u;
    SET_GPR_U32(ctx, 31, 0x162ADCu);
    ctx->pc = 0x162AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162AD4u;
    // 0x162ad8: 0x27a70230  addiu       $a3, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156E10u, 0x162AD4u, 0x162ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162ADCu;
label_162adc:
    // 0x162adc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x162ADCu;
    {
        const bool branch_taken_0x162adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162adc) {
            ctx->pc = 0x162B50u;
            return;
        }
    }
    ctx->pc = 0x162AE4u;
}
