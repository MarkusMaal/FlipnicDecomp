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

// Function: entry_00164dd4
// Address: 0x164dd4 - 0x164de8
void entry_00164dd4_0x164dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164dd4_0x164dd4");
#endif

    ctx->pc = 0x164dd4u;

    // 0x164dd4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x164dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x164dd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164ddc: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x164ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x164de0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x164DE0u;
    {
        const bool branch_taken_0x164de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DE0u;
        // 0x164de4: 0xae620350  sw          $v0, 0x350($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164de0) {
            ctx->pc = 0x164E04u;
            return;
        }
    }
    ctx->pc = 0x164DE8u;
}
