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

// Function: entry_001ede0c
// Address: 0x1ede0c - 0x1ede5c
void entry_001ede0c_0x1ede0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ede0c_0x1ede0c");
#endif

    ctx->pc = 0x1ede0cu;

label_1ede0c:
    // 0x1ede0c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x1ede0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1ede10: 0xf  sync
    ctx->pc = 0x1ede10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ede14: 0xbd180000  cache       0x18, 0x0($t0)
    ctx->pc = 0x1ede14u;
    // CACHE instruction (ignored)
    // 0x1ede18: 0xf  sync
    ctx->pc = 0x1ede18u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ede1c: 0xbd180040  cache       0x18, 0x40($t0)
    ctx->pc = 0x1ede1cu;
    // CACHE instruction (ignored)
    // 0x1ede20: 0xf  sync
    ctx->pc = 0x1ede20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ede24: 0xbd180080  cache       0x18, 0x80($t0)
    ctx->pc = 0x1ede24u;
    // CACHE instruction (ignored)
    // 0x1ede28: 0xf  sync
    ctx->pc = 0x1ede28u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ede2c: 0xbd1800c0  cache       0x18, 0xC0($t0)
    ctx->pc = 0x1ede2cu;
    // CACHE instruction (ignored)
    // 0x1ede30: 0xf  sync
    ctx->pc = 0x1ede30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ede34: 0xbd180100  cache       0x18, 0x100($t0)
    ctx->pc = 0x1ede34u;
    // CACHE instruction (ignored)
    // 0x1ede38: 0xf  sync
    ctx->pc = 0x1ede38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ede3c: 0xbd180140  cache       0x18, 0x140($t0)
    ctx->pc = 0x1ede3cu;
    // CACHE instruction (ignored)
    // 0x1ede40: 0xf  sync
    ctx->pc = 0x1ede40u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ede44: 0xbd180180  cache       0x18, 0x180($t0)
    ctx->pc = 0x1ede44u;
    // CACHE instruction (ignored)
    // 0x1ede48: 0xf  sync
    ctx->pc = 0x1ede48u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ede4c: 0xbd1801c0  cache       0x18, 0x1C0($t0)
    ctx->pc = 0x1ede4cu;
    // CACHE instruction (ignored)
    // 0x1ede50: 0xf  sync
    ctx->pc = 0x1ede50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ede54: 0x1d40ffed  bgtz        $t2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1EDE54u;
    {
        const bool branch_taken_0x1ede54 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x1EDE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE54u;
        // 0x1ede58: 0x25080200  addiu       $t0, $t0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ede54) {
            ctx->pc = 0x1EDE0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ede0c;
        }
    }
    ctx->pc = 0x1EDE5Cu;
}
