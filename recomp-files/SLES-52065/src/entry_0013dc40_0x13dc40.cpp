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

// Function: entry_0013dc40
// Address: 0x13dc40 - 0x13dc60
void entry_0013dc40_0x13dc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dc40_0x13dc40");
#endif

    ctx->pc = 0x13dc40u;

    // 0x13dc40: 0x8c850124  lw          $a1, 0x124($a0)
    ctx->pc = 0x13dc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x13dc44: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13DC44u;
    {
        const bool branch_taken_0x13dc44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dc44) {
            ctx->pc = 0x13DC60u;
            return;
        }
    }
    ctx->pc = 0x13DC4Cu;
    // 0x13dc4c: 0x8c84017c  lw          $a0, 0x17C($a0)
    ctx->pc = 0x13dc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x13dc50: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13dc54: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13DC54u;
    {
        const bool branch_taken_0x13dc54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13dc54) {
            ctx->pc = 0x13DC60u;
            return;
        }
    }
    ctx->pc = 0x13DC5Cu;
    // 0x13dc5c: 0xe4ac0004  swc1        $f12, 0x4($a1)
    ctx->pc = 0x13dc5cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    ctx->pc = 0x13dc60u;
}
