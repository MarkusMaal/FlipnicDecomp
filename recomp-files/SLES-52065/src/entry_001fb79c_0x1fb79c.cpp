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

// Function: entry_001fb79c
// Address: 0x1fb79c - 0x1fb7ac
void entry_001fb79c_0x1fb79c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb79c_0x1fb79c");
#endif

    ctx->pc = 0x1fb79cu;

    // 0x1fb79c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FB79Cu;
    {
        const bool branch_taken_0x1fb79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB79Cu;
        // 0x1fb7a0: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb79c) {
            ctx->pc = 0x1FB7D4u;
            return;
        }
    }
    ctx->pc = 0x1FB7A4u;
    // 0x1fb7a4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FB7A4u;
    {
        const bool branch_taken_0x1fb7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7A4u;
        // 0x1fb7a8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7a4) {
            ctx->pc = 0x1FB7E4u;
            return;
        }
    }
    ctx->pc = 0x1FB7ACu;
}
