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

// Function: entry_00170aec
// Address: 0x170aec - 0x170afc
void entry_00170aec_0x170aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170aec_0x170aec");
#endif

    ctx->pc = 0x170aecu;

    // 0x170aec: 0xe4217500  swc1        $f1, 0x7500($at)
    ctx->pc = 0x170aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 29952), bits); }
    // 0x170af0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x170af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x170af4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x170AF4u;
    {
        const bool branch_taken_0x170af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170AF4u;
        // 0x170af8: 0xac207508  sw          $zero, 0x7508($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170af4) {
            ctx->pc = 0x170B10u;
            return;
        }
    }
    ctx->pc = 0x170AFCu;
}
