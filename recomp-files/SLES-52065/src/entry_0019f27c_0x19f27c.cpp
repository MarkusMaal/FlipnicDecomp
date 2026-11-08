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

// Function: entry_0019f27c
// Address: 0x19f27c - 0x19f298
void entry_0019f27c_0x19f27c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f27c_0x19f27c");
#endif

    ctx->pc = 0x19f27cu;

    // 0x19f27c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19f280: 0xae820320  sw          $v0, 0x320($s4)
    ctx->pc = 0x19f280u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 800), GPR_U32(ctx, 2));
    // 0x19f284: 0x8e82067c  lw          $v0, 0x67C($s4)
    ctx->pc = 0x19f284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1660)));
    // 0x19f288: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F288u;
    {
        const bool branch_taken_0x19f288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F288u;
        // 0x19f28c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f288) {
            ctx->pc = 0x19F298u;
            return;
        }
    }
    ctx->pc = 0x19F290u;
    // 0x19f290: 0xac400320  sw          $zero, 0x320($v0)
    ctx->pc = 0x19f290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 800), GPR_U32(ctx, 0));
    // 0x19f294: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f298u;
}
