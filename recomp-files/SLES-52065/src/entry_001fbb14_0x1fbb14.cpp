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

// Function: entry_001fbb14
// Address: 0x1fbb14 - 0x1fbb24
void entry_001fbb14_0x1fbb14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbb14_0x1fbb14");
#endif

    ctx->pc = 0x1fbb14u;

    // 0x1fbb14: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FBB14u;
    {
        const bool branch_taken_0x1fbb14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FBB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB14u;
        // 0x1fbb18: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb14) {
            ctx->pc = 0x1FBB4Cu;
            return;
        }
    }
    ctx->pc = 0x1FBB1Cu;
    // 0x1fbb1c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FBB1Cu;
    {
        const bool branch_taken_0x1fbb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbb1c) {
            ctx->pc = 0x1FBB60u;
            return;
        }
    }
    ctx->pc = 0x1FBB24u;
}
